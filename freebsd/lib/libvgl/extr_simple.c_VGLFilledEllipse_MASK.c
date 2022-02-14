
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int VGLBitmap ;


 int FUNC_0 (int *,int,int,int,int,int ) ;

void
FUNC_1(VGLBitmap *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, u_long VAR_5)
{
  int VAR_6 = 0, VAR_7 = VAR_4, VAR_8 = VAR_3*VAR_3, VAR_9 = VAR_3*VAR_3*2, VAR_10 = VAR_4*VAR_4;
  int VAR_11 = VAR_4*VAR_4*2, VAR_12 = VAR_10-VAR_8*VAR_4+VAR_8/4, VAR_13 = 0, VAR_14 = VAR_9*VAR_4;

  while (VAR_13<VAR_14) {
    FUNC_0(VAR_0, VAR_6, VAR_7, VAR_1, VAR_2, VAR_5);
    if (VAR_12>0) {
      VAR_7--; VAR_14-=VAR_9; VAR_12-=VAR_14;
    }
    VAR_6++; VAR_13+=VAR_11; VAR_12+=VAR_10+VAR_13;
  }
  VAR_12+=(3*(VAR_8-VAR_10)/2-(VAR_13+VAR_14))/2;
  while (VAR_7>=0) {
    FUNC_0(VAR_0, VAR_6, VAR_7, VAR_1, VAR_2, VAR_5);
    if (VAR_12<0) {
      VAR_6++; VAR_13+=VAR_11; VAR_12+=VAR_13;
    }
    VAR_7--; VAR_14-=VAR_9; VAR_12+=VAR_8-VAR_14;
  }
}
