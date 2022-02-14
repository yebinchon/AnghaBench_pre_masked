
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ eof; int keywords; int current_line; } ;
typedef TYPE_1__ target_content_t ;
struct TYPE_8__ {char const* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_linenum_t ;
typedef int svn_error_t ;
typedef int svn_diff_hunk_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const**,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int *,TYPE_2__**,int *,scalar_t__*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const*,char const**,int *,scalar_t__,int ,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_boolean_t *VAR_2,
                      target_content_t *VAR_3,
                      svn_diff_hunk_t *VAR_4,
                      apr_pool_t *VAR_5)
{
  svn_boolean_t VAR_6;
  apr_pool_t *VAR_7;
  svn_boolean_t VAR_8;
  svn_linenum_t VAR_9;

  FUNC_5(VAR_4);

  VAR_9 = VAR_3->current_line;

  VAR_7 = FUNC_7(VAR_5);
  do
    {
      const char *VAR_10;
      svn_stringbuf_t *VAR_11;
      const char *VAR_12;
      const char *VAR_13;

      FUNC_6(VAR_7);

      FUNC_0(FUNC_1(VAR_3, &VAR_10, VAR_7, VAR_7));
      FUNC_0(FUNC_4(VAR_4, &VAR_11,
                                                   ((void*)0), &VAR_8,
                                                   VAR_7, VAR_7));

      FUNC_0(FUNC_9(VAR_10, &VAR_12,
                                           ((void*)0), VAR_0,
                                           VAR_3->keywords,
                                           VAR_0, VAR_7));
      FUNC_0(FUNC_9(VAR_11->data,
                                           &VAR_13,
                                           ((void*)0), VAR_0,
                                           VAR_3->keywords,
                                           VAR_0, VAR_7));
      VAR_6 = ! FUNC_3(VAR_12, VAR_13);
      if (VAR_3->eof != VAR_8)
        {
          FUNC_8(VAR_7);
          *VAR_2 = VAR_0;
          return VAR_1;
        }
    }
  while (VAR_6 && ! VAR_3->eof && ! VAR_8);
  FUNC_8(VAR_7);

  *VAR_2 = (VAR_6 && VAR_3->eof == VAR_8);
  FUNC_0(FUNC_2(VAR_3, VAR_9, VAR_5));

  return VAR_1;
}
