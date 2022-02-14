
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*) ;
 char* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (char*,char const*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_2, const char *VAR_3)
{
  int VAR_4;
  int VAR_5;
  size_t VAR_6 = FUNC_3 (VAR_2);
  size_t VAR_7 = FUNC_3 (VAR_3);
  if ((VAR_6 + VAR_7 + 2) > VAR_1)
    {
      VAR_0 = FUNC_0 (VAR_6 + 1 + VAR_7 + 1, sizeof (*VAR_0));
      VAR_1 = VAR_6 + VAR_7 + 2;
    }
  FUNC_2 (VAR_0, VAR_2);
  VAR_5 = (VAR_0[VAR_6] != '/');
  VAR_0[VAR_6] = '/';
  FUNC_2 (VAR_0 + VAR_6 + VAR_5 , VAR_3);
  VAR_4 = FUNC_1 (VAR_0);
  return VAR_4;
}
