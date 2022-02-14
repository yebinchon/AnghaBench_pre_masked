
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int e_type; char* e_name; struct entry* e_links; scalar_t__ e_ino; struct entry* e_entries; struct entry* e_sibling; struct entry* e_parent; void* e_namlen; struct entry* e_next; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,struct entry*) ;
 scalar_t__ FUNC_1 (int,int) ;
 struct entry* VAR_2 ;
 struct entry* FUNC_2 (scalar_t__) ;
 struct entry* FUNC_3 (char*) ;
 int FUNC_4 (struct entry*,int ,long) ;
 int FUNC_5 (char*,...) ;
 void* FUNC_6 (char*) ;
 void* FUNC_7 (char*) ;
 char* FUNC_8 (char*,char) ;

struct entry *
FUNC_9(char *VAR_3, ino_t VAR_4, int VAR_5)
{
 struct entry *VAR_6, *VAR_7;

 if (VAR_2 != ((void*)0)) {
  VAR_6 = VAR_2;
  VAR_2 = VAR_6->e_next;
  FUNC_4(VAR_6, 0, (long)sizeof(struct entry));
 } else {
  VAR_6 = (struct entry *)FUNC_1(1, sizeof(struct entry));
  if (VAR_6 == ((void*)0))
   FUNC_5("no memory to extend symbol table\n");
 }
 VAR_6->e_type = VAR_5 & ~VAR_0;
 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7 == ((void*)0)) {
  if (VAR_4 != VAR_1 || FUNC_2(VAR_1) != ((void*)0))
   FUNC_5("bad name to addentry %s\n", VAR_3);
  VAR_6->e_name = FUNC_6(VAR_3);
  VAR_6->e_namlen = FUNC_7(VAR_3);
  VAR_6->e_parent = VAR_6;
  FUNC_0(VAR_1, VAR_6);
  return (VAR_6);
 }
 VAR_6->e_name = FUNC_6(FUNC_8(VAR_3, '/') + 1);
 VAR_6->e_namlen = FUNC_7(VAR_6->e_name);
 VAR_6->e_parent = VAR_7;
 VAR_6->e_sibling = VAR_7->e_entries;
 VAR_7->e_entries = VAR_6;
 if (VAR_5 & VAR_0) {
  VAR_7 = FUNC_2(VAR_4);
  if (VAR_7 == ((void*)0))
   FUNC_5("link to non-existent name\n");
  VAR_6->e_ino = VAR_4;
  VAR_6->e_links = VAR_7->e_links;
  VAR_7->e_links = VAR_6;
 } else if (VAR_4 != 0) {
  if (FUNC_2(VAR_4) != ((void*)0))
   FUNC_5("duplicate entry\n");
  FUNC_0(VAR_4, VAR_6);
 }
 return (VAR_6);
}
