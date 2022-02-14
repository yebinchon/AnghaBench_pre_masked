
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vi_mem_model; } ;
struct TYPE_8__ {TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;






 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_0)
{
    switch (VAR_0->va_info.vi_mem_model) {
    case 128:

 break;
    case 129:
 FUNC_2(VAR_0, 0);
 break;
    case 130:
 FUNC_1(VAR_0, 0);
 break;
    case 131:
 FUNC_0(VAR_0, 0);
 break;
    }
    return 0;
}
