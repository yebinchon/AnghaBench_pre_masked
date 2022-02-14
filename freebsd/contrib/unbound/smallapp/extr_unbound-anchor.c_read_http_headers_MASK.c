
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int SSL ;


 int FUNC_0 (char*,size_t*,int*) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;

__attribute__((used)) static size_t
FUNC_2(SSL* VAR_0, size_t* VAR_1)
{
 char VAR_2[1024];
 int VAR_3 = 0;
 *VAR_1 = 0;
 while(FUNC_1(VAR_0, VAR_2, sizeof(VAR_2))) {
  if(VAR_2[0] == 0)
   return 1;
  if(!FUNC_0(VAR_2, VAR_1, &VAR_3))
   return 0;
 }
 return 0;
}
