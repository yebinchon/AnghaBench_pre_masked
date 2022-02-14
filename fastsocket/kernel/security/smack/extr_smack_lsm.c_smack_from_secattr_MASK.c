
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lvl; int cat; } ;
struct TYPE_4__ {int secid; TYPE_1__ mls; } ;
struct netlbl_lsm_secattr {int flags; TYPE_2__ attr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__,char*,char*) ;
 char* FUNC_6 (int ) ;
 char* VAR_6 ;
 int FUNC_7 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_8(struct netlbl_lsm_secattr *VAR_7, char *VAR_8)
{
 char VAR_9[VAR_3];
 char *VAR_10;
 int VAR_11;

 if ((VAR_7->flags & VAR_1) != 0) {
  FUNC_2(VAR_9, '\0', VAR_3);
  if ((VAR_7->flags & VAR_0) != 0)
   for (VAR_11 = -1;;) {
    VAR_11 = FUNC_3(
     VAR_7->attr.mls.cat, VAR_11 + 1);
    if (VAR_11 < 0)
     break;
    FUNC_4(VAR_11, VAR_9);
   }




  if (VAR_7->attr.mls.lvl == VAR_5) {
   FUNC_1(VAR_8, VAR_9, VAR_4);
   return;
  }




  FUNC_5(VAR_7->attr.mls.lvl, VAR_9, VAR_8);
  return;
 }
 if ((VAR_7->flags & VAR_2) != 0) {



  VAR_10 = FUNC_6(VAR_7->attr.secid);







  FUNC_0(VAR_10 == ((void*)0));
  FUNC_7(VAR_8, VAR_10, VAR_4);
  return;
 }





 FUNC_7(VAR_8, VAR_6, VAR_4);
 return;
}
