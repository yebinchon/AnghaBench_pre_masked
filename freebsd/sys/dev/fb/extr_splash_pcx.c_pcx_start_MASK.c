
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vi_width; int vi_height; int vi_depth; int vi_planes; } ;
typedef TYPE_1__ video_info_t ;
typedef int video_adapter_t ;
struct TYPE_7__ {scalar_t__ data_size; int * data; } ;
struct TYPE_6__ {int width; int height; int bpp; int planes; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_5)
{
 static int VAR_6[] = {
  128,
  130,
  129,
  131,
  -1,
 };
 video_info_t VAR_7;
 int VAR_8;

 if (VAR_2.data == ((void*)0) ||
     VAR_2.data_size <= 0 ||
     FUNC_0(VAR_2.data, VAR_2.data_size))
  return (VAR_0);

 if (VAR_1)
  FUNC_1("splash_pcx: image good:\n"
      "  width = %d\n"
      "  height = %d\n"
      "  depth = %d\n"
      "  planes = %d\n",
      VAR_3.width, VAR_3.height,
      VAR_3.bpp, VAR_3.planes);

 for (VAR_8 = 0; VAR_6[VAR_8] >= 0; ++VAR_8) {
  if (FUNC_2(VAR_5, VAR_6[VAR_8], &VAR_7) != 0)
   continue;
  if (VAR_1)
   FUNC_1("splash_pcx: considering mode %d:\n"
       "  vi_width = %d\n"
       "  vi_height = %d\n"
       "  vi_depth = %d\n"
       "  vi_planes = %d\n",
       VAR_6[VAR_8],
       VAR_7.vi_width, VAR_7.vi_height,
       VAR_7.vi_depth, VAR_7.vi_planes);
  if (VAR_7.vi_width >= VAR_3.width
      && VAR_7.vi_height >= VAR_3.height
      && VAR_7.vi_depth == VAR_3.bpp
      && VAR_7.vi_planes == VAR_3.planes)
   break;
 }

 VAR_4 = VAR_6[VAR_8];
 if (VAR_4 == -1)
  return (VAR_0);
 if (VAR_1)
  FUNC_1("splash_pcx: selecting mode %d\n", VAR_4);
 return (0);
}
