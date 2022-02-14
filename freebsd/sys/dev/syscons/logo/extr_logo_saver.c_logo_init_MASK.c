
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vi_height; int vi_width; } ;
typedef TYPE_1__ video_info_t ;
typedef int video_adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_8)
{
 video_info_t VAR_9;

 if (!FUNC_1(VAR_8, VAR_2, &VAR_9)) {
  VAR_6 = VAR_2;
 } else if (!FUNC_1(VAR_8, VAR_3, &VAR_9)) {
  VAR_6 = VAR_3;
 } else {
  FUNC_0(VAR_1,
      "%s: the console does not support M_VGA_CG320\n",
      VAR_4);
  return (VAR_0);
 }

 VAR_7 = VAR_9.vi_width;
 VAR_5 = VAR_9.vi_height;

 return (0);
}
