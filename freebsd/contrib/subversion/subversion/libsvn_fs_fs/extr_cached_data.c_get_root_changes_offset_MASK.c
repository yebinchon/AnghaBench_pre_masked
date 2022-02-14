
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_revnum_t ;
struct TYPE_8__ {TYPE_3__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
struct TYPE_9__ {int file; scalar_t__ is_packed; } ;
typedef TYPE_2__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int max_files_per_dir; } ;
typedef TYPE_3__ fs_fs_data_t ;
typedef int buffer ;
typedef int apr_size_t ;
typedef int apr_seek_where_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int *,int,int *) ;
 int FUNC_2 (int*,TYPE_1__*,int,int *) ;
 int FUNC_3 (int*,int*,int *,int) ;
 int FUNC_4 (int ,char*,int,int *,int *,int *) ;
 int FUNC_5 (int ,int ,int*,int *) ;
 int * FUNC_6 (char*,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(apr_off_t *VAR_3,
                        apr_off_t *VAR_4,
                        svn_fs_fs__revision_file_t *VAR_5,
                        svn_fs_t *VAR_6,
                        svn_revnum_t VAR_7,
                        apr_pool_t *VAR_8)
{
  fs_fs_data_t *VAR_9 = VAR_6->fsap_data;
  apr_off_t VAR_10;
  apr_seek_where_t VAR_11;
  svn_stringbuf_t *VAR_12;
  char VAR_13[64];
  apr_off_t VAR_14;
  apr_off_t VAR_15;
  apr_size_t VAR_16;
  if (VAR_5->is_packed && ((VAR_7 + 1) % VAR_9->max_files_per_dir != 0))
    {
      FUNC_0(FUNC_2(&VAR_15, VAR_6, VAR_7 + 1, VAR_8));
      VAR_11 = VAR_1;
    }
  else
    {
      VAR_11 = VAR_0;
      VAR_15 = 0;
    }


  if (VAR_5->is_packed)
    FUNC_0(FUNC_2(&VAR_10, VAR_6, VAR_7, VAR_8));
  else
    VAR_10 = 0;



  FUNC_0(FUNC_5(VAR_5->file, VAR_11, &VAR_15, VAR_8));

  if (VAR_15 < sizeof(VAR_13))
    {
      VAR_16 = (apr_size_t)VAR_15;
      VAR_14 = 0;
    }
  else
    {
      VAR_16 = sizeof(VAR_13);
      VAR_14 = VAR_15 - sizeof(VAR_13);
    }


  FUNC_0(FUNC_1(VAR_6, VAR_5->file, ((void*)0), VAR_14, VAR_8));
  FUNC_0(FUNC_4(VAR_5->file, VAR_13, VAR_16, ((void*)0), ((void*)0),
                                 VAR_8));


  VAR_12 = FUNC_6(VAR_13, VAR_16, VAR_8);
  FUNC_0(FUNC_3(VAR_3,
                                            VAR_4,
                                            VAR_12,
                                            VAR_7));


  if (VAR_3)
    *VAR_3 += VAR_10;
  if (VAR_4)
    *VAR_4 += VAR_10;

  return VAR_2;
}
