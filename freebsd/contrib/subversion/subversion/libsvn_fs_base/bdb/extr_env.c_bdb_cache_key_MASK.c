
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int inode; int device; } ;
typedef TYPE_1__ bdb_env_key_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int inode; int device; } ;
typedef TYPE_2__ apr_finfo_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 char* FUNC_4 (char const*,int ,int *) ;
 int * FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int **,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(bdb_env_key_t *VAR_6, apr_file_t **VAR_7,
              const char *VAR_8, apr_pool_t *VAR_9)
{
  const char *VAR_10 = FUNC_4(VAR_8, VAR_4, VAR_9);
  apr_file_t *VAR_11;
  apr_status_t VAR_12;
  apr_finfo_t VAR_13;

  FUNC_0(FUNC_6(&VAR_11, VAR_10,
                           VAR_3, VAR_2, VAR_9));

  VAR_12 = FUNC_2(&VAR_13, VAR_0 | VAR_1,
                              VAR_11);
  if (VAR_12)
    return FUNC_5
      (VAR_12, "Can't create BDB environment cache key");



  FUNC_3(VAR_6, 0, sizeof *VAR_6);
  VAR_6->device = VAR_13.device;
  VAR_6->inode = VAR_13.inode;

  if (VAR_7)
    *VAR_7 = VAR_11;
  else
    FUNC_1(VAR_11);

  return VAR_5;
}
