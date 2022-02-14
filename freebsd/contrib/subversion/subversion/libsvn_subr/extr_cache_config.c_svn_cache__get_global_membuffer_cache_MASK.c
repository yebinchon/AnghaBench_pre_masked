
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_membuffer_t ;
typedef int svn_error_t ;
typedef int svn_atomic_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int **,int *) ;
 int FUNC_1 (int *) ;

svn_membuffer_t *
FUNC_2(void)
{
  static svn_membuffer_t *VAR_1 = ((void*)0);
  static svn_atomic_t VAR_2 = 0;

  svn_error_t *VAR_3
    = FUNC_0(&VAR_2, VAR_0, &VAR_1, ((void*)0));
  if (VAR_3)
    {

      FUNC_1(VAR_3);
      return ((void*)0);
    }

  return VAR_1;
}
