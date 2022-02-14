
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int* data; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_ssize_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int*,int ) ;
 int FUNC_3 (scalar_t__*,char const*,scalar_t__,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int const,scalar_t__*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *,int ) ;
 int * FUNC_7 (int ,int *,int ,long) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int*,scalar_t__,scalar_t__*) ;
 int FUNC_11 (void const*,scalar_t__,int*,int,int const) ;
 int FUNC_12 (int) ;

svn_error_t *
FUNC_13(svn_boolean_t *VAR_9,
              const char *VAR_10, apr_size_t VAR_11,
              const char *VAR_12, apr_size_t VAR_13,
              const char *VAR_14, apr_size_t VAR_15,
              svn_boolean_t VAR_16,
              svn_membuf_t *VAR_17,
              svn_membuf_t *VAR_18,
              svn_membuf_t *VAR_19)
{
  apr_size_t VAR_20;
  apr_size_t VAR_21;


  if (VAR_14 && !VAR_16)
    return FUNC_6(VAR_2, ((void*)0),
                            FUNC_1("Cannot use a custom escape token"
                              " in glob matching mode"));



  FUNC_0(FUNC_3(&VAR_21, VAR_10, VAR_11, VAR_19));
  if (!VAR_16)
    FUNC_0(FUNC_10(VAR_17, VAR_19->data,
                                        VAR_21, &VAR_20));
  else
    {

      const apr_int32_t *VAR_22 = VAR_19->data;
      apr_int32_t VAR_23;
      svn_boolean_t VAR_24;
      apr_size_t VAR_25;

      if (!VAR_14)
        VAR_23 = -1;
      else
        {
          const int VAR_26 = (VAR_15 == VAR_4
                                ? VAR_7 : 0);
          apr_ssize_t VAR_27 =
            FUNC_11((const void*) VAR_14, VAR_15, &VAR_23, 1,
                               VAR_6 | VAR_8 | VAR_26);
          if (VAR_27 < 0)
            return FUNC_6(VAR_1, ((void*)0),
                                    FUNC_5(FUNC_12(VAR_27)));
          if (VAR_27 == 0 || VAR_27 > 1)
            return FUNC_6(VAR_2, ((void*)0),
                                    FUNC_1("Escape token must be one character"));
          if ((VAR_23 & 0xFF) != VAR_23)
            return FUNC_7(VAR_2, ((void*)0),
                                     FUNC_1("Invalid escape character U+%04lX"),
                                     (long)VAR_23);
        }

      VAR_20 = 0;
      FUNC_8(VAR_17, VAR_21 + 1);
      for (VAR_25 = 0, VAR_24 = VAR_0; VAR_25 < VAR_21; ++VAR_25, ++VAR_22)
        {
          if (*VAR_22 == VAR_23 && !VAR_24)
            {
              FUNC_9(VAR_17, VAR_20 + 1);
              ((char*)VAR_17->data)[VAR_20++] = '\\';
              VAR_24 = VAR_5;
            }
          else if (VAR_24)
            {
              FUNC_0(FUNC_4(VAR_17, *VAR_22, &VAR_20));
              VAR_24 = VAR_0;
            }
          else
            {
              if ((*VAR_22 == '[' || *VAR_22 == '\\') && !VAR_24)
                {


                  FUNC_9(VAR_17, VAR_20 + 1);
                  ((char*)VAR_17->data)[VAR_20++] = '\\';
                  VAR_24 = VAR_5;
                  --VAR_25; --VAR_22;
                  continue;
                }


              if (*VAR_22 == '%' || *VAR_22 == '_')
                {
                  const char VAR_28 = (*VAR_22 == '%' ? '*' : '?');
                  FUNC_9(VAR_17, VAR_20 + 1);
                  ((char*)VAR_17->data)[VAR_20++] = VAR_28;
                }
              else
                FUNC_0(FUNC_4(VAR_17, *VAR_22, &VAR_20));
            }
        }
      FUNC_9(VAR_17, VAR_20 + 1);
      ((char*)VAR_17->data)[VAR_20] = '\0';
    }


  FUNC_0(FUNC_3(&VAR_21, VAR_12, VAR_13, VAR_19));
  FUNC_0(FUNC_10(VAR_18, VAR_19->data,
                                      VAR_21, &VAR_21));

  *VAR_9 = !FUNC_2(VAR_17->data, VAR_18->data, 0);
  return VAR_3;
}
