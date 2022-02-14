
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbitmap ;
typedef int HARD_REG_SET ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3 (sbitmap *VAR_5, sbitmap *VAR_6,
       HARD_REG_SET *VAR_7)
{
  int VAR_8;
  int VAR_9;



  FUNC_2 (VAR_5, VAR_4);
  for (VAR_8 = VAR_0; VAR_8 < VAR_4; VAR_8++)
    {
      for (VAR_9 = VAR_2; VAR_9 <= VAR_3; VAR_9++)
 if (FUNC_0 (VAR_1, VAR_9)
     && FUNC_0 (VAR_7[VAR_8], VAR_9))
   FUNC_1 (VAR_5[VAR_8], VAR_5[VAR_8],
     VAR_6[VAR_9 - VAR_2]);
    }
}
