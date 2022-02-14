
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int change_set; int number; } ;
struct TYPE_10__ {TYPE_1__* data_rep; TYPE_3__ noderev_id; } ;
typedef TYPE_2__ svn_fs_x__noderev_t ;
typedef TYPE_3__ svn_fs_x__id_t ;
struct TYPE_12__ {int * dir_cache; } ;
typedef TYPE_4__ svn_fs_x__data_t ;
struct TYPE_13__ {TYPE_4__* fsap_data; } ;
typedef TYPE_5__ svn_fs_t ;
typedef int svn_cache__t ;
struct TYPE_9__ {TYPE_3__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static svn_cache__t *
FUNC_1(svn_fs_t *VAR_2,
                 svn_fs_x__id_t *VAR_3,
                 svn_fs_x__noderev_t *VAR_4)
{
  svn_fs_x__data_t *VAR_5 = VAR_2->fsap_data;

  if (!VAR_4->data_rep)
    {


      VAR_3->change_set = VAR_0;
      VAR_3->number = VAR_1;
    }
  else if (FUNC_0(VAR_4->noderev_id.change_set))
    {


      *VAR_3 = VAR_4->noderev_id;
    }
  else
    {

      *VAR_3 = VAR_4->data_rep->id;
    }

  return VAR_5->dir_cache;
}
