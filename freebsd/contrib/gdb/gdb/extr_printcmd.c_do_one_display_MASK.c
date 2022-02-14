
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct TYPE_2__ {int size; int count; char format; } ;
struct display {scalar_t__ enabled_p; int number; TYPE_1__ format; int exp; scalar_t__ block; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct value*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_10 (TYPE_1__,int ,int ) ;
 struct value* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_1 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct value*,int,int,int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (struct value*) ;

__attribute__((used)) static void
FUNC_18 (struct display *VAR_2)
{
  int VAR_3;

  if (VAR_2->enabled_p == 0)
    return;

  if (VAR_2->block)
    VAR_3 = FUNC_9 (FUNC_13 (0), VAR_2->block);
  else
    VAR_3 = 1;
  if (!VAR_3)
    return;

  VAR_0 = VAR_2->number;

  FUNC_2 ();
  FUNC_16 ("%d", VAR_2->number);
  FUNC_7 ();
  FUNC_16 (": ");
  if (VAR_2->format.size)
    {
      CORE_ADDR VAR_4;
      struct value *VAR_5;

      FUNC_6 ();

      FUNC_16 ("x/");
      if (VAR_2->format.count != 1)
 FUNC_16 ("%d", VAR_2->format.count);
      FUNC_16 ("%c", VAR_2->format.format);
      if (VAR_2->format.format != 'i' && VAR_2->format.format != 's')
 FUNC_16 ("%c", VAR_2->format.size);
      FUNC_16 (" ");

      FUNC_4 ();

      FUNC_14 (VAR_2->exp, VAR_1);
      FUNC_5 ();

      if (VAR_2->format.count != 1)
 FUNC_16 ("\n");
      else
 FUNC_16 ("  ");

      VAR_5 = FUNC_11 (VAR_2->exp);
      VAR_4 = FUNC_17 (VAR_5);
      if (VAR_2->format.format == 'i')
 VAR_4 = FUNC_0 (VAR_4);

      FUNC_8 ();

      FUNC_10 (VAR_2->format, VAR_4, FUNC_1 (VAR_5));
    }
  else
    {
      FUNC_6 ();

      if (VAR_2->format.format)
 FUNC_16 ("/%c ", VAR_2->format.format);

      FUNC_4 ();

      FUNC_14 (VAR_2->exp, VAR_1);
      FUNC_5 ();

      FUNC_16 (" = ");

      FUNC_4 ();

      FUNC_15 (FUNC_11 (VAR_2->exp),
         VAR_2->format.format, VAR_2->format.size, VAR_1);
      FUNC_16 ("\n");
    }

  FUNC_3 ();

  FUNC_12 (VAR_1);
  VAR_0 = -1;
}
