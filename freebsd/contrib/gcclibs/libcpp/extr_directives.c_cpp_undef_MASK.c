
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpp_reader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (int *,int ,char*,size_t) ;
 size_t FUNC_3 (char const*) ;

void
FUNC_4 (cpp_reader *VAR_1, const char *VAR_2)
{
  size_t VAR_3 = FUNC_3 (VAR_2);
  char *VAR_4 = (char *) FUNC_0 (VAR_3 + 1);
  FUNC_1 (VAR_4, VAR_2, VAR_3);
  VAR_4[VAR_3] = '\n';
  FUNC_2 (VAR_1, VAR_0, VAR_4, VAR_3);
}
