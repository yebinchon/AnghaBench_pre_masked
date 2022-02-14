
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_error_t *VAR_2,
                 svn_error_t *VAR_3,
                 svn_error_t *VAR_4,
                 apr_pool_t *VAR_5)
{
  svn_error_t *VAR_6;


  if (! (VAR_2 || VAR_3 || VAR_4))
    return VAR_1;



  if (VAR_2)
    {
      VAR_2 = FUNC_3
        (VAR_2, FUNC_0("Commit failed (details follow):"));
      VAR_6 = VAR_2;
    }



  else
    VAR_6 = FUNC_2(VAR_0, ((void*)0),
                           FUNC_0("Commit succeeded, but other errors follow:"));


  if (VAR_3)
    {

      VAR_3 = FUNC_3
        (VAR_3, FUNC_0("Error unlocking locked dirs (details follow):"));


      FUNC_1(VAR_6, VAR_3);
    }


  if (VAR_4)
    {

      VAR_4 = FUNC_3
        (VAR_4, FUNC_0("Error bumping revisions post-commit (details follow):"));


      FUNC_1(VAR_6, VAR_4);
    }

  return VAR_6;
}
