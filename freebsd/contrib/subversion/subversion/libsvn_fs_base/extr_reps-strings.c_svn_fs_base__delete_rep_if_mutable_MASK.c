
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int string_key; } ;
struct TYPE_7__ {TYPE_2__ fulltext; } ;
struct TYPE_9__ {scalar_t__ kind; TYPE_1__ contents; } ;
typedef TYPE_3__ representation_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int **,TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_5 (int *,char const*,int *,int *) ;
 int FUNC_6 (TYPE_3__**,int *,char const*,int *,int *) ;
 int FUNC_7 (int *,int ,int *,int *) ;

svn_error_t *
FUNC_8(svn_fs_t *VAR_3,
                                   const char *VAR_4,
                                   const char *VAR_5,
                                   trail_t *VAR_6,
                                   apr_pool_t *VAR_7)
{
  representation_t *VAR_8;

  FUNC_0(FUNC_6(&VAR_8, VAR_3, VAR_4, VAR_6, VAR_7));
  if (! FUNC_4(VAR_8, VAR_5))
    return VAR_0;

  if (VAR_8->kind == VAR_2)
    {
      FUNC_0(FUNC_7(VAR_3,
                                        VAR_8->contents.fulltext.string_key,
                                        VAR_6, VAR_7));
    }
  else if (VAR_8->kind == VAR_1)
    {
      apr_array_header_t *VAR_9;
      FUNC_0(FUNC_3(&VAR_9, VAR_8, VAR_7));
      FUNC_0(FUNC_2(VAR_9, VAR_3, VAR_6, VAR_7));
    }
  else
    return FUNC_1(VAR_4);

  return FUNC_5(VAR_3, VAR_4, VAR_6, VAR_7);
}
