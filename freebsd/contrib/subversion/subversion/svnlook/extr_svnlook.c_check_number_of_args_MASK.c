
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct svnlook_opt_state {int * arg1; int * arg2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(struct svnlook_opt_state *VAR_3,
                     int VAR_4)
{
  if ((VAR_4 == 0 && VAR_3->arg1 != ((void*)0))
      || (VAR_4 == 1 && VAR_3->arg2 != ((void*)0)))
    return FUNC_1(VAR_0, ((void*)0),
                            FUNC_0("Too many arguments given"));
  if ((VAR_4 == 1 && VAR_3->arg1 == ((void*)0)))
    return FUNC_1(VAR_1, ((void*)0),
                            FUNC_0("Missing repository path argument"));
  return VAR_2;
}
