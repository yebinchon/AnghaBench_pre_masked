
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int l_sigset_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;

void
FUNC_4(sigset_t *VAR_1, l_sigset_t *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_1(*VAR_2);
 for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
  if (FUNC_2(*VAR_1, VAR_3)) {
   VAR_4 = FUNC_3(VAR_3);
   if (VAR_4)
    FUNC_0(*VAR_2, VAR_4);
  }
 }
}
