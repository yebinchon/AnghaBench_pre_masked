
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  rtx VAR_6;
  int VAR_7;

  if (VAR_5 == VAR_2
      && VAR_4 == VAR_2)
    return;


  FUNC_6 (FUNC_2 ());

  VAR_7 = FUNC_3 (VAR_1 / VAR_0);
  if (VAR_7 > 0)
    FUNC_0 (VAR_3, VAR_7);

  for (VAR_6 = VAR_5; VAR_6 ; VAR_6 = FUNC_1 (VAR_6, 1))
    FUNC_5 (FUNC_1 (VAR_6, 0));
  for (VAR_6 = VAR_4; VAR_6 ; VAR_6 = FUNC_1 (VAR_6, 1))
    FUNC_4 (FUNC_1 (VAR_6, 0));

  VAR_5 = VAR_4 = VAR_2;
}
