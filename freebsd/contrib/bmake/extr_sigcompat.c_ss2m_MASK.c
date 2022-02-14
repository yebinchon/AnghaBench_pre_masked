
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int MASK_T ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static MASK_T
FUNC_1(sigset_t *VAR_0)
{
 MASK_T VAR_1[(sizeof(sigset_t) / sizeof(MASK_T)) + 1];

 FUNC_0((char *) VAR_1, (char *) VAR_0, sizeof(sigset_t));
 return VAR_1[0];
}
