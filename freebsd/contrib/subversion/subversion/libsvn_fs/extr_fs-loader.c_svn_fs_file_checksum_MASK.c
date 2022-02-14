
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_11__ {TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_12__ {scalar_t__ kind; } ;
typedef TYPE_3__ svn_checksum_t ;
typedef scalar_t__ svn_checksum_kind_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int (* file_checksum ) (TYPE_3__**,scalar_t__,TYPE_2__*,char const*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_3__**,scalar_t__,TYPE_2__*,char const*,int *) ;
 int FUNC_2 (int **,TYPE_2__*,char const*,int *) ;
 int FUNC_3 (TYPE_3__**,int *,scalar_t__,int *,int *) ;

svn_error_t *
FUNC_4(svn_checksum_t **VAR_1,
                     svn_checksum_kind_t VAR_2,
                     svn_fs_root_t *VAR_3,
                     const char *VAR_4,
                     svn_boolean_t VAR_5,
                     apr_pool_t *VAR_6)
{
  FUNC_0(VAR_3->vtable->file_checksum(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6));

  if (VAR_5 && (*VAR_1 == ((void*)0) || (*VAR_1)->kind != VAR_2))
    {
      svn_stream_t *VAR_7;

      FUNC_0(FUNC_2(&VAR_7, VAR_3, VAR_4, VAR_6));
      FUNC_0(FUNC_3(VAR_1, VAR_7, VAR_2,
                                           VAR_6, VAR_6));
    }

  return VAR_0;
}
