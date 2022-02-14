
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ppc_mq_regnum; int ppc_fpscr_regnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 unsigned char* FUNC_1 (int,int,int*) ;
 unsigned char* FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (int,unsigned char*) ;

__attribute__((used)) static void
FUNC_4 (int VAR_6)
{
  int VAR_7;
  unsigned char *VAR_8, *VAR_9, *VAR_10, *VAR_11;
  unsigned char VAR_12[32];
  unsigned char VAR_13[1];
  int VAR_14, VAR_15;
  int VAR_16, VAR_17;
  int VAR_18, VAR_19, VAR_20;


  for (VAR_7 = 0; VAR_7 < (VAR_2 - VAR_1 + 1); VAR_7++)
    {
      VAR_12[VAR_7] = -1;
    }
  VAR_13[0] = -1;


  if (VAR_6 == -1)
    {
      VAR_14 = 0;
      VAR_15 = VAR_3 - 1;

      VAR_16 = 0;
      VAR_17 = VAR_0 - 1;
    }
  else
    {
      VAR_14 = VAR_6;
      VAR_15 = VAR_6;

      VAR_16 = VAR_4[VAR_6];
      VAR_17 = VAR_4[VAR_6];
    }

  if (VAR_16 == -1)
    {
      FUNC_3 (VAR_14, ((void*)0));
      return;
    }




  if (VAR_14 == VAR_15)
    {



      if ((VAR_14 == FUNC_0 (VAR_5)->ppc_mq_regnum)
          || (VAR_14 == FUNC_0 (VAR_5)->ppc_fpscr_regnum)
   || ((VAR_14 >= VAR_1) && (VAR_14 <= VAR_2)))
 {

   FUNC_3 (VAR_14, ((void*)0));
   return;
 }
      else
 {
   VAR_8 = FUNC_1 (VAR_16,
      VAR_17, &VAR_18);
 }
    }
  else

    {

      VAR_9 = FUNC_1 (VAR_16,
       VAR_1 - 1, &VAR_19);
      VAR_10 = (FUNC_2 (VAR_12,
    FUNC_1 (VAR_2 + 1,
       VAR_17 - 1, &VAR_20)));
      VAR_11 = (FUNC_2 (VAR_9, VAR_10));
      VAR_8 = (FUNC_2 (VAR_11, VAR_13));
      VAR_18 = VAR_19 + 32 + VAR_20 + 1;
    }






  for (VAR_7 = VAR_14; VAR_7 <= VAR_15; VAR_7++)
    {
      int VAR_21, VAR_22;

      VAR_21 = VAR_4[VAR_7];
      if (VAR_21 != -1)
 {
   VAR_22 = VAR_21 - VAR_16;

   if (VAR_22 >= VAR_18 / 4)
     continue;

   FUNC_3 (VAR_7, VAR_8 + 4 * VAR_22);
 }
      else
 FUNC_3 (VAR_7, ((void*)0));
    }
}
