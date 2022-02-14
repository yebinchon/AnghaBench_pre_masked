
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int vi_height; int vi_width; int vi_cwidth; int vi_cheight; int vi_mem_model; int vi_flags; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_11__ {int va_flags; TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
struct creator_softc {int sc_node; char sc_height; char sc_width; int sc_xmargin; int sc_ymargin; int sc_flags; int sc_font; } ;
typedef int phandle_t ;
typedef int buf ;
struct TYPE_12__ {int width; int height; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct creator_softc*,int ,int ) ;
 int FUNC_1 (struct creator_softc*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 TYPE_5__ VAR_20 ;
 void* FUNC_7 (char*,int *,int) ;
 int FUNC_8 (TYPE_2__*,int ,int,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_10(int VAR_21, video_adapter_t *VAR_22, int VAR_23)
{
 struct creator_softc *VAR_24;
 phandle_t VAR_25;
 video_info_t *VAR_26;
 char VAR_27[sizeof("screen-#columns")];

 VAR_24 = (struct creator_softc *)VAR_22;
 VAR_26 = &VAR_22->va_info;

 FUNC_8(VAR_22, VAR_2, -1, VAR_21);

 if (FUNC_3(VAR_24->sc_node, "height", &VAR_24->sc_height,
     sizeof(VAR_24->sc_height)) == -1)
  return (VAR_4);
 if (FUNC_3(VAR_24->sc_node, "width", &VAR_24->sc_width,
     sizeof(VAR_24->sc_width)) == -1)
  return (VAR_4);
 if ((VAR_25 = FUNC_2("/options")) == -1)
  return (VAR_4);
 if (FUNC_3(VAR_25, "screen-#rows", VAR_27, sizeof(VAR_27)) == -1)
  return (VAR_4);
 VAR_26->vi_height = FUNC_7(VAR_27, ((void*)0), 10);
 if (FUNC_3(VAR_25, "screen-#columns", VAR_27, sizeof(VAR_27)) == -1)
  return (VAR_4);
 VAR_26->vi_width = FUNC_7(VAR_27, ((void*)0), 10);
 VAR_26->vi_cwidth = VAR_20;
 VAR_26->vi_cheight = VAR_20;
 VAR_26->vi_flags = VAR_18;
 VAR_26->vi_mem_model = VAR_19;

 VAR_24->sc_font = VAR_20;
 VAR_24->sc_xmargin = (VAR_24->sc_width - (VAR_26->vi_width * VAR_26->vi_cwidth)) / 2;
 VAR_24->sc_ymargin = (VAR_24->sc_height - (VAR_26->vi_height * VAR_26->vi_cheight)) / 2;

 FUNC_6(VAR_22, 0);

 if (!(VAR_24->sc_flags & VAR_0)) {
  FUNC_1(VAR_24, VAR_5, VAR_9, VAR_6);
  if (((FUNC_0(VAR_24, VAR_5, VAR_11) &
      VAR_7) >> 12) != 0x236e) {
   VAR_24->sc_flags |= VAR_3;
   FUNC_1(VAR_24, VAR_5, VAR_9, VAR_8);
   if (((FUNC_0(VAR_24, VAR_5, VAR_11) &
       VAR_10) >> 8) <= 2)
    VAR_24->sc_flags |= VAR_1;
  }
 }

 FUNC_4(VAR_22, VAR_17);
 FUNC_5(VAR_22);







 VAR_22->va_flags |= VAR_13 | VAR_15 | VAR_12 |
     VAR_14;
 if (FUNC_9(VAR_22) < 0)
  return (VAR_4);
 VAR_22->va_flags |= VAR_16;

 return (0);
}
