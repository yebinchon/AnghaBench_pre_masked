
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 size_t FUNC_0 (char const*,size_t const,struct sockaddr*,size_t const) ;
 size_t FUNC_1 (char const*,size_t const,struct sockaddr*,size_t const) ;

size_t FUNC_2(const char *VAR_0, const size_t VAR_1,
  struct sockaddr *VAR_2, const size_t VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_0[VAR_4] == ':')
   return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
