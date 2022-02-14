
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ kind; int mtime; int filesize; int special; } ;
typedef TYPE_1__ svn_io_dirent2_t ;
struct TYPE_16__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
typedef int apr_hash_t ;
struct TYPE_17__ {int mtime; int size; scalar_t__ name; } ;
typedef TYPE_3__ apr_finfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 TYPE_2__* FUNC_5 (char const**,scalar_t__,char const*,int *) ;
 int FUNC_6 (scalar_t__*,int *,TYPE_3__*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 char* FUNC_8 (char const*,int *) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (char const*,int *) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_2__* FUNC_12 (int ,int *,int ,int ,...) ;
 int FUNC_13 (int *,char const*) ;
 void* FUNC_14 (int *) ;
 TYPE_2__* FUNC_15 (int **,int ,int ,int *,int *) ;
 TYPE_2__* FUNC_16 (TYPE_3__*,char const*,int,int *) ;
 scalar_t__ VAR_8 ;

svn_error_t *
FUNC_17(const svn_io_dirent2_t **VAR_9,
                    const char *VAR_10,
                    svn_boolean_t VAR_11,
                    svn_boolean_t VAR_12,
                    apr_pool_t *VAR_13,
                    apr_pool_t *VAR_14)
{
  apr_finfo_t VAR_15;
  svn_io_dirent2_t *VAR_16;
  svn_error_t *VAR_17;
  apr_int32_t VAR_18 = VAR_5 | VAR_1
                       | VAR_4 | VAR_2;






  VAR_17 = FUNC_16(&VAR_15, VAR_10, VAR_18, VAR_14);

  if (VAR_17 && VAR_12 &&
      (FUNC_0(VAR_17->apr_err)
       || FUNC_3(VAR_17->apr_err)))
    {
      FUNC_11(VAR_17);
      VAR_16 = FUNC_14(VAR_13);
      FUNC_2(VAR_16->kind == VAR_8);

      *VAR_9 = VAR_16;
      return VAR_6;
    }
  FUNC_1(VAR_17);
  VAR_16 = FUNC_14(VAR_13);
  FUNC_6(&(VAR_16->kind), &(VAR_16->special), &VAR_15);

  VAR_16->filesize = VAR_15.size;
  VAR_16->mtime = VAR_15.mtime;

  *VAR_9 = VAR_16;

  return VAR_6;
}
