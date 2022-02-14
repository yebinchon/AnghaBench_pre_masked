
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int len; int data; } ;
typedef TYPE_4__ svn_stringbuf_t ;
typedef int svn_patch_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int end; scalar_t__ current; scalar_t__ start; } ;
struct TYPE_13__ {scalar_t__ end; scalar_t__ current; scalar_t__ start; } ;
struct TYPE_12__ {scalar_t__ end; scalar_t__ current; scalar_t__ start; } ;
struct TYPE_16__ {int original_start; int original_length; int modified_start; int modified_length; int apr_file; TYPE_3__ diff_text_range; scalar_t__ trailing_context; scalar_t__ leading_context; void* modified_no_final_eol; TYPE_2__ modified_text_range; void* original_no_final_eol; TYPE_1__ original_text_range; int const* patch; } ;
typedef TYPE_5__ svn_diff_hunk_t ;
typedef size_t svn_boolean_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 void* VAR_2 ;
 TYPE_5__* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (char const*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_5 (TYPE_4__*,char) ;
 int FUNC_6 (TYPE_4__*,char const*,scalar_t__ const) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 TYPE_4__* FUNC_8 (scalar_t__ const,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_diff_hunk_t **VAR_4,
                          const char *VAR_5,
                          const svn_patch_t *VAR_6,
                          svn_boolean_t VAR_7,
                          apr_pool_t *VAR_8,
                          apr_pool_t *VAR_9)
{
  svn_diff_hunk_t *VAR_10 = FUNC_1(VAR_8, sizeof(*VAR_10));
  static const char *VAR_11[] = { "@@ -1 +0,0 @@\n", "@@ -0,0 +1 @@\n" };
  const apr_size_t VAR_12 = FUNC_2(VAR_11[VAR_7]);
  const apr_size_t VAR_13 = FUNC_2(VAR_5);
  const apr_size_t VAR_14 = VAR_12 + (1 + VAR_13);
  svn_stringbuf_t *VAR_15 = FUNC_8(VAR_14 + 1, VAR_9);

  VAR_10->patch = VAR_6;



  VAR_10->diff_text_range.start = VAR_12;
  VAR_10->diff_text_range.current = VAR_12;

  if (VAR_7)
    {
      VAR_10->original_text_range.start = 0;
      VAR_10->original_text_range.current = 0;
      VAR_10->original_text_range.end = 0;
      VAR_10->original_no_final_eol = VAR_0;

      VAR_10->modified_text_range.start = VAR_12;
      VAR_10->modified_text_range.current = VAR_12;
      VAR_10->modified_text_range.end = VAR_14;
      VAR_10->modified_no_final_eol = VAR_2;

      VAR_10->original_start = 0;
      VAR_10->original_length = 0;

      VAR_10->modified_start = 1;
      VAR_10->modified_length = 1;
    }
  else
    {
      VAR_10->original_text_range.start = VAR_12;
      VAR_10->original_text_range.current = VAR_12;
      VAR_10->original_text_range.end = VAR_14;
      VAR_10->original_no_final_eol = VAR_2;

      VAR_10->modified_text_range.start = 0;
      VAR_10->modified_text_range.current = 0;
      VAR_10->modified_text_range.end = 0;
      VAR_10->modified_no_final_eol = VAR_0;

      VAR_10->original_start = 1;
      VAR_10->original_length = 1;

      VAR_10->modified_start = 0;
      VAR_10->modified_length = 0;
    }

  VAR_10->leading_context = 0;
  VAR_10->trailing_context = 0;



  FUNC_6(VAR_15, VAR_11[VAR_7], VAR_12);
  FUNC_5(VAR_15, VAR_7 ? '+' : '-');
  FUNC_6(VAR_15, VAR_5, VAR_13);
  FUNC_5(VAR_15, '\n');
  FUNC_7(VAR_15, "\\ No newline at end of hunk\n");

  VAR_10->diff_text_range.end = VAR_15->len;

  FUNC_0(FUNC_4(&VAR_10->apr_file, ((void*)0) ,
                                   ((void*)0) ,
                                   VAR_3,
                                   VAR_8, VAR_9));
  FUNC_0(FUNC_3(VAR_10->apr_file,
                                 VAR_15->data, VAR_15->len,
                                 ((void*)0), VAR_9));


  *VAR_4 = VAR_10;
  return VAR_1;
}
