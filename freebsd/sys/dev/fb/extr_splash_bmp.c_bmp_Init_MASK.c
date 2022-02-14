
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_12__ {int swidth; int sheight; int sdepth; int width; int height; int depth; int format; int ncols; int ** palette; int * data; } ;
struct TYPE_8__ {int biSize; int biWidth; int biHeight; int biBitCount; int biCompression; int biClrUsed; } ;
struct TYPE_10__ {TYPE_3__* bmiColors; TYPE_2__ bmiHeader; } ;
struct TYPE_7__ {int bfType; int bfOffBits; } ;
struct TYPE_11__ {TYPE_4__ bmfi; TYPE_1__ bmfh; } ;
struct TYPE_9__ {int rgbBlue; int rgbGreen; int rgbRed; } ;
typedef TYPE_5__ BITMAPF ;





 TYPE_6__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int **,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    BITMAPF *VAR_6 = (BITMAPF *)VAR_2;
    int VAR_7;

    VAR_0.data = ((void*)0);


    if (VAR_6->bmfh.bfType != 0x4d42) {
 FUNC_1("splash_bmp: not a BMP file\n");
 return(1);
    }


    if (VAR_6->bmfi.bmiHeader.biSize > sizeof(VAR_6->bmfi.bmiHeader)) {
 FUNC_1("splash_bmp: unsupported BMP format (size=%d)\n",
  VAR_6->bmfi.bmiHeader.biSize);
 return(1);
    }


    VAR_0.swidth = VAR_3;
    VAR_0.sheight = VAR_4;
    VAR_0.sdepth = VAR_5;


    VAR_0.data = (u_char *)VAR_2 + VAR_6->bmfh.bfOffBits;


    VAR_0.width = VAR_6->bmfi.bmiHeader.biWidth;
    VAR_0.height = VAR_6->bmfi.bmiHeader.biHeight;
    VAR_0.depth = VAR_6->bmfi.bmiHeader.biBitCount;
    VAR_0.format = VAR_6->bmfi.bmiHeader.biCompression;

    switch(VAR_0.format) {
    case 130:
    case 129:
    case 128:
 break;
    default:
 FUNC_1("splash_bmp: unsupported compression format\n");
 return(1);
    }


    VAR_0.ncols = (VAR_6->bmfi.bmiHeader.biClrUsed);
    FUNC_0(VAR_0.palette,sizeof(VAR_0.palette));
    if (VAR_0.ncols == 0) {
 VAR_0.ncols = 1 << VAR_6->bmfi.bmiHeader.biBitCount;
    }
    if ((VAR_0.height > VAR_0.sheight) ||
 (VAR_0.width > VAR_0.swidth) ||
 (VAR_0.ncols > (1 << VAR_5))) {
 if (VAR_1)
     FUNC_1("splash_bmp: beyond screen capacity (%dx%d, %d colors)\n",
     VAR_0.width, VAR_0.height, VAR_0.ncols);
 return(1);
    }


    for (VAR_7 = 0; VAR_7 < VAR_0.ncols; VAR_7++) {
 VAR_0.palette[VAR_7][0] = VAR_6->bmfi.bmiColors[VAR_7].rgbRed;
 VAR_0.palette[VAR_7][1] = VAR_6->bmfi.bmiColors[VAR_7].rgbGreen;
 VAR_0.palette[VAR_7][2] = VAR_6->bmfi.bmiColors[VAR_7].rgbBlue;
    }
    return(0);
}
