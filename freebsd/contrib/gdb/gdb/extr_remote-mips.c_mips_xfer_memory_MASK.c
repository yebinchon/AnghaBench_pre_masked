
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int ) ;

__attribute__((used)) static int
FUNC_8 (CORE_ADDR VAR_4, char *VAR_5, int VAR_6, int VAR_7,
    struct mem_attrib *VAR_8, struct target_ops *VAR_9)
{
  int VAR_10;
  CORE_ADDR VAR_11;
  int VAR_12;
  char *VAR_13;
  int VAR_14;



  if (VAR_3)
    VAR_4 &= (CORE_ADDR) 0xffffffff;


  VAR_11 = VAR_4 & ~3;

  VAR_12 = (((VAR_4 + VAR_6) - VAR_11) + 3) / 4;

  VAR_13 = FUNC_0 (VAR_12 * 4);

  if (VAR_7)
    {

      if (VAR_11 != VAR_4 || VAR_6 < 4)
 {

   FUNC_7 (&VAR_13[0], 4, FUNC_4 (VAR_11));
 }

      if (VAR_12 > 1)
 {


   FUNC_7 (&VAR_13[(VAR_12 - 1) * 4], 4,
      FUNC_4 (VAR_11 + (VAR_12 - 1) * 4));
 }



      FUNC_3 ((char *) VAR_13 + (VAR_4 & 3), VAR_5, VAR_6);



      for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++, VAR_11 += 4)
 {
   VAR_14 = FUNC_5 (VAR_11,
          FUNC_1 (&VAR_13[VAR_10 * 4], 4),
        ((void*)0));

   if (VAR_10 % 256 == 255)
     {
       FUNC_6 ("*");
       FUNC_2 (VAR_2);
     }
   if (VAR_14)
     {
       VAR_1 = VAR_14;
       return 0;
     }

 }
      if (VAR_12 >= 256)
 FUNC_6 ("\n");
    }
  else
    {

      for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++, VAR_11 += 4)
 {
   FUNC_7 (&VAR_13[VAR_10 * 4], 4, FUNC_4 (VAR_11));
   VAR_0;
 }


      FUNC_3 (VAR_5, VAR_13 + (VAR_4 & 3), VAR_6);
    }
  return VAR_6;
}
