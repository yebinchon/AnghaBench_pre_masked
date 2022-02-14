
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t apr_size_t ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;
 int FUNC_3 (char const*,int *) ;

__attribute__((used)) static const char *
FUNC_4(const char *VAR_0,
                  const char *VAR_1)
{
  apr_size_t VAR_2 = FUNC_1(VAR_0);

  FUNC_0(FUNC_3(VAR_0, ((void*)0)));
  FUNC_0(FUNC_3(VAR_1, ((void*)0)));

  if (0 != FUNC_2(VAR_0, VAR_1, VAR_2))
    return ((void*)0);

  if (VAR_1[VAR_2] == 0)
    return "";

  if (VAR_1[VAR_2] == '/')
    return VAR_1 + VAR_2 + 1;

  return ((void*)0);
}
