
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int revision; int changed_paths2; int revprops; } ;
typedef TYPE_1__ svn_log_entry_t ;
typedef int svn_error_t ;
struct log_wrapper_baton {int baton; int * (* receiver ) (int ,int ,int ,char const*,char const*,char const*,int *) ;} ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int ,int ,int ,char const*,char const*,char const*,int *) ;
 int FUNC_2 (char const**,char const**,char const**,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
                     svn_log_entry_t *VAR_2,
                     apr_pool_t *VAR_3)
{
  struct log_wrapper_baton *VAR_4 = VAR_1;

  if (VAR_4->receiver && FUNC_0(VAR_2->revision))
    {
      const char *VAR_5, *VAR_6, *VAR_7;
      FUNC_2(&VAR_5, &VAR_6, &VAR_7,
                                  VAR_2->revprops);
      return VAR_4->receiver(VAR_4->baton,
                           VAR_2->changed_paths2,
                           VAR_2->revision,
                           VAR_5, VAR_6, VAR_7,
                           VAR_3);
    }

  return VAR_0;
}
