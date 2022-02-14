
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int minor; } ;
typedef TYPE_1__ svn_version_t ;
typedef int svn_mutex__t ;
struct TYPE_11__ {scalar_t__ fsap_data; int path; scalar_t__ config; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_12__ {int format; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*,int ,int,char const*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__**,scalar_t__,int *) ;
 int * FUNC_8 (TYPE_2__*) ;
 int * FUNC_9 (int ,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_fs_t *VAR_4,
            const char *VAR_5,
            svn_mutex__t *VAR_6,
            apr_pool_t *VAR_7,
            apr_pool_t *VAR_8)
{
  int VAR_9 = VAR_1;
  svn_error_t *VAR_10;


  if (VAR_4->config)
    {
      svn_version_t *VAR_11;
      FUNC_0(FUNC_7(&VAR_11, VAR_4->config,
                                         VAR_7));


      switch(VAR_11->minor)
        {
          case 0:
          case 1:
          case 2:
          case 3: VAR_9 = 1;
                  break;

          case 4: VAR_9 = 2;
                  break;

          case 5: VAR_9 = 3;
                  break;

          default:VAR_9 = VAR_1;
        }
    }


  VAR_10 = FUNC_2(VAR_4, VAR_3, VAR_9, VAR_5);
  if (VAR_10) goto error;


  VAR_10 = FUNC_8(VAR_4);
  if (VAR_10) goto error;


  VAR_10 = FUNC_9(FUNC_4(VAR_4->path, VAR_0,
                                                      VAR_7),
                                      VAR_9, VAR_7);
  if (VAR_10) goto error;

  ((base_fs_data_t *) VAR_4->fsap_data)->format = VAR_9;

  FUNC_0(FUNC_3(VAR_4, VAR_7));
  return VAR_2;

error:
  return FUNC_5(VAR_10,
                                  FUNC_6(FUNC_1(VAR_4)));
}
