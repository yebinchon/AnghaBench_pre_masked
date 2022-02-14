
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_ra_svn_edit_callback ;
struct TYPE_10__ {int shim_callbacks; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
struct TYPE_11__ {int abort_edit; int close_edit; int absent_file; int close_file; int change_file_prop; int apply_textdelta; int open_file; int add_file; int absent_directory; int close_directory; int change_dir_prop; int open_directory; int add_directory; int delete_entry; int open_root; int set_target_revision; } ;
typedef TYPE_2__ svn_delta_editor_t ;
struct TYPE_12__ {int got_status; scalar_t__ next_token; void* callback_baton; int callback; TYPE_1__* conn; } ;
typedef TYPE_3__ ra_svn_edit_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__ const**,void**,TYPE_2__ const*,void*,int *,int *,int ,int *,int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(const svn_delta_editor_t **VAR_17,
                           void **VAR_18, svn_ra_svn_conn_t *VAR_19,
                           apr_pool_t *VAR_20,
                           svn_ra_svn_edit_callback VAR_21,
                           void *VAR_22)
{
  svn_delta_editor_t *VAR_23 = FUNC_1(VAR_20);
  ra_svn_edit_baton_t *VAR_24;

  VAR_24 = FUNC_0(VAR_20, sizeof(*VAR_24));
  VAR_24->conn = VAR_19;
  VAR_24->callback = VAR_21;
  VAR_24->callback_baton = VAR_22;
  VAR_24->next_token = 0;
  VAR_24->got_status = VAR_0;

  VAR_23->set_target_revision = VAR_16;
  VAR_23->open_root = VAR_15;
  VAR_23->delete_entry = VAR_12;
  VAR_23->add_directory = VAR_4;
  VAR_23->open_directory = VAR_13;
  VAR_23->change_dir_prop = VAR_7;
  VAR_23->close_directory = VAR_9;
  VAR_23->absent_directory = VAR_2;
  VAR_23->add_file = VAR_5;
  VAR_23->open_file = VAR_14;
  VAR_23->apply_textdelta = VAR_6;
  VAR_23->change_file_prop = VAR_8;
  VAR_23->close_file = VAR_11;
  VAR_23->absent_file = VAR_3;
  VAR_23->close_edit = VAR_10;
  VAR_23->abort_edit = VAR_1;

  *VAR_17 = VAR_23;
  *VAR_18 = VAR_24;

  FUNC_3(FUNC_2(VAR_17, VAR_18, *VAR_17,
                                           *VAR_18, ((void*)0), ((void*)0),
                                           VAR_19->shim_callbacks,
                                           VAR_20, VAR_20));
}
