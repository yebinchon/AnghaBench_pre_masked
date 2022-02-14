
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vi_width; int vi_height; } ;
typedef TYPE_1__ video_info_t ;
typedef int video_adapter_t ;
typedef int u_char ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (int *,int) ;
 int* VAR_7 ;
 int FUNC_4 (int ,char*,int ) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(video_adapter_t *VAR_11)
{
 video_info_t VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 if (!FUNC_6(VAR_11, VAR_4, &VAR_12)) {
  VAR_9 = VAR_4;
 } else {
  FUNC_4(VAR_1,
      "%s: the console does not support M_VGA_CG320\n",
      VAR_5);
  return (VAR_0);
 }

 VAR_10 = VAR_12.vi_width;
 VAR_8 = VAR_12.vi_height;

 VAR_6 = (u_char *)FUNC_5(VAR_10 * (VAR_8 + 1), VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_3(VAR_6, VAR_10 * (VAR_8 + 1));
 } else {
  FUNC_4(VAR_1,
      "%s: buffer allocation is failed\n",
      VAR_5);
  return (VAR_0);
 }


 VAR_14 = VAR_15 = VAR_16 = 0;
 for (VAR_13 = 0; VAR_13 < 256; VAR_13++) {
  VAR_14++;
  if (VAR_14 > 128)
   VAR_15 += 2;
  VAR_7[FUNC_2(VAR_13)] = VAR_14;
  VAR_7[FUNC_1(VAR_13)] = VAR_15;
  VAR_7[FUNC_0(VAR_13)] = VAR_16;
 }

 return (0);
}
