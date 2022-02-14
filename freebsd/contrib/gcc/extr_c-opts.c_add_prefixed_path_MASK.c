
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,int ,int) ;
 char const* VAR_0 ;
 size_t VAR_1 ;
 char const* VAR_2 ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (size_t) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_3, size_t VAR_4)
{
  char *VAR_5;
  const char *VAR_6;
  size_t VAR_7, VAR_8;

  VAR_8 = FUNC_2 (VAR_3);
  VAR_6 = VAR_2 ? VAR_2 : VAR_0;
  VAR_7 = VAR_2 ? FUNC_2 (VAR_2) : VAR_1;

  VAR_5 = (char *) FUNC_3 (VAR_7 + VAR_8 + 1);
  FUNC_1 (VAR_5, VAR_6, VAR_7);
  FUNC_1 (VAR_5 + VAR_7, VAR_3, VAR_8);
  VAR_5[VAR_7 + VAR_8] = '\0';

  FUNC_0 (VAR_5, VAR_4, 0, 0);
}
