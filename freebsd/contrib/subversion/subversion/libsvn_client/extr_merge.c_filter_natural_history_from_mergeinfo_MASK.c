
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_rangelist_t ;
typedef scalar_t__ svn_mergeinfo_t ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ end; int inheritable; } ;
typedef TYPE_1__ svn_merge_range_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (scalar_t__,char const*) ;
 int * FUNC_2 (scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_3 (int **,int *,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_rangelist_t **VAR_2,
                                      const char *VAR_3,
                                      svn_mergeinfo_t VAR_4,
                                      svn_merge_range_t *VAR_5,
                                      apr_pool_t *VAR_6)
{

  svn_rangelist_t *VAR_7 =
    FUNC_2(VAR_5->start, VAR_5->end,
                              VAR_5->inheritable, VAR_6);

  *VAR_2 = ((void*)0);



  if (VAR_4
      && (VAR_5->start < VAR_5->end))
    {
      svn_rangelist_t *VAR_8 =
                        FUNC_1(VAR_4, VAR_3);

      if (VAR_8)
        FUNC_0(FUNC_3(VAR_2,
                                     VAR_8,
                                     VAR_7,
                                     VAR_0, VAR_6));
    }



  if (! (*VAR_2))
    *VAR_2 = VAR_7;

  return VAR_1;
}
