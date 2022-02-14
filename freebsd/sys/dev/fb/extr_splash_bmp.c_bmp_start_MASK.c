
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vi_depth; int vi_height; int vi_width; } ;
typedef TYPE_1__ video_info_t ;
typedef int video_adapter_t ;
typedef int u_char ;
struct TYPE_5__ {scalar_t__ data_size; int * data; } ;


 int VAR_0 ;





 scalar_t__ FUNC_0 (int *,int ,int ,int ) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_4)
{

    static int VAR_5[] = {
   130,
   129,
   131,
   132,




   128,
   -1,
    };
    video_info_t VAR_6;
    int VAR_7;

    if ((VAR_1.data == ((void*)0)) || (VAR_1.data_size <= 0)) {
 FUNC_1("splash_bmp: No bitmap file found\n");
 return VAR_0;
    }
    for (VAR_7 = 0; VAR_5[VAR_7] >= 0; ++VAR_7) {
 if ((FUNC_2(VAR_4, VAR_5[VAR_7], &VAR_6) == 0) &&
     (FUNC_0((u_char *)VAR_1.data, VAR_6.vi_width,
        VAR_6.vi_height, VAR_6.vi_depth) == 0))
     break;
    }
    VAR_3 = VAR_5[VAR_7];
    if (VAR_3 < 0)
 FUNC_1("splash_bmp: No appropriate video mode found\n");
    if (VAR_2)
 FUNC_1("bmp_start(): splash_mode:%d\n", VAR_3);
    return ((VAR_3 < 0) ? VAR_0 : 0);
}
