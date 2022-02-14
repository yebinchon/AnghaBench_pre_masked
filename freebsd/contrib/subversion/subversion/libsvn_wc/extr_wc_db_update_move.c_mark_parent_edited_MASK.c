
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int skip; TYPE_3__* pb; } ;
typedef TYPE_1__ node_move_baton_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ skip; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(node_move_baton_t *VAR_2,
                 apr_pool_t *VAR_3)
{
  FUNC_1(VAR_2 && VAR_2->pb);

  FUNC_0(FUNC_2(VAR_2->pb, VAR_3));

  if (VAR_2->pb->skip)
    VAR_2->skip = VAR_1;

  return VAR_0;
}
