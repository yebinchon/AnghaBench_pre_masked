
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int Xsize; int Ysize; int* Bitmap; } ;
typedef TYPE_1__ VGLBitmap ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int,TYPE_1__*,int,int,int,int) ;
 TYPE_1__* FUNC_2 (int ,int,int,int *) ;
 int FUNC_3 (TYPE_1__*,int,int,char*,int,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int,int,int,int,int) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;

int
FUNC_12(int VAR_8, char **VAR_9)
{
  int VAR_10, VAR_11, VAR_12, VAR_13,VAR_14;
  VGLBitmap *VAR_15;






  FUNC_7(VAR_1);


  FUNC_9(VAR_7);



  VAR_11=VAR_2->Xsize;
  VAR_12=VAR_2->Ysize;


  VAR_15 = FUNC_2(VAR_0, 256, 256, ((void*)0));
  FUNC_0(VAR_15);
  FUNC_4(VAR_15, 0);


  for (VAR_10=0; VAR_10<VAR_12; VAR_10++)
    FUNC_8(VAR_2, 0, VAR_10, VAR_11-1, VAR_10, VAR_10/2 % 256);


  FUNC_8(VAR_2, 0, 0, VAR_11-1, VAR_12-1, 63);
  FUNC_8(VAR_2, 0, VAR_12-1, VAR_11-1, 0, 63);
  FUNC_8(VAR_2, 0, 0, 0, VAR_12-1, 63);
  FUNC_8(VAR_2, VAR_11-1, 0, VAR_11-1, VAR_12-1, 63);
  FUNC_5(VAR_2, 256, 0, 256, 256, 63);
  FUNC_5(VAR_2, 0, 256, 256, 256, 0);


  FUNC_3(VAR_2, 100,100,
    "This is text", 63, 0, 0, VAR_5);
  FUNC_11(2);
  FUNC_3(VAR_2, 100,100,
    "This is text", 63, 0, 0, VAR_6);
  FUNC_11(2);
  FUNC_3(VAR_2, 100,100,
    "This is text", 63, 0, 0, VAR_4);
  FUNC_11(2);
  FUNC_3(VAR_2, 100,100,
    "This is text", 63, 0, 0, VAR_3);
  FUNC_11(2);


  for (VAR_13=0; VAR_13<256; VAR_13++)
    for (VAR_14=0; VAR_14<256; VAR_14++)
      VAR_15->Bitmap[VAR_13+256*VAR_14] = VAR_13%16;
  FUNC_1(VAR_15, 0, 0, VAR_2, 0, 0, 128, 128);
  for (VAR_13=0; VAR_13<256; VAR_13++)
    for (VAR_14=0; VAR_14<256; VAR_14++)
      VAR_15->Bitmap[VAR_13+256*VAR_14] = VAR_14%16;
  FUNC_1(VAR_15, 0, 0, VAR_2, 3, 128, 128, 128);
  FUNC_11(2);
  FUNC_1(VAR_2, 237, 311, VAR_15, 64, 64, 128, 128);
  FUNC_1(VAR_15, 32, 32, VAR_2, 400, 128, 128, 128);
  FUNC_11(2);
  FUNC_1(VAR_2, 300, 300, VAR_2, 500, 128, 128, 128);
  FUNC_11(5);
  VAR_13=0;


  while (++VAR_13) {
    FUNC_1(VAR_2, FUNC_10()%VAR_11, FUNC_10()%VAR_12,
                  VAR_2, FUNC_10()%VAR_11, FUNC_10()%VAR_12,
                  FUNC_10()%VAR_11, FUNC_10()%VAR_12);
    FUNC_8(VAR_2, FUNC_10()%VAR_11, FUNC_10()%VAR_12,
            FUNC_10()%VAR_11, FUNC_10()%VAR_12, FUNC_10()%256);
    FUNC_5(VAR_2, FUNC_10()%VAR_11, FUNC_10()%VAR_12,
               FUNC_10()%VAR_11/2, FUNC_10()%VAR_12/2, FUNC_10()%256);
    FUNC_10();
    if (VAR_13 > 1000) break;
  }


  FUNC_6();
  return 0;
}
