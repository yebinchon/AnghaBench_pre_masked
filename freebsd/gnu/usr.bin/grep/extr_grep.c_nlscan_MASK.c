
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 char const* VAR_1 ;
 char* FUNC_1 (char const*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2 (char const *VAR_3)
{
  size_t VAR_4 = 0;
  char const *VAR_5;
  for (VAR_5 = VAR_1; VAR_5 != VAR_3; VAR_5 = FUNC_1 (VAR_5, VAR_0, VAR_3 - VAR_5), VAR_5++)
    VAR_4++;
  VAR_2 = FUNC_0 (VAR_2, VAR_4);
  VAR_1 = VAR_3;
}
