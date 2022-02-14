
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_6__ {char const* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int apr_time_t ;
struct TYPE_7__ {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
typedef TYPE_2__ apr_time_exp_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int *,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char const) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *,char const*) ;
 int * FUNC_6 (int *) ;
 char const* FUNC_7 (int ,int *) ;
 char* FUNC_8 (char const*,int *) ;
 char* FUNC_9 (char const*,char const*,int *) ;

__attribute__((used)) static svn_string_t *
FUNC_10(const char *VAR_0,
               const char *VAR_1,
               const char *VAR_2,
               const char *VAR_3,
               apr_time_t VAR_4,
               const char *VAR_5,
               apr_pool_t *VAR_6)
{
  svn_stringbuf_t *VAR_7 = FUNC_6(VAR_6);
  const char *VAR_8;
  size_t VAR_9;

  for (;;)
    {
      VAR_8 = VAR_0;

      while (*VAR_8 != '\0' && *VAR_8 != '%')
        VAR_8++;

      if ((VAR_9 = VAR_8 - VAR_0) > 0)
        FUNC_4(VAR_7, VAR_0, VAR_9);

      if (*VAR_8 == '\0')
        break;

      switch (VAR_8[1])
        {
        case 'a':
          if (VAR_5)
            FUNC_5(VAR_7, VAR_5);
          break;
        case 'b':
          if (VAR_2 && *VAR_2)
            {
              const char *VAR_10 = FUNC_8(VAR_2, VAR_6);
              FUNC_5(VAR_7, VAR_10);
            }
          break;
        case 'd':
          if (VAR_4)
            {
              apr_time_exp_t VAR_11;
              const char *VAR_12;

              FUNC_1(&VAR_11, VAR_4);

              VAR_12 = FUNC_0(VAR_6, "%04d-%02d-%02d %02d:%02d:%02dZ",
                                   VAR_11.tm_year + 1900,
                                   VAR_11.tm_mon + 1,
                                   VAR_11.tm_mday,
                                   VAR_11.tm_hour,
                                   VAR_11.tm_min,
                                   VAR_11.tm_sec);

              FUNC_5(VAR_7, VAR_12);
            }
          break;
        case 'D':
          if (VAR_4)
            FUNC_5(VAR_7,
                                     FUNC_7(VAR_4, VAR_6));
          break;
        case 'P':
          if (VAR_3 && *VAR_3 != '\0' && VAR_2 && *VAR_2 != '\0')
            {
              const char *VAR_13;

              VAR_13 = FUNC_9(VAR_3, VAR_2, VAR_6);
              if (VAR_13)
                FUNC_5(VAR_7, VAR_13);
            }
          break;
        case 'R':
          if (VAR_3 && *VAR_3 != '\0')
            FUNC_5(VAR_7, VAR_3);
          break;
        case 'r':
          if (VAR_1)
            FUNC_5(VAR_7, VAR_1);
          break;
        case 'u':
          if (VAR_2)
            FUNC_5(VAR_7, VAR_2);
          break;
        case '_':
          FUNC_3(VAR_7, ' ');
          break;
        case '%':
          FUNC_3(VAR_7, *VAR_8);
          break;
        case '\0':
          FUNC_3(VAR_7, *VAR_8);




          VAR_8--;
          break;
        case 'H':
          {
            svn_string_t *VAR_14 = FUNC_10("%P%_%r%_%d%_%a", VAR_1, VAR_2,
                                             VAR_3, VAR_4, VAR_5,
                                             VAR_6);
            FUNC_5(VAR_7, VAR_14->data);
          }
          break;
        case 'I':
          {
            svn_string_t *VAR_15 = FUNC_10("%b%_%r%_%d%_%a", VAR_1, VAR_2,
                                             VAR_3, VAR_4, VAR_5,
                                             VAR_6);
            FUNC_5(VAR_7, VAR_15->data);
          }
          break;
        default:
          FUNC_4(VAR_7, VAR_8, 2);
          break;
        }


      VAR_0 = VAR_8 + 2;
    }

  return FUNC_2(VAR_7);
}
