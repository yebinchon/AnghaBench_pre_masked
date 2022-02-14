
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int *) ;

__attribute__((used)) static const char *
FUNC_2 (rtx *VAR_1, const char *VAR_2, const char *VAR_3,
   int VAR_4, HOST_WIDE_INT VAR_5)
{




  if (VAR_5 == 0)
    {

      VAR_1[VAR_4] = VAR_0;
      FUNC_1 (VAR_2, VAR_1);
    }
  else
    {
      int VAR_6;
      const char * VAR_7 = VAR_2;


      for (VAR_6 = 0; VAR_6 < 32; VAR_6 += 2)
 {
   if (VAR_5 & (3 << VAR_6))
     {
       VAR_1[VAR_4] = FUNC_0 (VAR_5 & (255 << VAR_6));
       FUNC_1 (VAR_7, VAR_1);
       VAR_7 = VAR_3;
       VAR_6 += 6;
     }
 }
    }

  return "";
}
