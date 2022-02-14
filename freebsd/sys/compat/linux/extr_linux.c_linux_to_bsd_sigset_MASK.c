
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int l_sigset_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

void
FUNC_4(l_sigset_t *VAR_1, sigset_t *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_2(*VAR_2);
 for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++) {
  if (FUNC_0(*VAR_1, VAR_4)) {
   VAR_3 = FUNC_3(VAR_4);
   if (VAR_3)
    FUNC_1(*VAR_2, VAR_3);
  }
 }
}
