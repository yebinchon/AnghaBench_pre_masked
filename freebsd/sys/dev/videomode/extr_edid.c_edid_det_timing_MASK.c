
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct videomode {int dot_clock; unsigned int hdisplay; unsigned int htotal; unsigned int hsync_start; unsigned int hsync_end; unsigned int vdisplay; unsigned int vtotal; unsigned int vsync_start; unsigned int vsync_end; int flags; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (int*) ;
 unsigned int FUNC_3 (int*) ;
 unsigned int FUNC_4 (int*) ;
 unsigned int FUNC_5 (int*) ;
 unsigned int FUNC_6 (int*) ;
 unsigned int FUNC_7 (int*) ;
 unsigned int FUNC_8 (int*) ;
 unsigned int FUNC_9 (int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_10(uint8_t *VAR_10, struct videomode *VAR_11)
{
 unsigned VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned VAR_16, VAR_17, VAR_18, VAR_19;
 uint8_t VAR_20;

 VAR_20 = FUNC_1(VAR_10);


 if (VAR_20 & (VAR_2 |
  VAR_3))
  return 0;

 VAR_11->dot_clock = FUNC_0(VAR_10) / 1000;

 VAR_12 = FUNC_2(VAR_10);
 VAR_13 = FUNC_3(VAR_10);
 VAR_14 = FUNC_5(VAR_10);
 VAR_15 = FUNC_4(VAR_10);

 VAR_16 = FUNC_6(VAR_10);
 VAR_17 = FUNC_7(VAR_10);
 VAR_18 = FUNC_9(VAR_10);
 VAR_19 = FUNC_8(VAR_10);



 VAR_11->hdisplay = VAR_12;
 VAR_11->htotal = VAR_12 + VAR_13;
 VAR_11->hsync_start = VAR_12 + VAR_15;
 VAR_11->hsync_end = VAR_11->hsync_start + VAR_14;

 VAR_11->vdisplay = VAR_16;
 VAR_11->vtotal = VAR_16 + VAR_17;
 VAR_11->vsync_start = VAR_16 + VAR_19;
 VAR_11->vsync_end = VAR_11->vsync_start + VAR_18;

 VAR_11->flags = 0;

 if (VAR_20 & VAR_1)
  VAR_11->flags |= VAR_5;
 if (VAR_20 & VAR_0)
  VAR_11->flags |= VAR_8;
 else
  VAR_11->flags |= VAR_6;

 if (VAR_20 & VAR_4)
  VAR_11->flags |= VAR_9;
 else
  VAR_11->flags |= VAR_7;

 return 1;
}
