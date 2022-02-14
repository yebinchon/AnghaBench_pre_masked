
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int const*,int *) ;

int
FUNC_2(int VAR_2, const sigset_t *VAR_3, sigset_t *VAR_4)
{
 const sigset_t *VAR_5 = VAR_3;
 sigset_t VAR_6;

 if (VAR_2 != VAR_1) {
  if (VAR_3 != ((void*)0)) {
   VAR_6 = *VAR_3;
   FUNC_0(VAR_6, VAR_0);
   VAR_5 = &VAR_6;
  }
 }
 return (FUNC_1(VAR_2, VAR_5, VAR_4));
}
