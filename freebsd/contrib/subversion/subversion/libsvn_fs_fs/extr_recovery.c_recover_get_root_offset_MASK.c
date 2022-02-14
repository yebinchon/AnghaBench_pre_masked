
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef int svn_revnum_t ;
struct TYPE_3__ {int file; int is_packed; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
typedef int buffer ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 int FUNC_2 (int*,int *,int *,int ) ;
 int FUNC_3 (int ,char*,int,int *,int *,int *) ;
 int FUNC_4 (int ,int ,int*,int *) ;
 int * FUNC_5 (char*,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(apr_off_t *VAR_3,
                        svn_revnum_t VAR_4,
                        svn_fs_fs__revision_file_t *VAR_5,
                        apr_pool_t *VAR_6)
{
  char VAR_7[64];
  svn_stringbuf_t *VAR_8;
  apr_off_t VAR_9;
  apr_off_t VAR_10;
  apr_size_t VAR_11;

  FUNC_1(!VAR_5->is_packed);




  VAR_10 = 0;
  FUNC_0(FUNC_4(VAR_5->file, VAR_0, &VAR_10, VAR_6));

  if (VAR_10 < sizeof(VAR_7))
    {
      VAR_11 = (apr_size_t)VAR_10;
      VAR_9 = 0;
    }
  else
    {
      VAR_11 = sizeof(VAR_7);
      VAR_9 = VAR_10 - sizeof(VAR_7);
    }

  FUNC_0(FUNC_4(VAR_5->file, VAR_1, &VAR_9, VAR_6));
  FUNC_0(FUNC_3(VAR_5->file, VAR_7, VAR_11,
                                 ((void*)0), ((void*)0), VAR_6));

  VAR_8 = FUNC_5(VAR_7, VAR_11, VAR_6);
  FUNC_0(FUNC_2(VAR_3, ((void*)0), VAR_8, VAR_4));

  return VAR_2;
}
