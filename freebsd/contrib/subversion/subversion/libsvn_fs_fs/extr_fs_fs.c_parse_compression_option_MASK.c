
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int compression_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (int*,char const*) ;
 int * FUNC_5 (int ,int *,int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(compression_type_t *VAR_9,
                         int *VAR_10,
                         const char *VAR_11)
{
  compression_type_t VAR_12;
  int VAR_13;
  svn_boolean_t VAR_14 = VAR_5;


  if (FUNC_2(VAR_11, "none") == 0)
    {
      VAR_12 = VAR_7;
      VAR_13 = VAR_2;
    }
  else if (FUNC_2(VAR_11, "lz4") == 0)
    {
      VAR_12 = VAR_6;
      VAR_13 = VAR_1;
    }
  else if (FUNC_3(VAR_11, "zlib", 4) == 0)
    {
      const char *VAR_15 = VAR_11 + 4;

      VAR_12 = VAR_8;
      if (*VAR_15 == 0)
        {
          VAR_13 = VAR_1;
        }
      else if (*VAR_15 == '-')
        {
          VAR_15++;
          FUNC_0(FUNC_4(&VAR_13, VAR_15));
          if (VAR_13 < 1 || VAR_13 > 9)
            VAR_14 = VAR_0;
        }
      else
        VAR_14 = VAR_0;
    }
  else
    {
      VAR_14 = VAR_0;
    }

  if (!VAR_14)
    return FUNC_5(VAR_3, ((void*)0),
                           FUNC_1("Invalid 'compression' value '%s' in the config"),
                             VAR_11);

  *VAR_9 = VAR_12;
  *VAR_10 = VAR_13;
  return VAR_4;
}
