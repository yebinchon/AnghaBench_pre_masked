
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exec_map_timeout; } ;


 scalar_t__ FUNC_0 (char*,int,int,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4 = 0;

  while (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0.exec_map_timeout)) {
    int VAR_5 = FUNC_1(VAR_1);
    VAR_4 += VAR_5;
    if (VAR_5 > 1 && VAR_1[VAR_5 - 2] == '\\' &&
        VAR_1[VAR_5 - 1] == '\n') {
      VAR_1 += VAR_5 - 2;
      VAR_2 -= VAR_5 - 2;
      *VAR_1 = '\n';
      VAR_1[1] = '\0';
    } else {
      return VAR_4;
    }
  }

  return VAR_4;
}
