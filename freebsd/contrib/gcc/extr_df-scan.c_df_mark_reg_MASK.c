
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int bitmap ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int** VAR_2 ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_3, void *VAR_4)
{
  bitmap VAR_5 = (bitmap) VAR_4;
  int VAR_6 = FUNC_1 (VAR_3);

  FUNC_3 (FUNC_0 (VAR_3) != VAR_0);

  FUNC_2 (VAR_5, VAR_6);
  if (VAR_6 < VAR_1)
    {
      int VAR_7 = VAR_2[VAR_6][FUNC_0 (VAR_3)];
      while (--VAR_7 > 0)
 FUNC_2 (VAR_5, VAR_6 + VAR_7);
    }
}
