
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 int FUNC_8 (scalar_t__,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_9 (tree VAR_1, unsigned char *VAR_2, int VAR_3)
{
  int VAR_4, VAR_5, VAR_6, VAR_7;
  tree VAR_8, VAR_9, VAR_10;

  VAR_6 = 0;
  VAR_10 = FUNC_4 (VAR_1);
  VAR_7 = FUNC_6 (FUNC_2 (VAR_1));
  VAR_8 = FUNC_2 (FUNC_2 (VAR_1));
  VAR_5 = FUNC_0 (FUNC_5 (VAR_8));
  for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++)
    {
      if (VAR_10)
 {
   VAR_9 = FUNC_3 (VAR_10);
   VAR_10 = FUNC_1 (VAR_10);
 }
      else
 VAR_9 = VAR_0;

      if (VAR_9)
 {
   if (FUNC_8 (VAR_9, VAR_2+VAR_6, VAR_3-VAR_6) != VAR_5)
     return 0;
 }
      else
 {
   if (VAR_6 + VAR_5 > VAR_3)
     return 0;
   FUNC_7 (VAR_2+VAR_6, 0, VAR_5);
 }
      VAR_6 += VAR_5;
    }
  return VAR_6;
}
