
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_dirent_t ;
struct TYPE_2__ {int receiver_baton; int * (* receiver ) (char const*,int *,int ,int *) ;} ;
typedef TYPE_1__ dirent_receiver_baton_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (char const*,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const char *VAR_0,
                svn_dirent_t *VAR_1,
                void *VAR_2,
                apr_pool_t *VAR_3)
{
  dirent_receiver_baton_t *VAR_4 = VAR_2;
  return VAR_4->receiver(VAR_0, VAR_1, VAR_4->receiver_baton, VAR_3);
}
