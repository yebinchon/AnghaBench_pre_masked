
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_altq {int version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int ,struct pfioc_altq*) ;
 int VAR_5 ;

int
FUNC_3(int VAR_6, int VAR_7)
{
 struct pfioc_altq VAR_8;

 VAR_8.version = VAR_2;
 if (FUNC_2(VAR_6, VAR_0, &VAR_8)) {
  if (VAR_4 == VAR_1) {
   if (VAR_7 & VAR_3)
    FUNC_1(VAR_5, "No ALTQ support in kernel\n"
        "ALTQ related functions disabled\n");
   return (0);
  } else
   FUNC_0(1, "DIOCGETALTQS");
 }
 return (1);
}
