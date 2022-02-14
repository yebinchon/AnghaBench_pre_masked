
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int minor; } ;
typedef TYPE_1__ svn_version_t ;
struct TYPE_9__ {scalar_t__ youngest_rev_cache; } ;
typedef TYPE_2__ svn_fs_x__data_t ;
struct TYPE_10__ {scalar_t__ config; int pool; int path; TYPE_2__* fsap_data; } ;
typedef TYPE_3__ svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_1__**,scalar_t__,int *) ;
 int FUNC_5 (TYPE_3__*,char const*,int,int ,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int *) ;

svn_error_t *
FUNC_7(svn_fs_t *VAR_5,
                 const char *VAR_6,
                 apr_pool_t *VAR_7)
{
  int VAR_8 = VAR_3;
  svn_fs_x__data_t *VAR_9 = VAR_5->fsap_data;

  VAR_5->path = FUNC_2(VAR_5->pool, VAR_6);

  if (VAR_5->config)
    {
      svn_version_t *VAR_10;
      FUNC_0(FUNC_4(&VAR_10, VAR_5->config,
                                         VAR_7));


      switch(VAR_10->minor)
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8: return FUNC_3(VAR_1, ((void*)0),
                  FUNC_1("FSX is not compatible with Subversion prior to 1.9"));

          default:VAR_8 = VAR_3;
        }
    }


  FUNC_0(FUNC_5(VAR_5, VAR_6, VAR_8,
                                     VAR_2,
                                     VAR_7));


  FUNC_0(FUNC_6(VAR_5, VAR_0, VAR_7));

  VAR_9->youngest_rev_cache = 0;
  return VAR_4;
}
