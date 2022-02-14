
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float gcov_type ;
typedef int HOST_WIDEST_INT ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*,int,...) ;

__attribute__((used)) static char const *
FUNC_1 (gcov_type VAR_1, gcov_type VAR_2, int VAR_3)
{
  static char VAR_4[20];

  if (VAR_3 >= 0)
    {
      float VAR_5 = VAR_2 ? (float)VAR_1 / VAR_2 : 0;
      int VAR_6;
      unsigned VAR_7 = 100;
      unsigned VAR_8;

      for (VAR_6 = VAR_3; VAR_6--; )
 VAR_7 *= 10;

      VAR_8 = (unsigned) (VAR_5 * VAR_7 + (float)0.5);
      if (VAR_8 <= 0 && VAR_1)
 VAR_8 = 1;
      else if (VAR_8 >= VAR_7 && VAR_1 != VAR_2)
 VAR_8 = VAR_7 - 1;
      VAR_6 = FUNC_0 (VAR_4, "%.*u%%", VAR_3 + 1, VAR_8);
      if (VAR_3)
 {
   VAR_3++;
   do
     {
       VAR_4[VAR_6+1] = VAR_4[VAR_6];
       VAR_6--;
     }
   while (VAR_3--);
   VAR_4[VAR_6 + 1] = '.';
 }
    }
  else
    FUNC_0 (VAR_4, VAR_0, (HOST_WIDEST_INT)VAR_1);

  return VAR_4;
}
