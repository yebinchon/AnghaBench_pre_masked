
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tui_translate {scalar_t__ value; } ;
typedef scalar_t__ chtype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct tui_translate* FUNC_0 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;

int
FUNC_1 (void)
{
  int VAR_24 = 0;
  struct tui_translate *VAR_25;

  VAR_25 = FUNC_0 (VAR_19, VAR_20);
  if (VAR_8 != VAR_25->value)
    {
      VAR_8 = VAR_25->value;
      VAR_24 = 1;
    }
  VAR_25 = FUNC_0 (VAR_7, VAR_20);
  if (VAR_6 != VAR_25->value)
    {
      VAR_6 = VAR_25->value;
      VAR_24 = 1;
    }




  VAR_25 = FUNC_0 (VAR_10, VAR_13);
  if (VAR_18 != (chtype) VAR_25->value)
    {
      VAR_18 = (VAR_25->value < 0) ? VAR_2 : VAR_25->value;
      VAR_24 = 1;
    }
  VAR_25 = FUNC_0 (VAR_10, VAR_12);
  VAR_17 = (VAR_25->value < 0) ? VAR_1 : VAR_25->value;

  VAR_25 = FUNC_0 (VAR_10, VAR_14);
  VAR_21 = (VAR_25->value < 0) ? VAR_3 : VAR_25->value;

  VAR_25 = FUNC_0 (VAR_10, VAR_15);
  VAR_22 = (VAR_25->value < 0) ? VAR_4 : VAR_25->value;

  VAR_25 = FUNC_0 (VAR_10, VAR_11);
  VAR_9 = (VAR_25->value < 0) ? VAR_0 : VAR_25->value;

  VAR_25 = FUNC_0 (VAR_10, VAR_16);
  VAR_23 = (VAR_25->value < 0) ? VAR_5 : VAR_25->value;

  return VAR_24;
}
