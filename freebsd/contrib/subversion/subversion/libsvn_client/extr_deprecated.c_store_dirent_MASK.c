
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int svn_error_t ;
typedef TYPE_1__ svn_dirent_t ;
struct ls_baton {int locks; int dirents; int pool; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char* FUNC_0 (int ,char const*) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,int ) ;
 int FUNC_2 (int ,char const*,TYPE_1__ const*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_3 (char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2, const char *VAR_3, const svn_dirent_t *VAR_4,
             const svn_lock_t *VAR_5, const char *VAR_6, apr_pool_t *VAR_7)
{
  struct ls_baton *VAR_8 = VAR_2;




  VAR_4 = FUNC_1(VAR_4, VAR_8->pool);







  if (VAR_3[0] == '\0')
    {
      if (VAR_4->kind == VAR_1)
        {
          const char *VAR_9 = FUNC_3(VAR_6, VAR_8->pool);
          FUNC_2(VAR_8->dirents, VAR_9, VAR_4);
          if (VAR_5)
            FUNC_2(VAR_8->locks, VAR_9, VAR_5);
        }
    }
  else
    {
      VAR_3 = FUNC_0(VAR_8->pool, VAR_3);
      FUNC_2(VAR_8->dirents, VAR_3, VAR_4);
      if (VAR_5)
        FUNC_2(VAR_8->locks, VAR_3, VAR_5);
    }

  return VAR_0;
}
