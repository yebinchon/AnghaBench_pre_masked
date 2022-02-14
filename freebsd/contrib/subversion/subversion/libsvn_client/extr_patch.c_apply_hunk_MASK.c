
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int current_line; scalar_t__ eol_style; char* eol_str; int write_baton; int (* write ) (int ,char const*,int,int *) ;int eof; } ;
typedef TYPE_1__ target_content_t ;
struct TYPE_14__ {int len; char const* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_linenum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_15__ {scalar_t__ kind_on_disk; void* has_text_changes; void* has_prop_changes; } ;
typedef TYPE_3__ patch_target_t ;
struct TYPE_16__ {int match_fuzz; int hunk; void* rejected; scalar_t__ matched_line; } ;
typedef TYPE_4__ hunk_info_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int ,char const*,int *) ;
 int FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char const*,int,int *) ;
 int FUNC_6 (int ,char const*,int,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,TYPE_2__**,char const**,int *,int *,int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_14(patch_target_t *VAR_4, target_content_t *VAR_5,
           hunk_info_t *VAR_6, const char *VAR_7, apr_pool_t *VAR_8)
{
  svn_linenum_t VAR_9;
  svn_boolean_t VAR_10;
  apr_pool_t *VAR_11;
  svn_linenum_t VAR_12 = VAR_6->match_fuzz;



  if (VAR_4->kind_on_disk == VAR_2 || VAR_7)
    {
      svn_linenum_t VAR_13;





      FUNC_0(FUNC_1(VAR_5, VAR_6->matched_line + VAR_12,
                                   VAR_8));



      VAR_13 = VAR_5->current_line +
             FUNC_8(VAR_6->hunk) - (2 * VAR_12);
      FUNC_0(FUNC_3(VAR_5, VAR_13, VAR_8));
      if (VAR_5->current_line != VAR_13 && ! VAR_5->eof)
        {

          VAR_6->rejected = VAR_1;
          FUNC_0(FUNC_2(VAR_4, VAR_5, VAR_6->hunk, VAR_7, VAR_8));
          return VAR_0;
        }
    }



  VAR_9 = 0;
  FUNC_10(VAR_6->hunk);
  VAR_11 = FUNC_12(VAR_8);
  do
    {
      svn_stringbuf_t *VAR_14;
      const char *VAR_15;

      FUNC_11(VAR_11);

      FUNC_0(FUNC_9(VAR_6->hunk, &VAR_14,
                                                   &VAR_15, &VAR_10,
                                                   VAR_11, VAR_11));
      VAR_9++;
      if (VAR_9 > VAR_12 &&
          VAR_9 <= FUNC_7(VAR_6->hunk) - VAR_12)
        {
          apr_size_t VAR_16;

          if (VAR_14->len >= 1)
            {
              VAR_16 = VAR_14->len;
              FUNC_0(VAR_5->write(VAR_5->write_baton,
                                     VAR_14->data, VAR_16, VAR_11));
            }

          if (VAR_15)
            {


              if (VAR_5->eol_style != VAR_3)
                VAR_15 = VAR_5->eol_str;

              VAR_16 = FUNC_4(VAR_15);
              FUNC_0(VAR_5->write(VAR_5->write_baton,
                                     VAR_15, VAR_16, VAR_11));
            }
        }
    }
  while (! VAR_10);
  FUNC_13(VAR_11);

  if (VAR_7)
    VAR_4->has_prop_changes = VAR_1;
  else
    VAR_4->has_text_changes = VAR_1;

  return VAR_0;
}
