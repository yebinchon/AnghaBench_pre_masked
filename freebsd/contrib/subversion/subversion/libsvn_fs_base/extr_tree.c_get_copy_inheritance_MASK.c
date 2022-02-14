
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int node; TYPE_1__* parent; } ;
typedef TYPE_2__ parent_path_t ;
struct TYPE_9__ {int dst_noderev_id; } ;
typedef TYPE_3__ copy_t ;
typedef int copy_id_inherit_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char const* FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int const*) ;
 char* FUNC_7 (int const*) ;
 char const* FUNC_8 (int const*) ;
 int FUNC_9 (TYPE_3__**,int *,char const*,int *,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_10(copy_id_inherit_t *VAR_5,
                     const char **VAR_6,
                     svn_fs_t *VAR_7,
                     parent_path_t *VAR_8,
                     const char *VAR_9,
                     trail_t *VAR_10,
                     apr_pool_t *VAR_11)
{
  const svn_fs_id_t *VAR_12, *VAR_13;
  const char *VAR_14, *VAR_15;
  const char *VAR_16 = ((void*)0);

  FUNC_1(VAR_8 && VAR_8->parent && VAR_9);


  *VAR_5 = VAR_3;
  *VAR_6 = ((void*)0);


  VAR_12 = FUNC_5(VAR_8->node);
  VAR_13 = FUNC_5(VAR_8->parent->node);
  VAR_14 = FUNC_7(VAR_12);
  VAR_15 = FUNC_7(VAR_13);


  if (FUNC_3(FUNC_8(VAR_12), VAR_9) == 0)
    return VAR_0;
  if ((FUNC_3(VAR_14, "0") == 0)
      || (FUNC_3(VAR_14, VAR_15) == 0))
    {
      *VAR_5 = VAR_2;
      return VAR_0;
    }
  else
    {
      copy_t *VAR_17;
      FUNC_0(FUNC_9(&VAR_17, VAR_7, VAR_14, VAR_10, VAR_11));
      if ( FUNC_6(VAR_17->dst_noderev_id, VAR_12)
          == VAR_4)
        {
          *VAR_5 = VAR_2;
          return VAR_0;
        }
    }
  VAR_16 = FUNC_4(VAR_8->node);
  if (FUNC_3(VAR_16, FUNC_2(VAR_8, VAR_11)) != 0)
    {
      *VAR_5 = VAR_1;
      *VAR_6 = VAR_16;
      return VAR_0;
    }


  return VAR_0;
}
