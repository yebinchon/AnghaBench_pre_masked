
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_6__ {scalar_t__ va_type; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,uintptr_t,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*,int*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(video_adapter_t *VAR_8, int VAR_9, int VAR_10, int VAR_11,
       u_char *VAR_12, int VAR_13, int VAR_14)
{

    u_char VAR_15[VAR_4];
    vm_offset_t VAR_16;
    int VAR_17;





    FUNC_3(VAR_8, VAR_7, VAR_1);

    if (VAR_10 < 14) {

 VAR_10 = 8;
    } else if (VAR_10 >= 32) {
 VAR_10 = 32;
    } else if (VAR_10 >= 16) {

 VAR_10 = 16;
    } else {

 VAR_10 = 14;
    }

    if (VAR_9 < 0 || VAR_9 >= 8 || VAR_11 != 8)
 return VAR_0;
    VAR_16 = VAR_2 + 0x4000*VAR_9;
    if (VAR_9 > 3)
 VAR_16 -= 0xe000;
    FUNC_4(VAR_8, VAR_15);
    if (VAR_10 == 32) {
 FUNC_0(VAR_12, (uintptr_t)VAR_16 + VAR_13*32, VAR_10*VAR_14);
    } else {
 for (VAR_17 = VAR_13; VAR_14 > 0; ++VAR_17, --VAR_14) {
     FUNC_0(VAR_12, (uintptr_t)VAR_16 + VAR_17*32, VAR_10);
     VAR_12 += VAR_10;
 }
    }
    FUNC_5(VAR_8, VAR_15);
    return 0;



}
