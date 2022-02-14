
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ format; int flush_to_disk; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_1 (int *,char*,int ,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (char const*,char*,int ,char const*,int ,int *) ;

svn_error_t *
FUNC_6(svn_fs_t *VAR_3,
                         svn_revnum_t VAR_4,
                         apr_uint64_t VAR_5,
                         apr_uint64_t VAR_6,
                         apr_pool_t *VAR_7)
{
  char *VAR_8;
  const char *VAR_9;
  fs_fs_data_t *VAR_10 = VAR_3->fsap_data;


  if (VAR_10->format >= VAR_0)
    {
      VAR_8 = FUNC_1(VAR_7, "%ld\n", VAR_4);
    }
  else
    {
      char VAR_11[VAR_1];
      char VAR_12[VAR_1];
      FUNC_3(VAR_11, VAR_5);
      FUNC_3(VAR_12, VAR_6);

      VAR_8 = FUNC_1(VAR_7, "%ld %s %s\n", VAR_4, VAR_11, VAR_12);
    }

  VAR_9 = FUNC_4(VAR_3, VAR_7);
  FUNC_0(FUNC_5(VAR_9, VAR_8, FUNC_2(VAR_8),
                               VAR_9 ,
                               VAR_10->flush_to_disk, VAR_7));

  return VAR_2;
}
