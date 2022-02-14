
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ number; int change_set; } ;
struct TYPE_13__ {TYPE_5__* data_rep; TYPE_3__* prop_rep; TYPE_1__ noderev_id; } ;
typedef TYPE_6__ svn_fs_x__noderev_t ;
typedef int svn_boolean_t ;
struct TYPE_11__ {int change_set; } ;
struct TYPE_12__ {TYPE_4__ id; } ;
struct TYPE_9__ {int change_set; } ;
struct TYPE_10__ {TYPE_2__ id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

svn_boolean_t
FUNC_1(svn_fs_x__noderev_t *VAR_3)
{

  if (VAR_3->noderev_id.number != VAR_1)
    return VAR_0;


  if (!FUNC_0(VAR_3->noderev_id.change_set))
    return VAR_0;



  if (VAR_3->prop_rep && FUNC_0(VAR_3->prop_rep->id.change_set))
    return VAR_0;



  if (VAR_3->data_rep && FUNC_0(VAR_3->data_rep->id.change_set))
    return VAR_0;


  return VAR_2;
}
