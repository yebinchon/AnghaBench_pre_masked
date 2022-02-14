
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int e_flags; int e_name; int e_namlen; struct entry* e_entries; struct entry* e_sibling; struct entry* e_parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct entry*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct entry*) ;
 struct entry* FUNC_3 (char*) ;
 int FUNC_4 (struct entry*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char) ;

void
FUNC_9(struct entry *VAR_1, char *VAR_2)
{
 struct entry *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_1, "cannot move ROOT");
 if (VAR_3 != VAR_1->e_parent) {
  FUNC_4(VAR_1);
  VAR_1->e_parent = VAR_3;
  VAR_1->e_sibling = VAR_3->e_entries;
  VAR_3->e_entries = VAR_1;
 }
 VAR_4 = FUNC_8(VAR_2, '/') + 1;
 FUNC_1(VAR_1->e_name);
 VAR_1->e_name = FUNC_5(VAR_4);
 VAR_1->e_namlen = FUNC_7(VAR_4);
 if (FUNC_6(FUNC_2(VAR_1), VAR_1->e_name) == 0)
  VAR_1->e_flags |= VAR_0;
 else
  VAR_1->e_flags &= ~VAR_0;
}
