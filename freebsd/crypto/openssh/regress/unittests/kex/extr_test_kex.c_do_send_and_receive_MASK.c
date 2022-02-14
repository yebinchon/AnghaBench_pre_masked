
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct ssh {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,size_t) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct ssh*,scalar_t__ const*,size_t) ;
 int FUNC_4 (struct ssh*,size_t) ;
 scalar_t__* FUNC_5 (struct ssh*,size_t*) ;
 int FUNC_6 (struct ssh*,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_7(struct ssh *VAR_2, struct ssh *VAR_3)
{
 u_char VAR_4;
 size_t VAR_5;
 const u_char *VAR_6;
 int VAR_7;

 for (;;) {
  if ((VAR_7 = FUNC_6(VAR_2, &VAR_4)) != 0) {
   FUNC_0(VAR_1, "ssh_packet_next: %s\n", FUNC_2(VAR_7));
   return VAR_7;
  }
  if (VAR_4 != 0)
   return 0;
  VAR_6 = FUNC_5(VAR_2, &VAR_5);
  if (VAR_0)
   FUNC_1("%zu", VAR_5);
  if (VAR_5 == 0)
   return 0;
  if ((VAR_7 = FUNC_4(VAR_2, VAR_5)) != 0 ||
      (VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_5)) != 0)
   return VAR_7;
 }
}
