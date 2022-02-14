
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,char) ;
 size_t FUNC_2 (int *) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (int *,size_t,int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (char*,int *,...) ;
 int FUNC_10 (char) ;

void
FUNC_11(Char *VAR_7, Char *VAR_8[], int VAR_9, int VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    size_t VAR_16;
    unsigned int VAR_17, VAR_18 = 0;
    Char *VAR_19;
    int VAR_20;

    VAR_6 = 0;


    VAR_20 = ((VAR_19 = FUNC_8(VAR_2)) != VAR_1) &&
      (FUNC_1(VAR_19, 'x') != ((void*)0));

    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
 VAR_18 = FUNC_6(VAR_18, (unsigned int) FUNC_0(VAR_8[VAR_11]));
    }

    VAR_18 += VAR_10 ? 1 : 2;
    VAR_14 = VAR_3 / VAR_18;
    if (!VAR_14 || !FUNC_5(VAR_5 ? 1 : VAR_0))
 VAR_14 = 1;
    VAR_15 = (VAR_9 + (VAR_14 - 1)) / VAR_14;

    VAR_11 = -1;
    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++) {
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
     VAR_11 = VAR_20 ? (VAR_11 + 1) : (VAR_13 * VAR_15 + VAR_12);

     if (VAR_11 < VAR_9) {
  VAR_17 = 0;
  VAR_16 = FUNC_2(VAR_8[VAR_11]);
  if (VAR_10) {

      FUNC_9("%S", VAR_8[VAR_11]);
  }
  else {

      FUNC_9("%-S%c", VAR_8[VAR_11], FUNC_3(VAR_7, VAR_8[VAR_11]));
      VAR_17++;
  }


  if (VAR_13 < (VAR_14 - 1)) {
      VAR_16 = FUNC_0(VAR_8[VAR_11]) + VAR_17;
      for (; VAR_16 < VAR_18; VAR_16++)
   FUNC_10(' ');
  }
     }
     else if (VAR_20)
  break;
 }
 if (VAR_4)
     FUNC_10('\r');
 FUNC_10('\n');
    }

    VAR_6 = 1;
    FUNC_4();
}
