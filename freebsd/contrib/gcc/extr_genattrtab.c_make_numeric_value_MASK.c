
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static rtx
FUNC_3 (int VAR_2)
{
  static rtx VAR_3[20];
  rtx VAR_4;
  char *VAR_5;

  FUNC_2 (VAR_2 >= 0);

  if (VAR_2 < 20 && VAR_3[VAR_2])
    return VAR_3[VAR_2];

  VAR_5 = FUNC_0 (VAR_1, "%d", VAR_2);
  VAR_4 = FUNC_1 (VAR_0, VAR_5);

  if (VAR_2 < 20)
    VAR_3[VAR_2] = VAR_4;

  return VAR_4;
}
