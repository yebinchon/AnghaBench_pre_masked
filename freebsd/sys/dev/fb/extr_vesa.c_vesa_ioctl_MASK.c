
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;


struct TYPE_22__ {int y; int x; } ;
typedef TYPE_2__ video_display_start_t ;
struct TYPE_23__ {int * transparent; int blue; int green; int red; int count; int index; } ;
typedef TYPE_3__ video_color_palette_t ;
struct TYPE_21__ {int y; int x; } ;
struct TYPE_24__ {int va_line_width; int va_mode; TYPE_1__ va_disp_start; } ;
typedef TYPE_4__ video_adapter_t ;
typedef int u_long ;
typedef int u_int ;
struct fbcmap {int blue; int green; int red; int count; int index; } ;
typedef int off_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_20__ {int (* ioctl ) (TYPE_4__*,int,scalar_t__) ;} ;


 int VAR_0 ;







 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ,int ,int ,int *) ;
 TYPE_18__* VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ,int ,int ,int *) ;
 int FUNC_4 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_6 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_8 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_9 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_10 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_11 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_12 (TYPE_4__*,int,scalar_t__) ;
 TYPE_4__* VAR_2 ;
 int FUNC_13 (int ,int*,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_4__*,int ) ;

__attribute__((used)) static int
FUNC_16(video_adapter_t *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 int VAR_6;

 if (VAR_3 != VAR_2)
  return ((*VAR_1->ioctl)(VAR_3, VAR_4, VAR_5));

 switch (VAR_4) {
 case 128:
  if (!FUNC_0(VAR_3->va_mode))
   return (*VAR_1->ioctl)(VAR_3, VAR_4, VAR_5);
  return (FUNC_15(VAR_3, *(off_t *)VAR_5) ? VAR_0 : 0);

 case 131:
  if (!FUNC_0(VAR_3->va_mode))
   return ((*VAR_1->ioctl)(VAR_3, VAR_4, VAR_5));
  if (FUNC_14(((video_display_start_t *)VAR_5)->x,
     ((video_display_start_t *)VAR_5)->y))
   return (VAR_0);
  VAR_3->va_disp_start.x = ((video_display_start_t *)VAR_5)->x;
  VAR_3->va_disp_start.y = ((video_display_start_t *)VAR_5)->y;
  return (0);

 case 130:
  if (!FUNC_0(VAR_3->va_mode))
   return ((*VAR_1->ioctl)(VAR_3, VAR_4, VAR_5));
  if (FUNC_13(*(u_int *)VAR_5, &VAR_6, ((void*)0)))
   return (VAR_0);
  VAR_3->va_line_width = VAR_6;



  return (0);

 case 132:
  if (FUNC_1(VAR_3, ((video_color_palette_t *)VAR_5)->index,
    ((video_color_palette_t *)VAR_5)->count,
    ((video_color_palette_t *)VAR_5)->red,
    ((video_color_palette_t *)VAR_5)->green,
    ((video_color_palette_t *)VAR_5)->blue,
    ((video_color_palette_t *)VAR_5)->transparent))
   return ((*VAR_1->ioctl)(VAR_3, VAR_4, VAR_5));
  return (0);


 case 129:
  if (FUNC_3(VAR_3, ((video_color_palette_t *)VAR_5)->index,
    ((video_color_palette_t *)VAR_5)->count,
    ((video_color_palette_t *)VAR_5)->red,
    ((video_color_palette_t *)VAR_5)->green,
    ((video_color_palette_t *)VAR_5)->blue,
    ((video_color_palette_t *)VAR_5)->transparent))
   return ((*VAR_1->ioctl)(VAR_3, VAR_4, VAR_5));
  return (0);

 case 134:
  if (FUNC_1(VAR_3, ((struct fbcmap *)VAR_5)->index,
    ((struct fbcmap *)VAR_5)->count,
    ((struct fbcmap *)VAR_5)->red,
    ((struct fbcmap *)VAR_5)->green,
    ((struct fbcmap *)VAR_5)->blue, ((void*)0)))
   return ((*VAR_1->ioctl)(VAR_3, VAR_4, VAR_5));
  return (0);

 case 133:
  if (FUNC_3(VAR_3, ((struct fbcmap *)VAR_5)->index,
    ((struct fbcmap *)VAR_5)->count,
    ((struct fbcmap *)VAR_5)->red,
    ((struct fbcmap *)VAR_5)->green,
    ((struct fbcmap *)VAR_5)->blue, ((void*)0)))
   return ((*VAR_1->ioctl)(VAR_3, VAR_4, VAR_5));
  return (0);

 default:
  return ((*VAR_1->ioctl)(VAR_3, VAR_4, VAR_5));
 }
}
