
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; scalar_t__ text_status; scalar_t__ versioned; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int *) ;
 int * FUNC_2 (int ,int *,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_5,
                                     const char *VAR_6,
                                     const svn_wc_status3_t *VAR_7,
                                     apr_pool_t *VAR_8)
{

  if (VAR_7->versioned
      && VAR_7->kind == VAR_2
      && (VAR_7->text_status == VAR_4
          || VAR_7->text_status == VAR_3))
    {
      return FUNC_2(VAR_0, ((void*)0),
                               FUNC_0("File '%s' has local modifications"),
                               FUNC_1(VAR_6,
                                                      VAR_8));
    }
  return VAR_1;
}
