
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct cleanup {int dummy; } ;
typedef unsigned int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct ui_file*,char*,int,int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cleanup*) ;
 int FUNC_3 (struct cleanup*) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (struct ui_file*,char*,...) ;
 int FUNC_6 (char*,struct ui_file*) ;
 int FUNC_7 (struct ui_file*) ;
 struct cleanup* FUNC_8 (int ,char*) ;
 unsigned int FUNC_9 (unsigned int,unsigned int) ;
 int VAR_3 ;
 int FUNC_10 (unsigned int,char*,unsigned int,int*) ;
 int FUNC_11 (unsigned int,int,struct ui_file*) ;
 unsigned int VAR_4 ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (unsigned int,char*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_14 (unsigned int) ;
 scalar_t__ FUNC_15 (char*,unsigned int) ;

int
FUNC_16 (CORE_ADDR VAR_6, int VAR_7, int VAR_8, struct ui_file *VAR_9)
{
  int VAR_10 = 0;
  int VAR_11;
  unsigned int VAR_12;
  unsigned int VAR_13;
  unsigned int VAR_14;
  char *VAR_15 = ((void*)0);
  char *VAR_16;
  char *VAR_17;
  struct cleanup *VAR_18 = ((void*)0);
  int VAR_19;
  VAR_12 = (VAR_7 == -1 ? VAR_4 : FUNC_9 (VAR_7, VAR_4));
  VAR_14 = (VAR_7 == -1 ? FUNC_9 (8, VAR_12) : VAR_12);




  VAR_19 = 0;
  VAR_18 = FUNC_8 (VAR_3, 0);

  if (VAR_7 > 0)
    {
      VAR_15 = (char *) FUNC_14 (VAR_7 * VAR_8);
      VAR_16 = VAR_15;
      VAR_18 = FUNC_8 (VAR_5, VAR_15);

      VAR_13 = FUNC_10 (VAR_6, VAR_16, VAR_7 * VAR_8, &VAR_11)
 / VAR_8;
      VAR_6 += VAR_13 * VAR_8;
      VAR_16 += VAR_13 * VAR_8;
    }
  else if (VAR_7 == -1)
    {
      unsigned long VAR_20 = 0;
      do
 {
   VAR_1;
   VAR_13 = FUNC_9 (VAR_14, VAR_12 - VAR_20);

   if (VAR_15 == ((void*)0))
     VAR_15 = (char *) FUNC_14 (VAR_13 * VAR_8);
   else
     {
       FUNC_2 (VAR_18);
       VAR_15 = (char *) FUNC_15 (VAR_15, (VAR_13 + VAR_20) * VAR_8);
     }

   VAR_18 = FUNC_8 (VAR_5, VAR_15);
   VAR_16 = VAR_15 + VAR_20 * VAR_8;
   VAR_20 += VAR_13;


   VAR_13 = FUNC_10 (VAR_6, VAR_16, VAR_13 * VAR_8, &VAR_11)
     / VAR_8;







   VAR_17 = VAR_16 + VAR_13 * VAR_8;
   while (VAR_16 < VAR_17)
     {
       unsigned long VAR_21;

       VAR_21 = FUNC_4 (VAR_16, VAR_8);
       VAR_6 += VAR_8;
       VAR_16 += VAR_8;
       if (VAR_21 == 0)
  {


    VAR_11 = 0;
    VAR_19 = 1;
    break;
  }
     }
 }
      while (VAR_11 == 0
      && VAR_16 - VAR_15 < VAR_12 * VAR_8
      && !VAR_19);
    }
  else
    {
      VAR_15 = VAR_16 = ((void*)0);
      VAR_11 = 0;
    }







  if (VAR_7 == -1 && !VAR_19)
    {
      char *VAR_22;





      VAR_22 = (char *) FUNC_1 (VAR_8);

      if (FUNC_13 (VAR_6, VAR_22, VAR_8) == 0
   && FUNC_4 (VAR_22, VAR_8) != 0)
 VAR_10 = 1;
    }
  else if ((VAR_7 >= 0 && VAR_11 != 0) || (VAR_7 > (VAR_16 - VAR_15) / VAR_8))
    {



      VAR_10 = 1;
    }

  VAR_1;




  if (VAR_11 == 0 || VAR_16 > VAR_15)
    {
      if (VAR_2)
 {
   FUNC_6 (" ", VAR_9);
 }
      FUNC_0 (VAR_9, VAR_15, (VAR_16 - VAR_15) / VAR_8, VAR_8, VAR_10);
    }

  if (VAR_11 != 0)
    {
      if (VAR_11 == VAR_0)
 {
   FUNC_5 (VAR_9, " <Address ");
   FUNC_11 (VAR_6, 1, VAR_9);
   FUNC_5 (VAR_9, " out of bounds>");
 }
      else
 {
   FUNC_5 (VAR_9, " <Error reading address ");
   FUNC_11 (VAR_6, 1, VAR_9);
   FUNC_5 (VAR_9, ": %s>", FUNC_12 (VAR_11));
 }
    }
  FUNC_7 (VAR_9);
  FUNC_3 (VAR_18);
  return ((VAR_16 - VAR_15) / VAR_8);
}
