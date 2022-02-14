
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct member_entry {char* key; char* domain; struct member_entry* next; struct grouplist* groups; } ;
struct grouplist {char* groupname; struct grouplist* next; } ;


 size_t FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;

void
FUNC_4(struct member_entry *VAR_0[], char *VAR_1, char *VAR_2, char *VAR_3)
{
 struct member_entry *VAR_4, *VAR_5;
 struct grouplist *VAR_6;
 u_int32_t VAR_7;

 VAR_7 = FUNC_0(VAR_1);
 VAR_4 = VAR_0[VAR_7];

 VAR_6 = (struct grouplist *)FUNC_1(sizeof(struct grouplist));
 VAR_6->groupname = FUNC_3(VAR_2);
 VAR_6->next = ((void*)0);


 while (VAR_4) {
  if (!FUNC_2(VAR_4->key, VAR_1)) {
   VAR_6->next = VAR_4->groups;
   VAR_4->groups = VAR_6;
   return;
  }
  VAR_4 = VAR_4->next;
 }


 VAR_5 = (struct member_entry *)FUNC_1(sizeof(struct member_entry));
 VAR_5->key = FUNC_3(VAR_1);
 VAR_5->domain = VAR_3 ? FUNC_3(VAR_3) : "*";
 VAR_5->groups = VAR_6;
 VAR_5->next = VAR_0[VAR_7];
 VAR_0[VAR_7] = VAR_5;

 return;
}
