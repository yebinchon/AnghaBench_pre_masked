
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vi_height; int vi_width; } ;
typedef TYPE_1__ video_info_t ;
typedef int video_adapter_t ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_10)
{
 video_info_t VAR_11;
 int VAR_12;

 if (!FUNC_2(VAR_10, VAR_4, &VAR_11)) {
  VAR_8 = VAR_4;
 } else {
  FUNC_1(VAR_2,
      "%s: the console does not support M_VGA_CG320\n",
      VAR_5);
  return (VAR_0);
 }

 VAR_9 = VAR_11.vi_width;
 VAR_7 = VAR_11.vi_height;


 for (VAR_12 = 1; VAR_12 < VAR_3; VAR_12++)
  VAR_6[FUNC_0(VAR_12)] = VAR_6[FUNC_0(VAR_12 - 1)] + VAR_1;

 return (0);
}
