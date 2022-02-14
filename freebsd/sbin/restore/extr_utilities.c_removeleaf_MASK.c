
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ e_type; int e_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct entry*,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,char*,char*) ;
 char* FUNC_2 (struct entry*) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,char*) ;

void
FUNC_6(struct entry *VAR_7)
{
 char *VAR_8;

 if (VAR_7->e_type != VAR_0)
  FUNC_0(VAR_7, "removeleaf: not a leaf");
 VAR_7->e_flags |= VAR_2;
 VAR_7->e_flags &= ~VAR_3;
 VAR_8 = FUNC_2(VAR_7);
 if (!VAR_1 && FUNC_4(VAR_8) < 0) {
  FUNC_1(VAR_5, "warning: %s: %s\n", VAR_8, FUNC_3(VAR_4));
  return;
 }
 FUNC_5(VAR_6, "Remove leaf %s\n", VAR_8);
}
