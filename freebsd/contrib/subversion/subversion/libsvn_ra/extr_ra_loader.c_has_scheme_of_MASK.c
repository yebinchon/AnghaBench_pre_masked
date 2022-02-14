
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t apr_size_t ;


 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static const char *
FUNC_2(const char * const *VAR_0, const char *VAR_1)
{
  apr_size_t VAR_2;

  for ( ; *VAR_0 != ((void*)0); ++VAR_0)
    {
      const char *VAR_3 = *VAR_0;
      VAR_2 = FUNC_0(VAR_3);



      if (FUNC_1(VAR_3, VAR_1, VAR_2) == 0 &&
          (VAR_1[VAR_2] == ':' || VAR_1[VAR_2] == '+'))
        return VAR_3;
    }

  return ((void*)0);
}
