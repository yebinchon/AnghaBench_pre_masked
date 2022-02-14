
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * spill; int spill_start; int * head; } ;
typedef TYPE_1__ svn_spillbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_4,
           const svn_spillbuf_t *VAR_5,
           apr_pool_t *VAR_6)
{
  if (VAR_5->head == ((void*)0) && VAR_5->spill != ((void*)0))
    {
      apr_off_t VAR_7;


      VAR_7 = VAR_5->spill_start;
      FUNC_0(FUNC_1(VAR_5->spill,
                               VAR_0, &VAR_7,
                               VAR_6));
      if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_3;
    }
  else if (VAR_4 != ((void*)0))
    {
      *VAR_4 = VAR_1;
    }

  return VAR_2;
}
