
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_fs_x__revision_file_t ;
struct TYPE_11__ {int item_index; int revision; int is_packed; int member_0; } ;
typedef TYPE_2__ svn_fs_x__representation_cache_key_t ;
typedef int svn_fs_x__rep_header_t ;
struct TYPE_12__ {scalar_t__ type; int item_count; TYPE_1__* items; } ;
typedef TYPE_3__ svn_fs_x__p2l_entry_t ;
typedef int svn_fs_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_13__ {int size; int member_0; } ;
typedef TYPE_4__ rep_state_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int number; int change_set; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,int *,TYPE_4__*,int,int *) ;
 int FUNC_3 (TYPE_4__*,int *,int *,int *,TYPE_3__*,int *) ;
 int FUNC_4 (int **,int *,int *,TYPE_2__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

svn_error_t *
FUNC_7(svn_filesize_t *VAR_3,
                                    svn_filesize_t *VAR_4,
                                    svn_fs_t *VAR_5,
                                    svn_fs_x__revision_file_t *VAR_6,
                                    svn_fs_x__p2l_entry_t* VAR_7,
                                    apr_pool_t *VAR_8)
{
  svn_fs_x__representation_cache_key_t VAR_9 = { 0 };
  rep_state_t VAR_10 = { 0 };
  svn_fs_x__rep_header_t *VAR_11;


  FUNC_1(VAR_7->type >= VAR_1
                 && VAR_7->type <= VAR_0);
  FUNC_1(VAR_7->item_count == 1);


  VAR_9.revision = FUNC_5(VAR_7->items[0].change_set);
  VAR_9.is_packed = FUNC_6(VAR_5, VAR_9.revision);
  VAR_9.item_index = VAR_7->items[0].number;
  FUNC_0(FUNC_4(&VAR_11, VAR_5, VAR_6, &VAR_9, VAR_8));


  FUNC_0(FUNC_3(&VAR_10, VAR_11, VAR_5, VAR_6, VAR_7,
                         VAR_8));



  *VAR_3 = VAR_10.size;
  FUNC_0(FUNC_2(VAR_4, VAR_5, &VAR_10, -1, VAR_8));

  return VAR_2;
}
