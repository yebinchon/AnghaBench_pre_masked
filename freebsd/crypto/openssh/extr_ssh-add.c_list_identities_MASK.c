
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ssh_identitylist {size_t nkeys; char** comments; int * keys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int,struct ssh_identitylist**) ;
 int FUNC_5 (struct ssh_identitylist*) ;
 char* FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_11(int VAR_5, int VAR_6)
{
 char *VAR_7;
 int VAR_8;
 struct ssh_identitylist *VAR_9;
 u_int32_t VAR_10;
 size_t VAR_11;

 if ((VAR_8 = FUNC_4(VAR_5, &VAR_9)) != 0) {
  if (VAR_8 != VAR_0)
   FUNC_0(VAR_3, "error fetching identities: %s\n",
       FUNC_3(VAR_8));
  else
   FUNC_2("The agent has no identities.\n");
  return -1;
 }
 for (VAR_11 = 0; VAR_11 < VAR_9->nkeys; VAR_11++) {
  if (VAR_6) {
   VAR_7 = FUNC_6(VAR_9->keys[VAR_11],
       VAR_2, VAR_1);
   FUNC_2("%u %s %s (%s)\n", FUNC_8(VAR_9->keys[VAR_11]),
       VAR_7 == ((void*)0) ? "(null)" : VAR_7, VAR_9->comments[VAR_11],
       FUNC_9(VAR_9->keys[VAR_11]));
   FUNC_1(VAR_7);
  } else {
   if ((VAR_8 = FUNC_10(VAR_9->keys[VAR_11], VAR_4)) != 0) {
    FUNC_0(VAR_3, "sshkey_write: %s\n",
        FUNC_3(VAR_8));
    continue;
   }
   FUNC_0(VAR_4, " %s", VAR_9->comments[VAR_11]);
   VAR_10 = FUNC_7(VAR_9->keys[VAR_11]);
   if (VAR_10 > 0)
    FUNC_0(VAR_4,
        " [signatures left %ld]", VAR_10);
   FUNC_0(VAR_4, "\n");
  }
 }
 FUNC_5(VAR_9);
 return 0;
}
