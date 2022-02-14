
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ segT ;
typedef int flagword ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static segT
FUNC_3 (void)
{
  static segT VAR_8;

  if (! VAR_8)
    {
      flagword VAR_9 = FUNC_0 (VAR_7);
      VAR_8 = FUNC_2 (VAR_6, 0);
      FUNC_1 (VAR_7, VAR_8,
        VAR_9 & (VAR_0 | VAR_2 | VAR_5
        | VAR_1 | VAR_4
        | VAR_3));
    }

  return VAR_8;
}
