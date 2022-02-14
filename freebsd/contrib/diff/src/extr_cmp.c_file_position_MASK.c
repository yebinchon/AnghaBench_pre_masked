
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static off_t
FUNC_1 (int VAR_3)
{
  static bool VAR_4[2];
  static off_t VAR_5[2];

  if (! VAR_4[VAR_3])
    {
      VAR_4[VAR_3] = 1;
      VAR_5[VAR_3] = FUNC_0 (VAR_1[VAR_3], VAR_2[VAR_3], VAR_0);
    }
  return VAR_5[VAR_3];
}
