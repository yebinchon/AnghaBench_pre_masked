
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int VGLBitmap ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int,int,int,int ) ;

void
FUNC_3(VGLBitmap *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, u_long VAR_5)
{
  int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

  VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_16);
  VAR_7 = FUNC_0(VAR_4, VAR_2, VAR_17);

  if (VAR_16 == VAR_17)
    VAR_18 = 1;
  else
    VAR_18 = -1;

  if (VAR_7 > VAR_6) {
    FUNC_1(VAR_1, VAR_2);
    FUNC_1(VAR_3, VAR_4);
    FUNC_1(VAR_6, VAR_7);
    VAR_19 = 1;
  } else
    VAR_19 = 0;

  if (VAR_1 > VAR_3) {
    VAR_11 = VAR_3;
    VAR_12 = VAR_4;


  } else {
    VAR_11 = VAR_1;
    VAR_12 = VAR_2;
    VAR_1 = VAR_3;
    VAR_2 = VAR_4;
  }





  VAR_13 = (VAR_6 - 1) / 4;
  VAR_15 = (VAR_6 - 1) % 4;

  FUNC_2(VAR_0, VAR_11, VAR_12, VAR_19, VAR_5);
  if (VAR_15 < 0)
    return;

  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_19, VAR_5);
  VAR_9 = 4 * VAR_7 - 2 * VAR_6;
  if (VAR_9 < 0) {
    VAR_14 = 2 * VAR_7;
    VAR_8 = 2 * VAR_14;
    VAR_10 = VAR_8 - VAR_6;

    for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++) {
      ++VAR_11;
      --VAR_1;
      if (VAR_10 < 0) {

        FUNC_2(VAR_0, VAR_11, VAR_12, VAR_19, VAR_5);
        FUNC_2(VAR_0, ++VAR_11, VAR_12, VAR_19, VAR_5);

        FUNC_2(VAR_0, VAR_1, VAR_2, VAR_19, VAR_5);
        FUNC_2(VAR_0, --VAR_1, VAR_2, VAR_19, VAR_5);
        VAR_10 += VAR_8;
      } else {
        if (VAR_10 < VAR_14) {

          FUNC_2(VAR_0, VAR_11, VAR_12, VAR_19, VAR_5);
          FUNC_2(VAR_0, ++VAR_11, VAR_12 += VAR_18, VAR_19,
              VAR_5);

          FUNC_2(VAR_0, VAR_1, VAR_2, VAR_19, VAR_5);
          FUNC_2(VAR_0, --VAR_1, VAR_2 -= VAR_18, VAR_19,
              VAR_5);
        } else {

          FUNC_2(VAR_0, VAR_11, VAR_12 += VAR_18, VAR_19, VAR_5);
          FUNC_2(VAR_0, ++VAR_11, VAR_12, VAR_19, VAR_5);

          FUNC_2(VAR_0, VAR_1, VAR_2 -= VAR_18, VAR_19,
              VAR_5);
          FUNC_2(VAR_0, --VAR_1, VAR_2, VAR_19, VAR_5);
        }
        VAR_10 += VAR_9;
      }
    }


    if (VAR_15) {
      if (VAR_10 < 0) {
        FUNC_2(VAR_0, ++VAR_11, VAR_12, VAR_19, VAR_5);
        if (VAR_15 > 1)
          FUNC_2(VAR_0, ++VAR_11, VAR_12, VAR_19, VAR_5);
        if (VAR_15 > 2)
          FUNC_2(VAR_0, --VAR_1, VAR_2, VAR_19, VAR_5);
      } else {
        if (VAR_10 < VAR_14) {
          FUNC_2(VAR_0, ++VAR_11, VAR_12, VAR_19, VAR_5);
          if (VAR_15 > 1)
            FUNC_2(VAR_0, ++VAR_11, VAR_12 += VAR_18, VAR_19, VAR_5);
          if (VAR_15 > 2)
            FUNC_2(VAR_0, --VAR_1, VAR_2, VAR_19, VAR_5);
        } else {

          FUNC_2(VAR_0, ++VAR_11, VAR_12 += VAR_18, VAR_19, VAR_5);
          if (VAR_15 > 1)
            FUNC_2(VAR_0, ++VAR_11, VAR_12, VAR_19, VAR_5);
          if (VAR_15 > 2)
            FUNC_2(VAR_0, --VAR_1, VAR_2 -= VAR_18, VAR_19, VAR_5);
        }
      }
    }
  }

  else {
    VAR_14 = 2 * (VAR_7 - VAR_6);
    VAR_8 = 2 * VAR_14;
    VAR_10 = VAR_8 + VAR_6;
    for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++) {
      ++VAR_11;
      --VAR_1;
      if (VAR_10 > 0) {

        FUNC_2(VAR_0, VAR_11, VAR_12 += VAR_18, VAR_19, VAR_5);
        FUNC_2(VAR_0, ++VAR_11, VAR_12 += VAR_18, VAR_19, VAR_5);

        FUNC_2(VAR_0, VAR_1, VAR_2 -= VAR_18, VAR_19, VAR_5);
        FUNC_2(VAR_0, --VAR_1, VAR_2 -= VAR_18, VAR_19, VAR_5);
        VAR_10 += VAR_8;
      } else {
        if (VAR_10 < VAR_14) {

          FUNC_2(VAR_0, VAR_11, VAR_12, VAR_19, VAR_5);
          FUNC_2(VAR_0, ++VAR_11, VAR_12 += VAR_18, VAR_19,
              VAR_5);


          FUNC_2(VAR_0, VAR_1, VAR_2, VAR_19, VAR_5);
          FUNC_2(VAR_0, --VAR_1, VAR_2 -= VAR_18, VAR_19,
              VAR_5);
        } else {

          FUNC_2(VAR_0, VAR_11, VAR_12 += VAR_18, VAR_19, VAR_5);
          FUNC_2(VAR_0, ++VAR_11, VAR_12, VAR_19, VAR_5);

          FUNC_2(VAR_0, VAR_1, VAR_2 -= VAR_18, VAR_19, VAR_5);
          FUNC_2(VAR_0, --VAR_1, VAR_2, VAR_19, VAR_5);
        }
        VAR_10 += VAR_9;
      }
    }

    if (VAR_15) {
      if (VAR_10 > 0) {
        FUNC_2(VAR_0, ++VAR_11, VAR_12 += VAR_18, VAR_19, VAR_5);
        if (VAR_15 > 1)
          FUNC_2(VAR_0, ++VAR_11, VAR_12 += VAR_18, VAR_19,
              VAR_5);
        if (VAR_15 > 2)
          FUNC_2(VAR_0, --VAR_1, VAR_2 -= VAR_18, VAR_19,
              VAR_5);
      } else {
        if (VAR_10 < VAR_14) {
          FUNC_2(VAR_0, ++VAR_11, VAR_12, VAR_19, VAR_5);
          if (VAR_15 > 1)
            FUNC_2(VAR_0, ++VAR_11, VAR_12 += VAR_18, VAR_19, VAR_5);
          if (VAR_15 > 2)
            FUNC_2(VAR_0, --VAR_1, VAR_2, VAR_19, VAR_5);
        } else {

          FUNC_2(VAR_0, ++VAR_11, VAR_12 += VAR_18, VAR_19, VAR_5);
          if (VAR_15 > 1)
            FUNC_2(VAR_0, ++VAR_11, VAR_12, VAR_19, VAR_5);
          if (VAR_15 > 2) {
            if (VAR_10 > VAR_14)
              FUNC_2(VAR_0, --VAR_1, VAR_2 -= VAR_18, VAR_19, VAR_5);
            else
              FUNC_2(VAR_0, --VAR_1, VAR_2, VAR_19, VAR_5);
          }
        }
      }
    }
  }
}
