
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int fb_width; int fb_height; int fb_stride; int fb_size; intptr_t fb_vbase; intptr_t fb_pbase; int fb_bpp; int fb_depth; } ;
struct ipu3sc_softc {TYPE_1__ sc_info; } ;


 int FUNC_0 (int ,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ipu3sc_softc*,int ,int ) ;
 int FUNC_2 (struct ipu3sc_softc*,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int,int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,int,int,int) ;
 scalar_t__ FUNC_5 (intptr_t) ;

__attribute__((used)) static void
FUNC_6(struct ipu3sc_softc *VAR_5)
{
 uint64_t VAR_6;
 uint32_t VAR_7;



 VAR_6 = FUNC_1(VAR_5, VAR_4, FUNC_0(VAR_0, 23, 0, 16));
 VAR_6 <<= 32;
 VAR_6 |= FUNC_1(VAR_5, VAR_4, FUNC_0(VAR_0, 23, 0, 12));

 VAR_5->sc_info.fb_width = ((VAR_6 >> 29) & 0x1fff) + 1;
 VAR_5->sc_info.fb_height = ((VAR_6 >> 42) & 0x0fff) + 1;


 VAR_7 = FUNC_1(VAR_5, VAR_4, FUNC_0(VAR_0, 23, 1, 12));
 VAR_5->sc_info.fb_stride = ((VAR_7 >> 6) & 0x3fff) + 1;

 FUNC_4("%dx%d [%d]\n", VAR_5->sc_info.fb_width, VAR_5->sc_info.fb_height,
     VAR_5->sc_info.fb_stride);
 VAR_5->sc_info.fb_size = VAR_5->sc_info.fb_height * VAR_5->sc_info.fb_stride;

 VAR_5->sc_info.fb_vbase = (intptr_t)FUNC_3(VAR_5->sc_info.fb_size,
     VAR_1, VAR_2, 0, ~0, VAR_3, 0);
 VAR_5->sc_info.fb_pbase = (intptr_t)FUNC_5(VAR_5->sc_info.fb_vbase);


 FUNC_2(VAR_5, VAR_4, FUNC_0(VAR_0, 23, 1, 0),
     (((uint32_t)VAR_5->sc_info.fb_pbase >> 3) |
     (((uint32_t)VAR_5->sc_info.fb_pbase >> 3) << 29)) & 0xffffffff);

 FUNC_2(VAR_5, VAR_4, FUNC_0(VAR_0, 23, 1, 4),
     (((uint32_t)VAR_5->sc_info.fb_pbase >> 3) >> 3) & 0xffffffff);


 VAR_5->sc_info.fb_bpp = VAR_5->sc_info.fb_depth = VAR_5->sc_info.fb_stride /
     VAR_5->sc_info.fb_width * 8;
}
