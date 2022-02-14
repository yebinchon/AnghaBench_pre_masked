
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ current_line; scalar_t__ eof; int keywords; } ;
typedef TYPE_1__ target_content_t ;
struct TYPE_9__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef scalar_t__ svn_linenum_t ;
typedef int svn_error_t ;
typedef int svn_diff_hunk_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (TYPE_1__*,char const**,int *,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_2__**,int *,int*,int *,int *) ;
 int FUNC_12 (int *,TYPE_2__**,int *,int*,int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,char const**,int *,int,int ,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_boolean_t *VAR_3, target_content_t *VAR_4,
           svn_diff_hunk_t *VAR_5, svn_linenum_t VAR_6,
           svn_boolean_t VAR_7,
           svn_boolean_t VAR_8, apr_pool_t *VAR_9)
{
  svn_stringbuf_t *VAR_10;
  const char *VAR_11;
  svn_linenum_t VAR_12;
  svn_linenum_t VAR_13;
  svn_boolean_t VAR_14;
  svn_boolean_t VAR_15;
  apr_pool_t *VAR_16;
  svn_linenum_t VAR_17;
  svn_linenum_t VAR_18;
  svn_linenum_t VAR_19;
  svn_linenum_t VAR_20;

  *VAR_3 = VAR_0;

  if (VAR_4->eof)
    return VAR_1;

  VAR_20 = FUNC_6(VAR_5);

  if (VAR_20 > VAR_6)
    return VAR_1;
  else
    VAR_6 -= VAR_20;

  VAR_13 = VAR_4->current_line;
  VAR_12 = 0;
  VAR_15 = VAR_0;
  VAR_18 = FUNC_7(VAR_5);
  VAR_19 = FUNC_10(VAR_5);
  if (VAR_8)
    {
      FUNC_13(VAR_5);
      VAR_17 = FUNC_8(VAR_5);
    }
  else
    {
      FUNC_14(VAR_5);
      VAR_17 = FUNC_9(VAR_5);
    }
  VAR_16 = FUNC_16(VAR_9);
  do
    {
      const char *VAR_21;

      FUNC_15(VAR_16);

      if (VAR_8)
        FUNC_0(FUNC_11(VAR_5, &VAR_10,
                                                     ((void*)0), &VAR_14,
                                                     VAR_16, VAR_16));
      else
        FUNC_0(FUNC_12(VAR_5, &VAR_10,
                                                     ((void*)0), &VAR_14,
                                                     VAR_16, VAR_16));


      FUNC_0(FUNC_18(VAR_10->data,
                                           &VAR_21,
                                           ((void*)0), VAR_0,
                                           VAR_4->keywords, VAR_0,
                                           VAR_16));
      FUNC_0(FUNC_3(VAR_4, &VAR_11, VAR_16, VAR_16));

      VAR_12++;



      if ((VAR_14 && VAR_10->len == 0) ||
          (VAR_4->eof && *VAR_11 == 0))
        break;


      if ((VAR_12 <= VAR_6 && VAR_18 > VAR_6) ||
          (VAR_12 > VAR_17 - VAR_6 && VAR_19 > VAR_6))
        VAR_15 = VAR_2;
      else
        {
          if (VAR_7)
            {
              char *VAR_22;
              char *VAR_23;

              VAR_22 = FUNC_2(VAR_16, VAR_21);
              VAR_23 = FUNC_2(VAR_16, VAR_11);
              FUNC_1(VAR_22, VAR_22);
              FUNC_1(VAR_23, VAR_23);
              VAR_15 = ! FUNC_5(VAR_22, VAR_23);
            }
          else
            VAR_15 = ! FUNC_5(VAR_21, VAR_11);
        }
    }
  while (VAR_15);

  *VAR_3 = VAR_15 && VAR_14 && VAR_10->len == 0;
  FUNC_0(FUNC_4(VAR_4, VAR_13, VAR_16));
  FUNC_17(VAR_16);

  return VAR_1;
}
