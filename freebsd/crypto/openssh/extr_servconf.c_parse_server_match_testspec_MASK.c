
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection_info {int lport; void* rdomain; void* laddress; void* user; void* host; void* address; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char**,char*) ;
 void* FUNC_4 (char*) ;

int FUNC_5(struct connection_info *VAR_1, char *VAR_2)
{
 char *VAR_3;

 while ((VAR_3 = FUNC_3(&VAR_2, ",")) && *VAR_3 != '\0') {
  if (FUNC_2(VAR_3, "addr=", 5) == 0) {
   VAR_1->address = FUNC_4(VAR_3 + 5);
  } else if (FUNC_2(VAR_3, "host=", 5) == 0) {
   VAR_1->host = FUNC_4(VAR_3 + 5);
  } else if (FUNC_2(VAR_3, "user=", 5) == 0) {
   VAR_1->user = FUNC_4(VAR_3 + 5);
  } else if (FUNC_2(VAR_3, "laddr=", 6) == 0) {
   VAR_1->laddress = FUNC_4(VAR_3 + 6);
  } else if (FUNC_2(VAR_3, "rdomain=", 8) == 0) {
   VAR_1->rdomain = FUNC_4(VAR_3 + 8);
  } else if (FUNC_2(VAR_3, "lport=", 6) == 0) {
   VAR_1->lport = FUNC_0(VAR_3 + 6);
   if (VAR_1->lport == -1) {
    FUNC_1(VAR_0, "Invalid port '%s' in test mode"
       " specification %s\n", VAR_3+6, VAR_3);
    return -1;
   }
  } else {
   FUNC_1(VAR_0, "Invalid test mode specification %s\n",
      VAR_3);
   return -1;
  }
 }
 return 0;
}
