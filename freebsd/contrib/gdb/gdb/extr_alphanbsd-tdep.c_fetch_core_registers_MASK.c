
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_4, unsigned VAR_5, int VAR_6,
                      CORE_ADDR VAR_7)
{
  char *VAR_8, *VAR_9;
  int VAR_10;


  static const int VAR_11[] =
  {
     0, 1, 2, 3,
     4, 5, 6, 7,
     8, 9, 10, 11,
    12, 13, 14, 15,
    30, 31, 32, 16,
    17, 18, 19, 20,
    21, 22, 23, 24,
    25, 29, 26
  };



  if (VAR_6 != 0)
    return;

  VAR_8 = VAR_4;
  VAR_9 = VAR_4 + (33 * 8);

  if (VAR_5 < ((33 * 8) + VAR_2))
    {
      FUNC_2 ("Wrong size register set in core file.");
      return;
    }


  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
    FUNC_1 (VAR_10, VAR_8 + (VAR_11[VAR_10] * 8));
  FUNC_1 (VAR_0, ((void*)0));
  FUNC_1 (VAR_1, VAR_8 + (28 * 8));


  FUNC_0 (VAR_9, -1);
}
