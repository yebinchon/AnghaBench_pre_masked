
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int host_callback ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1 (host_callback *VAR_1, const char *VAR_2, int VAR_3)
{
  int VAR_4;
  char VAR_5[2];

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
      VAR_5[0] = VAR_2[VAR_4];
      VAR_5[1] = 0;
      FUNC_0 (VAR_5, VAR_0);
    }
  return VAR_3;
}
