
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static
bool FUNC_4 (void)
{
  static bool VAR_3 = 0;
  static bool VAR_4 = 1;

  if (!VAR_3)
    {
      rtx VAR_5 = FUNC_2 (VAR_2, 10000);
      int VAR_6 = FUNC_3 (FUNC_1 (VAR_2, VAR_1, VAR_5), VAR_0);
      VAR_4 = VAR_6 < FUNC_0 (3);
      VAR_3 = 1;
    }

  return VAR_4;
}
