
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int minor; } ;
typedef TYPE_1__ svn_version_t ;
struct TYPE_8__ {scalar_t__ config; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,char const*,int ,int ,int) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_1__**,scalar_t__,int *) ;
 int FUNC_5 (TYPE_2__*,char const*,int,int,int ,int *) ;
 int FUNC_6 (TYPE_2__*,int ,int *) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 char* FUNC_8 (scalar_t__,int ) ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_9,
                  const char *VAR_10,
                  apr_pool_t *VAR_11)
{
  int VAR_12 = VAR_6;
  int VAR_13 = VAR_5;
  svn_boolean_t VAR_14;


  if (VAR_9->config)
    {
      svn_version_t *VAR_15;
      const char *VAR_16;
      FUNC_0(FUNC_4(&VAR_15, VAR_9->config,
                                         VAR_11));


      switch(VAR_15->minor)
        {
          case 0: return FUNC_3(VAR_2, ((void*)0),
                 FUNC_1("FSFS is not compatible with Subversion prior to 1.1"));

          case 1:
          case 2:
          case 3: VAR_12 = 1;
                  break;

          case 4: VAR_12 = 2;
                  break;

          case 5: VAR_12 = 3;
                  break;

          case 6:
          case 7: VAR_12 = 4;
                  break;

          case 8: VAR_12 = 6;
                  break;
          case 9: VAR_12 = 7;
                  break;

          default:VAR_12 = VAR_6;
        }

      VAR_16 = FUNC_8(VAR_9->config, VAR_4);
      if (VAR_16)
        {
          apr_int64_t VAR_17;
          FUNC_0(FUNC_2(&VAR_17, VAR_16, 0,
                                       VAR_0, 10));

          VAR_13 = (int) VAR_17;
        }
    }

  VAR_14 = FUNC_7(VAR_9->config,
                                      VAR_3,
                                      VAR_8);


  FUNC_0(FUNC_5(VAR_9, VAR_10, VAR_12, VAR_13,
                                      VAR_14, VAR_11));


  FUNC_0(FUNC_6(VAR_9, VAR_1, VAR_11));

  return VAR_7;
}
