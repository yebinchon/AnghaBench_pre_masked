
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
struct TYPE_8__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_9__ {scalar_t__ format; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const**,char const*) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_1__**,int ,int *) ;
 int FUNC_6 (int *,int ,char const**) ;

svn_error_t *
FUNC_7(svn_revnum_t *VAR_3,
                        apr_uint64_t *VAR_4,
                        apr_uint64_t *VAR_5,
                        svn_fs_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  fs_fs_data_t *VAR_8 = VAR_6->fsap_data;
  svn_stringbuf_t *VAR_9;

  FUNC_0(FUNC_5(&VAR_9,
                                  FUNC_4(VAR_6, VAR_7),
                                  VAR_7));

  if (VAR_8->format >= VAR_1)
    {





      FUNC_0(FUNC_6(VAR_3, VAR_9->data, ((void*)0)));

      *VAR_4 = 0;
      *VAR_5 = 0;
    }
  else
    {
      const char *VAR_10;

      FUNC_0(FUNC_6(VAR_3, VAR_9->data, &VAR_10));
      if (*VAR_10 != ' ')
        return FUNC_3(VAR_0, ((void*)0),
                                FUNC_1("Corrupt 'current' file"));

      *VAR_4 = FUNC_2(&VAR_10, VAR_10 + 1);
      if (*VAR_10 != ' ')
        return FUNC_3(VAR_0, ((void*)0),
                                FUNC_1("Corrupt 'current' file"));

      *VAR_5 = FUNC_2(&VAR_10, VAR_10 + 1);
      if (*VAR_10 != '\n')
        return FUNC_3(VAR_0, ((void*)0),
                                FUNC_1("Corrupt 'current' file"));
    }

  return VAR_2;
}
