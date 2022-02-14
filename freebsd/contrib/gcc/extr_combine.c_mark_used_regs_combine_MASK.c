
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int RTX_CODE ;




 unsigned int VAR_0 ;







 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 unsigned int VAR_3 ;

 int FUNC_4 (int ) ;


 unsigned int FUNC_5 (int ) ;

 int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int ) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int) ;
 int VAR_7 ;
 int * VAR_8 ;
 int ** VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_12 (rtx VAR_11)
{
  RTX_CODE VAR_12 = FUNC_0 (VAR_11);
  unsigned int VAR_13;
  int VAR_14;

  switch (VAR_12)
    {
    case 132:
    case 128:
    case 134:
    case 136:
    case 135:
    case 133:
    case 131:
    case 140:
    case 141:
    case 139:





      return;

    case 137:


      if (FUNC_4 (FUNC_9 (VAR_11, 0)))
 FUNC_12 (FUNC_9 (FUNC_9 (VAR_11, 0), 0));
      return;

    case 130:
      VAR_13 = FUNC_5 (VAR_11);


      if (VAR_13 < VAR_1)
 {
   unsigned int VAR_15, VAR_16;


   if (VAR_13 == VAR_4






       || VAR_13 == VAR_2)
     return;

   VAR_15 = VAR_13 + VAR_9[VAR_13][FUNC_1 (VAR_11)];
   for (VAR_16 = VAR_13; VAR_16 < VAR_15; VAR_16++)
     FUNC_7 (VAR_10, VAR_16);
 }
      return;

    case 129:
      {


 rtx VAR_17 = FUNC_6 (VAR_11);

 while (FUNC_0 (VAR_17) == VAR_6
        || FUNC_0 (VAR_17) == VAR_7
        || FUNC_0 (VAR_17) == VAR_5)
   VAR_17 = FUNC_9 (VAR_17, 0);

 if (FUNC_4 (VAR_17))
   FUNC_12 (FUNC_9 (VAR_17, 0));

 FUNC_12 (FUNC_8 (VAR_11));
      }
      return;

    default:
      break;
    }



  {
    const char *VAR_18 = FUNC_2 (VAR_12);

    for (VAR_14 = FUNC_3 (VAR_12) - 1; VAR_14 >= 0; VAR_14--)
      {
 if (VAR_18[VAR_14] == 'e')
   FUNC_12 (FUNC_9 (VAR_11, VAR_14));
 else if (VAR_18[VAR_14] == 'E')
   {
     int VAR_19;

     for (VAR_19 = 0; VAR_19 < FUNC_11 (VAR_11, VAR_14); VAR_19++)
       FUNC_12 (FUNC_10 (VAR_11, VAR_14, VAR_19));
   }
      }
  }
}
