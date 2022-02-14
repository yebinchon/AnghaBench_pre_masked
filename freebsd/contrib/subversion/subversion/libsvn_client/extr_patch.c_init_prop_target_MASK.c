
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int current_line; int write_baton; int write; TYPE_2__* read_baton; int seek; int tell; int readline; int existed; int keywords; void* hunks; void* lines; int eol_style; } ;
typedef TYPE_1__ target_content_t ;
typedef int svn_wc_context_t ;
typedef int svn_string_t ;
typedef int svn_error_t ;
typedef int svn_diff_operation_kind_t ;
struct TYPE_8__ {scalar_t__ offset; int const* value; } ;
typedef TYPE_2__ prop_read_baton_t ;
struct TYPE_9__ {int patched_value; int const* value; TYPE_1__* content; int operation; int name; } ;
typedef TYPE_3__ prop_patch_target_t ;
struct TYPE_10__ {scalar_t__ db_kind; scalar_t__ deleted; } ;
typedef TYPE_4__ patch_target_t ;
typedef int hunk_info_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (int const**,int *,char const*,char const*,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_7(prop_patch_target_t **VAR_7,
                 const patch_target_t *VAR_8,
                 const char *VAR_9,
                 svn_diff_operation_kind_t VAR_10,
                 svn_wc_context_t *VAR_11,
                 const char *VAR_12,
                 apr_pool_t *VAR_13, apr_pool_t *VAR_14)
{
  prop_patch_target_t *VAR_15;
  target_content_t *VAR_16;
  const svn_string_t *VAR_17;
  prop_read_baton_t *VAR_18;

  VAR_16 = FUNC_3(VAR_13, sizeof(*VAR_16));


  VAR_16->current_line = 1;
  VAR_16->eol_style = VAR_4;
  VAR_16->lines = FUNC_1(VAR_13, 0, sizeof(apr_off_t));
  VAR_16->hunks = FUNC_1(VAR_13, 0, sizeof(hunk_info_t *));
  VAR_16->keywords = FUNC_2(VAR_13);

  VAR_15 = FUNC_3(VAR_13, sizeof(*VAR_15));
  VAR_15->name = FUNC_4(VAR_13, VAR_9);
  VAR_15->operation = VAR_10;
  VAR_15->content = VAR_16;

  if (!(VAR_8->deleted || VAR_8->db_kind == VAR_3))
    FUNC_0(FUNC_6(&VAR_17, VAR_11, VAR_12, VAR_9,
                             VAR_13, VAR_14));
  else
    VAR_17 = ((void*)0);

  VAR_16->existed = (VAR_17 != ((void*)0));
  VAR_15->value = VAR_17;
  VAR_15->patched_value = FUNC_5(VAR_13);



  VAR_18 = FUNC_3(VAR_13, sizeof(*VAR_18));
  VAR_18->value = VAR_17;
  VAR_18->offset = 0;
  VAR_16->readline = VAR_1;
  VAR_16->tell = VAR_5;
  VAR_16->seek = VAR_2;
  VAR_16->read_baton = VAR_18;
  VAR_16->write = VAR_6;
  VAR_16->write_baton = VAR_15->patched_value;

  *VAR_7 = VAR_15;

  return VAR_0;
}
