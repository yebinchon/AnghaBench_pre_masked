
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;
typedef int apr_size_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void
FUNC_2(apr_uint64_t VAR_0, char VAR_1, char *VAR_2)
{
  apr_size_t VAR_3 = FUNC_1(VAR_2, VAR_0);
  apr_size_t VAR_4;

  for (VAR_4 = VAR_3; VAR_4 > 3; VAR_4 -= 3)
    {
      FUNC_0(&VAR_2[VAR_4 - 2], &VAR_2[VAR_4 - 3], VAR_3 - VAR_4 + 3);
      VAR_2[VAR_4-3] = VAR_1;
      VAR_3++;
    }

  VAR_2[VAR_3] = 0;
}
