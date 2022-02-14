
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sshmac {scalar_t__ enabled; scalar_t__ etm; } ;
struct sshenc {int cipher; } ;
struct ssh {struct session_state* state; } ;
struct session_state {size_t packet_discard_mac_already; int input; scalar_t__ packet_discard; struct sshmac* packet_discard_mac; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ssh*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ssh*,char*) ;

__attribute__((used)) static int
FUNC_4(struct ssh *VAR_1, struct sshenc *VAR_2,
    struct sshmac *VAR_3, size_t VAR_4, u_int VAR_5)
{
 struct session_state *VAR_6 = VAR_1->state;
 int VAR_7;

 if (VAR_2 == ((void*)0) || !FUNC_0(VAR_2->cipher) || (VAR_3 && VAR_3->etm)) {
  if ((VAR_7 = FUNC_3(VAR_1, "Packet corrupt")) != 0)
   return VAR_7;
  return VAR_0;
 }




 if (VAR_3 && VAR_3->enabled) {
  VAR_6->packet_discard_mac = VAR_3;
  VAR_6->packet_discard_mac_already = VAR_4;
 }
 if (FUNC_2(VAR_6->input) >= VAR_5)
  return FUNC_1(VAR_1);
 VAR_6->packet_discard = VAR_5 - FUNC_2(VAR_6->input);
 return 0;
}
