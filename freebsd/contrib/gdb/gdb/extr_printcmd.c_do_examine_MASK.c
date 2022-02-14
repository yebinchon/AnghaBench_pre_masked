
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct format_data {char format; char size; int count; } ;
typedef int asection ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 struct type* VAR_1 ;
 struct type* VAR_2 ;
 struct type* VAR_3 ;
 struct type* VAR_4 ;
 struct type* VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,char,char,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct type*,int ,int *) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7 (struct format_data VAR_11, CORE_ADDR VAR_12, asection *VAR_13)
{
  char VAR_14 = 0;
  char VAR_15;
  int VAR_16 = 1;
  struct type *VAR_17 = ((void*)0);
  int VAR_18;
  int VAR_19;

  VAR_14 = VAR_11.format;
  VAR_15 = VAR_11.size;
  VAR_16 = VAR_11.count;
  VAR_9 = VAR_12;
  VAR_10 = VAR_13;



  if (VAR_14 == 's' || VAR_14 == 'i')
    VAR_15 = 'b';

  if (VAR_14 == 'i')
    VAR_17 = VAR_4;
  else if (VAR_15 == 'b')
    VAR_17 = VAR_1;
  else if (VAR_15 == 'h')
    VAR_17 = VAR_3;
  else if (VAR_15 == 'w')
    VAR_17 = VAR_5;
  else if (VAR_15 == 'g')
    VAR_17 = VAR_2;

  VAR_19 = 8;
  if (VAR_15 == 'w')
    VAR_19 = 4;
  if (VAR_15 == 'g')
    VAR_19 = 2;
  if (VAR_14 == 's' || VAR_14 == 'i')
    VAR_19 = 1;




  while (VAR_16 > 0)
    {
      VAR_0;
      FUNC_1 (VAR_9, VAR_6);
      FUNC_3 (":");
      for (VAR_18 = VAR_19;
    VAR_18 > 0 && VAR_16 > 0;
    VAR_18--, VAR_16--)
 {
   FUNC_3 ("\t");


   VAR_7 = VAR_9;

   if (VAR_8)
     FUNC_6 (VAR_8);
   VAR_8 = FUNC_5 (VAR_17, VAR_9, VAR_13);

   if (VAR_8)
     FUNC_4 (VAR_8);

   FUNC_2 (VAR_8, VAR_14, VAR_15, VAR_6);
 }
      FUNC_3 ("\n");
      FUNC_0 (VAR_6);
    }
}
