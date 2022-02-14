
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {char* data; int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_17__ {int * mergeinfo; int * reverse_mergeinfo; scalar_t__ reverse; } ;
typedef TYPE_2__ svn_patch_t ;
typedef int * svn_mergeinfo_t ;
struct TYPE_18__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
struct TYPE_19__ {scalar_t__ original_length; scalar_t__ modified_length; } ;
typedef TYPE_4__ svn_diff_hunk_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int *,int *,int *,int *) ;
 TYPE_3__* FUNC_6 (int **,char*,int *) ;
 int FUNC_7 (TYPE_1__*,char) ;
 TYPE_1__* FUNC_8 (int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_boolean_t *VAR_4,
                svn_stringbuf_t *VAR_5,
                svn_diff_hunk_t *VAR_6,
                svn_patch_t *VAR_7,
                apr_pool_t *VAR_8,
                apr_pool_t *VAR_9)
{
  char *VAR_10 = FUNC_1(VAR_5->data, '/');
  char *VAR_11 = FUNC_2(VAR_5->data, ':');

  *VAR_4 = VAR_0;

  if (VAR_10 && VAR_11 && VAR_11[1] == 'r' && VAR_10 < VAR_11)
    {
      svn_stringbuf_t *VAR_12;
      svn_mergeinfo_t VAR_13 = ((void*)0);
      char *VAR_14;
      svn_error_t *VAR_15;

      VAR_12 = FUNC_8(VAR_5->len, VAR_9);


      VAR_14 = VAR_10;
      while (VAR_14 <= VAR_11)
        {
          FUNC_7(VAR_12, *VAR_14);
          VAR_14++;
        }


      VAR_14++;


      while (VAR_14 < VAR_5->data + VAR_5->len)
        {
          if (FUNC_3(*VAR_14))
            break;
          FUNC_7(VAR_12, *VAR_14);
          VAR_14++;
        }

      VAR_15 = FUNC_6(&VAR_13, VAR_12->data, VAR_8);
      if (VAR_15 && VAR_15->apr_err == VAR_1)
        {
          FUNC_4(VAR_15);
          VAR_13 = ((void*)0);
        }
      else
        FUNC_0(VAR_15);

      if (VAR_13)
        {
          if (VAR_6->original_length > 0)
            {
              if (VAR_7->reverse)
                {
                  if (VAR_7->mergeinfo == ((void*)0))
                    VAR_7->mergeinfo = VAR_13;
                  else
                    FUNC_0(FUNC_5(VAR_7->mergeinfo,
                                                 VAR_13,
                                                 VAR_8,
                                                 VAR_9));
                }
              else
                {
                  if (VAR_7->reverse_mergeinfo == ((void*)0))
                    VAR_7->reverse_mergeinfo = VAR_13;
                  else
                    FUNC_0(FUNC_5(VAR_7->reverse_mergeinfo,
                                                 VAR_13,
                                                 VAR_8,
                                                 VAR_9));
                }
              VAR_6->original_length--;
            }
          else if (VAR_6->modified_length > 0)
            {
              if (VAR_7->reverse)
                {
                  if (VAR_7->reverse_mergeinfo == ((void*)0))
                    VAR_7->reverse_mergeinfo = VAR_13;
                  else
                    FUNC_0(FUNC_5(VAR_7->reverse_mergeinfo,
                                                 VAR_13,
                                                 VAR_8,
                                                 VAR_9));
                }
              else
                {
                  if (VAR_7->mergeinfo == ((void*)0))
                    VAR_7->mergeinfo = VAR_13;
                  else
                    FUNC_0(FUNC_5(VAR_7->mergeinfo,
                                                 VAR_13,
                                                 VAR_8,
                                                 VAR_9));
                }
              VAR_6->modified_length--;
            }

          *VAR_4 = VAR_3;
        }
    }

  return VAR_2;
}
