
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int MASK_T ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_2(sigset_t *VAR_0, MASK_T *VAR_1)
{
 if (sizeof(sigset_t) > sizeof(MASK_T))
  FUNC_1((char *) VAR_0, 0, sizeof(sigset_t));

 FUNC_0((char *) VAR_0, (char *) VAR_1, sizeof(MASK_T));
}
