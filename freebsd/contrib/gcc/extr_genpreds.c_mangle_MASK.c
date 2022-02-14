
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char const) ;
 char const* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static const char *
FUNC_3 (const char *VAR_1)
{
  for (; *VAR_1; VAR_1++)
    switch (*VAR_1)
      {
      case '_': FUNC_2 (VAR_0, "__", 2); break;
      case '<': FUNC_2 (VAR_0, "_l", 2); break;
      case '>': FUNC_2 (VAR_0, "_g", 2); break;
      default: FUNC_0 (VAR_0, *VAR_1); break;
      }

  FUNC_0 (VAR_0, '\0');
  return FUNC_1 (VAR_0);
}
