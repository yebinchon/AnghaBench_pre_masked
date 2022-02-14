
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_29__ {int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_30__ {int len; int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_diff_t ;
struct TYPE_31__ {void* show_c_function; void* ignore_eol_style; int ignore_space; } ;
typedef TYPE_3__ svn_diff_file_options_t ;
typedef int svn_diff_conflict_display_style_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char const*,TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int **,TYPE_2__ const*,TYPE_2__ const*,TYPE_2__ const*,TYPE_3__*,int *) ;
 int FUNC_6 (int *,int *,TYPE_2__*,TYPE_2__*,TYPE_2__*,char const*,char const*,char const*,char const*,int ,int ,void*,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (int *,int ) ;
 TYPE_2__* FUNC_11 (int ,int *) ;
 TYPE_2__* FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (TYPE_1__*,int ,int ) ;
 int FUNC_15 (TYPE_1__*,char*) ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(const svn_string_t **VAR_4,
                  const char *VAR_5,
                  const svn_string_t *VAR_6,
                  const svn_string_t *VAR_7,
                  const svn_string_t *VAR_8,
                  const svn_string_t *VAR_9,
                  svn_cancel_func_t VAR_10,
                  void *VAR_11,
                  apr_pool_t *VAR_12,
                  apr_pool_t *VAR_13)
{
  svn_diff_t *VAR_14;
  svn_diff_file_options_t *VAR_15;
  svn_stringbuf_t *VAR_16;
  svn_boolean_t VAR_17;
  svn_boolean_t VAR_18;
  svn_boolean_t VAR_19;

  VAR_16 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8,
                                  VAR_9, VAR_13);



  if (VAR_7 == ((void*)0))
    VAR_7 = FUNC_12(VAR_13);
  if (VAR_8 == ((void*)0))
    VAR_8 = FUNC_12(VAR_13);
  if (VAR_9 == ((void*)0))
    VAR_9 = FUNC_12(VAR_13);
  VAR_17 = FUNC_7(VAR_9->data,
                                                  VAR_9->len);
  VAR_18 = FUNC_7(VAR_7->data, VAR_7->len);
  VAR_19 = FUNC_7(VAR_8->data, VAR_8->len);

  if (!(VAR_17 || VAR_18 || VAR_19))
    {
      VAR_15 = FUNC_4(VAR_13);
      VAR_15->ignore_space = VAR_3;
      VAR_15->ignore_eol_style = VAR_0;
      VAR_15->show_c_function = VAR_0;


      FUNC_0(FUNC_5(&VAR_14, VAR_9, VAR_7, VAR_8,
                                        VAR_15, VAR_13));
      if (FUNC_3(VAR_14))
        {
          svn_stream_t *VAR_20;
          svn_diff_conflict_display_style_t VAR_21;
          const char *VAR_22 = FUNC_1("<<<<<<< (local property value)");
          const char *VAR_23 = FUNC_1(">>>>>>> (incoming 'changed to' value)");
          const char *VAR_24 = FUNC_1("||||||| (incoming 'changed from' value)");
          const char *VAR_25 = "=======";
          svn_string_t *VAR_26 =
            FUNC_11(FUNC_16(VAR_9->data,
                                                              VAR_13),
                              VAR_13);
          svn_string_t *VAR_27 =
            FUNC_11(FUNC_16(VAR_7->data,
                                                              VAR_13),
                              VAR_13);
          svn_string_t *VAR_28 =
            FUNC_11(FUNC_16(VAR_8->data,
                                                              VAR_13),
                              VAR_13);

          VAR_21 = VAR_2;
          VAR_20 = FUNC_9(VAR_16, VAR_13);
          FUNC_0(FUNC_10(VAR_20, VAR_16->len));
          FUNC_0(FUNC_6(VAR_20, VAR_14,
                                                    VAR_26,
                                                    VAR_27,
                                                    VAR_28,
                                                    VAR_24, VAR_22,
                                                    VAR_23, VAR_25,
                                                    VAR_21,
                                                    VAR_10, VAR_11,
                                                    VAR_13));
          FUNC_0(FUNC_8(VAR_20));

          *VAR_4 = FUNC_13(VAR_16, VAR_12);
          return VAR_1;
        }
    }


  if (VAR_7->len > 0)
    {
      FUNC_15(VAR_16, FUNC_1("Local property value:\n"));
      if (VAR_18)
        FUNC_15(VAR_16, FUNC_1("Cannot display: property value is "
                                        "binary data\n"));
      else
        FUNC_14(VAR_16, VAR_7->data, VAR_7->len);
      FUNC_15(VAR_16, "\n");
    }

  if (VAR_8->len > 0)
    {
      FUNC_15(VAR_16, FUNC_1("Incoming property value:\n"));
      if (VAR_19)
        FUNC_15(VAR_16, FUNC_1("Cannot display: property value is "
                                        "binary data\n"));
      else
        FUNC_14(VAR_16, VAR_8->data, VAR_8->len);
      FUNC_15(VAR_16, "\n");
    }

  *VAR_4 = FUNC_13(VAR_16, VAR_12);
  return VAR_1;
}
