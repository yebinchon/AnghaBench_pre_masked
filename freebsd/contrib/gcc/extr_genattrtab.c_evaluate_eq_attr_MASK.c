
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int const VAR_4 ;

 char FUNC_3 (char) ;
 int FUNC_4 (int ,int) ;
 char* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int const,int ,...) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ,int ,int,int) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (char*) ;
 int VAR_7 ;
 int FUNC_18 (int ) ;

__attribute__((used)) static rtx
FUNC_19 (rtx VAR_8, rtx VAR_9, int VAR_10, int VAR_11)
{
  rtx VAR_12, VAR_13;
  rtx VAR_14;
  rtx VAR_15;
  int VAR_16;

  switch (FUNC_2 (VAR_9))
    {
    case 129:
      if (! FUNC_15 (FUNC_5 (VAR_9, 0), FUNC_5 (VAR_8, 1)))
 VAR_15 = VAR_7;
      else
 VAR_15 = VAR_6;
      break;

    case 128:
      {
 char *VAR_17;
 char VAR_18[256];

 FUNC_10 (FUNC_2 (VAR_8) == VAR_2);
 FUNC_10 (FUNC_17 (FUNC_5 (VAR_8, 0)) + FUNC_17 (FUNC_5 (VAR_8, 1)) + 2
      <= 256);

 FUNC_16 (VAR_18, FUNC_5 (VAR_8, 0));
 FUNC_14 (VAR_18, "_");
 FUNC_14 (VAR_18, FUNC_5 (VAR_8, 1));
 for (VAR_17 = VAR_18; *VAR_17; VAR_17++)
   *VAR_17 = FUNC_3 (*VAR_17);

 VAR_15 = FUNC_8 (VAR_1, VAR_9,
      FUNC_8 (128,
         FUNC_1 (VAR_18)));
 break;
      }

    case 130:
      VAR_12 = VAR_6;
      VAR_13 = VAR_7;

      for (VAR_16 = 0; VAR_16 < FUNC_7 (VAR_9, 0); VAR_16 += 2)
 {
   rtx VAR_19 = FUNC_13 (FUNC_6 (VAR_9, 0, VAR_16),
      VAR_10, VAR_11);

   VAR_14 = FUNC_12 (VAR_0, VAR_13, VAR_19,
         VAR_10, VAR_11);
   VAR_14 = FUNC_12 (VAR_0, VAR_14,
         FUNC_19 (VAR_8,
             FUNC_6 (VAR_9, 0,
        VAR_16 + 1),
             VAR_10, VAR_11),
         VAR_10, VAR_11);
   VAR_12 = FUNC_12 (VAR_3, VAR_12, VAR_14,
         VAR_10, VAR_11);


   VAR_15 = FUNC_8 (VAR_4, VAR_19);
   VAR_13 = FUNC_12 (VAR_0, VAR_13, VAR_15,
          VAR_10, VAR_11);
 }


      VAR_14 = FUNC_12 (VAR_0, VAR_13,
     FUNC_19 (VAR_8, FUNC_4 (VAR_9, 1),
         VAR_10, VAR_11),
     VAR_10, VAR_11);
      VAR_15 = FUNC_12 (VAR_3, VAR_12, VAR_14, VAR_10, VAR_11);
      break;

    default:
      FUNC_11 ();
    }




  VAR_5 = 0;
  FUNC_18 (VAR_15);

  if (VAR_5)
    {
      if (! FUNC_0 (VAR_8))
 return FUNC_9 (VAR_8);
      return VAR_8;
    }
  else
    return VAR_15;
}
