
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int string_key; } ;
struct TYPE_7__ {TYPE_1__ fulltext; } ;
struct TYPE_8__ {scalar_t__ kind; TYPE_2__ contents; } ;
typedef TYPE_3__ representation_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,char const*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 int FUNC_5 (TYPE_3__**,int *,char const*,int *,int *) ;
 int FUNC_6 (int *,int *,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_t *VAR_5,
          const char *VAR_6,
          const char *VAR_7,
          apr_size_t VAR_8,
          const char *VAR_9,
          trail_t *VAR_10,
          apr_pool_t *VAR_11)
{
  representation_t *VAR_12;

  FUNC_0(FUNC_5(&VAR_12, VAR_5, VAR_6, VAR_10, VAR_11));

  if (! FUNC_3(VAR_12, VAR_9))
    return FUNC_4
      (VAR_1, ((void*)0),
       FUNC_2("Rep '%s' is not mutable"), VAR_6);

  if (VAR_12->kind == VAR_4)
    {
      FUNC_0(FUNC_6
              (VAR_5, &(VAR_12->contents.fulltext.string_key), VAR_8, VAR_7,
               VAR_10, VAR_11));
    }
  else if (VAR_12->kind == VAR_3)
    {



      return FUNC_4
        (VAR_0, ((void*)0),
         FUNC_2("Rep '%s' both mutable and non-fulltext"), VAR_6);
    }
  else
    return FUNC_1(VAR_6);

  return VAR_2;
}
