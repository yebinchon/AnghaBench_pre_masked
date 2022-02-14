
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct video_adapter_softc {int width; int height; int stride; int fb_size; intptr_t fb_addr; intptr_t fb_paddr; int bpp; int depth; } ;
struct ipu3sc_softc {int pbase; scalar_t__ vbase; } ;


 int FUNC_0 (int ,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ipu3sc_softc*,int ,int ) ;
 int FUNC_2 (struct ipu3sc_softc*,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct ipu3sc_softc*,int) ;
 int FUNC_4 (char*,int,int,int) ;
 struct video_adapter_softc VAR_2 ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct ipu3sc_softc *VAR_4 = VAR_3;
 struct video_adapter_softc *VAR_5 = &VAR_2;
 uint64_t VAR_6;
 uint32_t VAR_7;



 VAR_6 = FUNC_1(VAR_4, VAR_1, FUNC_0(VAR_0, 23, 0, 16));
 VAR_6 <<= 32;
 VAR_6 |= FUNC_1(VAR_4, VAR_1, FUNC_0(VAR_0, 23, 0, 12));

 VAR_5->width = ((VAR_6 >> 29) & 0x1fff) + 1;
 VAR_5->height = ((VAR_6 >> 42) & 0x0fff) + 1;


 VAR_7 = FUNC_1(VAR_4, VAR_1, FUNC_0(VAR_0, 23, 1, 12));
 VAR_5->stride = ((VAR_7 >> 6) & 0x3fff) + 1;

 FUNC_4("%dx%d [%d]\n", VAR_5->width, VAR_5->height, VAR_5->stride);
 VAR_5->fb_size = VAR_5->height * VAR_5->stride;

 FUNC_3(VAR_4, VAR_5->fb_size);


 FUNC_2(VAR_4, VAR_1, FUNC_0(VAR_0, 23, 1, 0),
     ((VAR_4->pbase >> 3) | ((VAR_4->pbase >> 3) << 29)) & 0xffffffff);

 FUNC_2(VAR_4, VAR_1, FUNC_0(VAR_0, 23, 1, 4),
     ((VAR_4->pbase >> 3) >> 3) & 0xffffffff);

 VAR_5->fb_addr = (intptr_t)VAR_4->vbase;
 VAR_5->fb_paddr = (intptr_t)VAR_4->pbase;
 VAR_5->bpp = VAR_5->stride / VAR_5->width;
 VAR_5->depth = VAR_5->bpp * 8;
}
