
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct member_entry {char* key; char* domain; struct member_entry* next; struct grouplist* groups; } ;
struct grouplist {char* groupname; struct grouplist* next; } ;
struct group_entry {struct group_entry* next; int key; } ;
typedef int readbuf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char**,char**,char**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,int,int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int,char**,char*) ;
 struct group_entry** VAR_2 ;
 int FUNC_9 (struct member_entry**,char*,int ,char*) ;
 struct member_entry** VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_10 (char*,...) ;
 int * VAR_6 ;
 int FUNC_11 (struct group_entry**,char*,char*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;

int
FUNC_17(int VAR_7, char *VAR_8[])
{
 FILE *VAR_9;
 char VAR_10[VAR_0];
 struct group_entry *VAR_11;
 struct member_entry *VAR_12;
 char *VAR_13, *VAR_14, *VAR_15;
 int VAR_16;
 char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 int VAR_19 = -1, VAR_20;

 if (VAR_7 < 2)
  FUNC_15();

 while ((VAR_16 = FUNC_8(VAR_7, VAR_8, "uhf:")) != -1) {
  switch(VAR_16) {
  case 'u':
   if (VAR_19 != -1) {
    FUNC_16("please use only one of -u or -h");
    FUNC_15();
   }
   VAR_19 = 0;
   break;
  case 'h':
   if (VAR_19 != -1) {
    FUNC_16("please use only one of -u or -h");
    FUNC_15();
   }
   VAR_19 = 1;
   break;
  case 'f':
   VAR_4 = VAR_5;
   break;
  default:
   FUNC_15();
   break;
  }
 }

 if (VAR_19 == -1)
  FUNC_15();

 if (FUNC_12(VAR_4, "-")) {
  if ((VAR_9 = FUNC_7(VAR_4, "r")) == ((void*)0)) {
   FUNC_3(1, "%s", VAR_4);
  }
 } else {
  VAR_9 = VAR_6;
 }


 while (FUNC_6(VAR_10, VAR_0, VAR_9)) {
  if (VAR_10[0] == '#')
   continue;

  while(VAR_10[FUNC_13(VAR_10) - 2] == '\\') {
   FUNC_6((char *)&VAR_10[FUNC_13(VAR_10) - 2],
     sizeof(VAR_10) - FUNC_13(VAR_10), VAR_9);
  }
  VAR_18 = ((void*)0);
  if ((VAR_18 = (char *)(FUNC_14(VAR_10, " \t") + 1)) < (char *)2)
   continue;
  VAR_17 = (char *)&VAR_10;
  *(VAR_18 - 1) = '\0';
  FUNC_11(VAR_2, VAR_17, VAR_18);
 }

 FUNC_5(VAR_9);





 for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++) {
  VAR_11 = VAR_2[VAR_20];
  while(VAR_11) {
   FUNC_2(VAR_11->key);
   while(FUNC_1(&VAR_13, &VAR_14, &VAR_15) != 0) {
    if (VAR_19 ? VAR_13 && FUNC_12(VAR_13,"-") : VAR_14 && FUNC_12(VAR_14, "-"))
     FUNC_9(VAR_3, VAR_19 ? VAR_13 : VAR_14, VAR_11->key, VAR_15);
   }
   VAR_11 = VAR_11->next;
  }
 }


 FUNC_0();


 for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++) {
  VAR_12 = VAR_3[VAR_20];
  while(VAR_12) {
   struct grouplist *VAR_21;
   FUNC_10 ("%s.%s\t", VAR_12->key, VAR_12->domain);
   VAR_21 = VAR_12->groups;
   while(VAR_21) {
    FUNC_10 ("%s", VAR_21->groupname);
    VAR_21 = VAR_21->next;
    if (VAR_21)
     FUNC_10(",");
   }
   VAR_12 = VAR_12->next;
   FUNC_10 ("\n");
  }
 }


 FUNC_4(0);
}
