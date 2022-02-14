
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;


 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char const*,int ,int ) ;
 int FUNC_7 (char const*,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10 (const char *VAR_1, rtx VAR_2, int VAR_3)
{
  rtx VAR_4 = FUNC_4 (VAR_2);
  FUNC_8 (FUNC_0 (VAR_4) == VAR_0);

  switch (VAR_3)
    {
    case 128:
      FUNC_7 (VAR_1, FUNC_5 (VAR_4, 0, 0),
         FUNC_3 (VAR_2));
      break;
    case 129:
      FUNC_6 (VAR_1, FUNC_2 (FUNC_3 (VAR_2)),
    FUNC_1 (FUNC_5 (VAR_4, 0, 0)));
      break;
    default:
      FUNC_9 ();
    }
}
