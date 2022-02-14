
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sshkey_cert {size_t nprincipals; int * principals; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,char const*,int *) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, struct sshkey_cert *VAR_1)
{
 char *VAR_2;
 u_int VAR_3;



 for (VAR_3 = 0; VAR_3 < VAR_1->nprincipals; VAR_3++) {
  if ((VAR_2 = FUNC_2(VAR_1->principals[VAR_3],
      VAR_0, ((void*)0))) != ((void*)0)) {
   FUNC_0("matched principal from key options \"%.100s\"",
       VAR_2);
   FUNC_1(VAR_2);
   return 1;
  }
 }
 return 0;
}
