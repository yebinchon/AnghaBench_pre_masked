
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u_long ;
struct entry {scalar_t__ e_type; scalar_t__ e_ino; struct entry* e_next; struct entry* e_links; struct entry* e_entries; struct entry* e_sibling; struct entry* e_parent; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct entry*) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 (struct entry*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;

void
FUNC_4(struct entry *VAR_2, char *VAR_3)
{

 FUNC_1(VAR_1, "bad entry: %s\n", VAR_3);
 FUNC_1(VAR_1, "name: %s\n", FUNC_2(VAR_2));
 FUNC_1(VAR_1, "parent name %s\n", FUNC_2(VAR_2->e_parent));
 if (VAR_2->e_sibling != ((void*)0))
  FUNC_1(VAR_1, "sibling name: %s\n", FUNC_2(VAR_2->e_sibling));
 if (VAR_2->e_entries != ((void*)0))
  FUNC_1(VAR_1, "next entry name: %s\n", FUNC_2(VAR_2->e_entries));
 if (VAR_2->e_links != ((void*)0))
  FUNC_1(VAR_1, "next link name: %s\n", FUNC_2(VAR_2->e_links));
 if (VAR_2->e_next != ((void*)0))
  FUNC_1(VAR_1,
      "next hashchain name: %s\n", FUNC_2(VAR_2->e_next));
 FUNC_1(VAR_1, "entry type: %s\n",
  VAR_2->e_type == VAR_0 ? "NODE" : "LEAF");
 FUNC_1(VAR_1, "inode number: %s\n", (u_long)VAR_2->e_ino);
 FUNC_3("flags: %s\n", FUNC_0(VAR_2));
}
