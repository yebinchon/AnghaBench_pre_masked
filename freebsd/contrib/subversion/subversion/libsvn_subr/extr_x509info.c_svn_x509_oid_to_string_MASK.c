
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 char* FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

const char *
FUNC_5(const unsigned char *VAR_3, apr_size_t VAR_4,
                       apr_pool_t *VAR_5, apr_pool_t *VAR_6)
{
  svn_stringbuf_t *VAR_7 = FUNC_3(VAR_6);
  const unsigned char *VAR_8 = VAR_3;
  const unsigned char *VAR_9 = VAR_8 + VAR_4;
  const char *VAR_10;

  while (VAR_8 != VAR_9) {
    if (VAR_8 == VAR_3)
      {






        VAR_10 = FUNC_0(VAR_5, "%d.%d", *VAR_8 / 40, *VAR_8 % 40);
        VAR_8++;
      }
    else if (*VAR_8 < 128)
      {


        VAR_10 = FUNC_0(VAR_5, ".%d", *VAR_8);
        VAR_8++;
      }
    else
      {



        unsigned int VAR_11 = 0;
        svn_boolean_t VAR_12 = VAR_0;

        do {
          if (VAR_11 == 0 && *VAR_8 == 0x80)
            {



              if (!VAR_12)
                {
                  FUNC_1(VAR_7, '.');
                  VAR_12 = VAR_1;
                }
              FUNC_1(VAR_7, '0');
            }
          else if (VAR_11 > VAR_2 >> 7)
            {

              return ((void*)0);
            }
          VAR_11 = VAR_11 << 7 | (*(VAR_8++) & 0x7f);
        } while (VAR_8 != VAR_9 && *VAR_8 > 127);
        if (VAR_11 > VAR_2 >> 7)
          return ((void*)0);
        VAR_11 = VAR_11 << 7 | *(VAR_8++);
        VAR_10 = FUNC_0(VAR_5, "%s%d", VAR_12 ? "" : ".", VAR_11);
      }
    FUNC_2(VAR_7, VAR_10);
  }

  if (FUNC_4(VAR_7))
    return ((void*)0);

  return VAR_7->data;
}
