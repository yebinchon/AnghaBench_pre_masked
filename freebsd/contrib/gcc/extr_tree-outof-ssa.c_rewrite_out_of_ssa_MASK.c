
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var_map ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static unsigned int
FUNC_6 (void)
{
  var_map VAR_12;
  int VAR_13 = 0;
  int VAR_14 = 0;







  FUNC_4 ();

  if (!VAR_9)
    VAR_14 |= VAR_0;

  FUNC_3 ();

  if (VAR_5 && (VAR_6 & VAR_4))
    FUNC_2 (VAR_5, VAR_6 & ~VAR_4);


  if (VAR_10 && !VAR_7)
    VAR_13 = VAR_3;

  VAR_12 = FUNC_0 (VAR_13);

  if (VAR_8)
    VAR_14 |= VAR_1;
  if (VAR_10 && !VAR_7)
    VAR_14 |= VAR_2;

  FUNC_5 (VAR_12, VAR_14);

  if (VAR_5 && (VAR_6 & VAR_4))
    FUNC_2 (VAR_5, VAR_6 & ~VAR_4);


  FUNC_1 (VAR_12);

  VAR_11 = 0;
  return 0;
}
