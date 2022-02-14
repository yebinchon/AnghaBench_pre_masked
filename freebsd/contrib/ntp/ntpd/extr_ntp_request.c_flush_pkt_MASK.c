
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct req_pkt {int dummy; } ;
struct pkt {int dummy; } ;
struct TYPE_2__ {int err_nitems; int auth_seq; int rm_vn_mode; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,struct req_pkt*,int ) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int ,int ,int,struct pkt*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_6(void)
{
 FUNC_1(3, ("request: flushing packet, %d items\n", VAR_5));




 if (VAR_9 == 0 && VAR_5 == 0)
  FUNC_4(VAR_10, VAR_4, (struct req_pkt *)&VAR_8,
   VAR_0);
 else {
  VAR_8.rm_vn_mode = FUNC_2(VAR_1, 0, VAR_7);
  VAR_8.auth_seq = FUNC_0(0, VAR_9);
  VAR_8.err_nitems = FUNC_3((u_short)VAR_5);
  FUNC_5(VAR_10, VAR_4, -1, (struct pkt *)&VAR_8,
   VAR_2+VAR_3);
  VAR_6++;
 }
}
