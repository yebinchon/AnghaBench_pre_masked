
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ e_type; int e_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct entry*,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 char* FUNC_3 (struct entry*) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,char*) ;

void
FUNC_6(struct entry *VAR_7)
{
 char *VAR_8;

 if (VAR_7->e_type != VAR_1)
  FUNC_0(VAR_7, "newnode: not a node");
 VAR_8 = FUNC_3(VAR_7);
 if (!VAR_2 && FUNC_2(VAR_8, 0777) < 0 && !VAR_6) {
  VAR_7->e_flags |= VAR_0;
  FUNC_1(VAR_4, "warning: %s: %s\n", VAR_8, FUNC_4(VAR_3));
  return;
 }
 FUNC_5(VAR_5, "Make node %s\n", VAR_8);
}
