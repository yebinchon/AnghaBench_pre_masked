
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int VAR_0 ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_1, const char *VAR_2, size_t VAR_3)
{
  char *VAR_4;
  size_t VAR_5 = FUNC_3 (VAR_1);


  VAR_4 = (char *) FUNC_0 (VAR_5 + VAR_3 + 2);
  FUNC_2 (VAR_4, VAR_1, VAR_5);
  VAR_4[VAR_5] = '=';
  FUNC_2 (VAR_4 + VAR_5 + 1, VAR_2, VAR_3);
  VAR_4[VAR_5 + VAR_3 + 1] = '\0';

  FUNC_1 (VAR_0, VAR_4);
}
