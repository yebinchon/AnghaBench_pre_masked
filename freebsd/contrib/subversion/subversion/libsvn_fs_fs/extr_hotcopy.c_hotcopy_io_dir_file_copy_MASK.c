
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; scalar_t__ special; scalar_t__ filesize; scalar_t__ mtime; } ;
typedef TYPE_1__ svn_io_dirent2_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char const*,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char const*,char const*,char const*,int *) ;
 int FUNC_4 (TYPE_1__ const**,char const*,int ,int ,int *,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_boolean_t *VAR_4,
                         const char *VAR_5,
                         const char *VAR_6,
                         const char *VAR_7,
                         apr_pool_t *VAR_8)
{
  const svn_io_dirent2_t *VAR_9;
  const svn_io_dirent2_t *VAR_10;
  const char *VAR_11;
  const char *VAR_12;


  VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_8);
  FUNC_0(FUNC_4(&VAR_10, VAR_12, VAR_0, VAR_2,
                              VAR_8, VAR_8));
  if (VAR_10->kind != VAR_3)
    {


      VAR_11 = FUNC_1(VAR_5, VAR_7, VAR_8);
      FUNC_0(FUNC_4(&VAR_9, VAR_11, VAR_0, VAR_0,
                                  VAR_8, VAR_8));
      if (VAR_9->kind == VAR_10->kind &&
          VAR_9->special == VAR_10->special &&
          VAR_9->filesize == VAR_10->filesize &&
          VAR_9->mtime <= VAR_10->mtime)
        return VAR_1;
    }

  if (VAR_4)
    *VAR_4 = VAR_0;

  return FUNC_2(FUNC_3(VAR_5, VAR_6, VAR_7,
                                              VAR_8));
}
