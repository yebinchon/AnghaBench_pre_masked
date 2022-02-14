
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef int CORE_ADDR ;


 unsigned int FUNC_0 (struct type*) ;
 struct type* FUNC_1 (struct type*) ;
 int FUNC_2 (unsigned int,struct type*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 () ;
 struct type* FUNC_7 (struct type*) ;
 int FUNC_8 (struct ui_file*,char*,...) ;
 int FUNC_9 (char*,char*,unsigned int) ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_11 (int,struct ui_file*) ;
 unsigned int VAR_2 ;
 int FUNC_12 (struct type*,char*,int ,int ,struct ui_file*,int,int,int,int) ;
 int FUNC_13 (int ) ;

void
FUNC_14 (struct type *VAR_3, char *VAR_4, CORE_ADDR VAR_5,
     struct ui_file *VAR_6, int VAR_7, int VAR_8,
     int VAR_9, enum val_prettyprint VAR_10,
     unsigned int VAR_11)
{
  unsigned int VAR_12 = 0;
  unsigned VAR_13;
  struct type *VAR_14;
  unsigned VAR_15;


  unsigned int VAR_16;

  unsigned int VAR_17;

  VAR_14 = FUNC_1 (VAR_3);
  VAR_15 = FUNC_0 (FUNC_7 (VAR_14));
  VAR_13 = FUNC_0 (VAR_3) / VAR_15;

  FUNC_2 (VAR_11, VAR_14);

  for (; VAR_11 < VAR_13 && VAR_12 < VAR_1; VAR_11++)
    {
      if (VAR_11 != 0)
 {
   if (VAR_0)
     {
       FUNC_8 (VAR_6, ",\n");
       FUNC_11 (2 + 2 * VAR_9, VAR_6);
     }
   else
     {
       FUNC_8 (VAR_6, ", ");
     }
 }
      FUNC_13 (FUNC_10 (2 + 2 * VAR_9));

      VAR_16 = VAR_11 + 1;
      VAR_17 = 1;
      while ((VAR_16 < VAR_13) &&
      !FUNC_9 (VAR_4 + VAR_11 * VAR_15, VAR_4 + VAR_16 * VAR_15, VAR_15))
 {
   ++VAR_17;
   ++VAR_16;
 }

      if (VAR_17 > VAR_2)
 {
   FUNC_12 (VAR_14, VAR_4 + VAR_11 * VAR_15, 0, 0, VAR_6, VAR_7,
       VAR_8, VAR_9 + 1, VAR_10);
   FUNC_5 (VAR_17);
   FUNC_8 (VAR_6, " <repeats %u times>", VAR_17);
   FUNC_6 ();

   VAR_11 = VAR_16 - 1;
   VAR_12 += VAR_2;
 }
      else
 {
   FUNC_12 (VAR_14, VAR_4 + VAR_11 * VAR_15, 0, 0, VAR_6, VAR_7,
       VAR_8, VAR_9 + 1, VAR_10);
   FUNC_4 ();
   VAR_12++;
 }
    }
  FUNC_3 ();
  if (VAR_11 < VAR_13)
    {
      FUNC_8 (VAR_6, "...");
    }
}
