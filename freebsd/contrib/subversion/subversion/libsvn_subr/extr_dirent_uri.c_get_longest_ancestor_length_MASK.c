
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
typedef scalar_t__ path_type_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static apr_size_t
FUNC_3(path_type_t VAR_3,
                            const char *VAR_4,
                            const char *VAR_5,
                            apr_pool_t *VAR_6)
{
  apr_size_t VAR_7, VAR_8;
  apr_size_t VAR_9 = 0;
  apr_size_t VAR_10 = 0;




  VAR_7 = FUNC_2(VAR_4);
  VAR_8 = FUNC_2(VAR_5);

  if (FUNC_0(VAR_4) || FUNC_0(VAR_5))
    return 0;

  while (VAR_4[VAR_9] == VAR_5[VAR_9])
    {

      if (VAR_4[VAR_9] == '/')
        VAR_10 = VAR_9;

      VAR_9++;


      if ((VAR_9 == VAR_7) || (VAR_9 == VAR_8))
        break;
    }



  if (VAR_9 == 1 && VAR_4[0] == '/' && VAR_5[0] == '/')
    return 1;


  if (VAR_3 == VAR_2 && VAR_9 == 0)
    return 0;
  if (((VAR_9 == VAR_7) && (VAR_5[VAR_9] == '/'))
           || ((VAR_9 == VAR_8) && (VAR_4[VAR_9] == '/'))
           || ((VAR_9 == VAR_7) && (VAR_9 == VAR_8)))
    return VAR_9;
  else
    {
          if (VAR_10 == 0 && VAR_4[0] == '/' && VAR_5[0] == '/')
            return 1;



    }

  return VAR_10;
}
