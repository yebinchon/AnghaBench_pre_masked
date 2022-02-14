
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,int ,int *) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1)
{
 int VAR_2;




 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != -1) {
  if (FUNC_2(VAR_2, VAR_0, ((void*)0)) == -1)
   FUNC_0(1, "shmctl IPC_RMID");
 }
}
