
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cnt; } ;
struct TYPE_4__ {int lid; TYPE_3__ drpath; int gid; scalar_t__ grh_present; } ;
typedef TYPE_1__ ib_portid_t ;
typedef int gid ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_1 (int ,int ,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,...) ;

char *FUNC_3(ib_portid_t * VAR_1)
{
 static char VAR_2[1024] = "local";
 int VAR_3 = 0;

 if (VAR_1->lid > 0) {
  VAR_3 += FUNC_2(VAR_2 + VAR_3, "Lid %d", VAR_1->lid);
  if (VAR_1->grh_present) {
   char VAR_4[sizeof
     "ffff:ffff:ffff:ffff:ffff:ffff:ffff:ffff"];
   if (FUNC_1(VAR_0, VAR_1->gid, VAR_4, sizeof(VAR_4)))
    VAR_3 += FUNC_2(VAR_2 + VAR_3, " Gid %s", VAR_4);
  }
  if (VAR_1->drpath.cnt)
   VAR_3 += FUNC_2(VAR_2 + VAR_3, " ");
  else
   return VAR_2;
 }
 VAR_3 += FUNC_2(VAR_2 + VAR_3, "DR path ");
 FUNC_0(&(VAR_1->drpath), VAR_2 + VAR_3, sizeof(VAR_2) - VAR_3);

 return VAR_2;
}
