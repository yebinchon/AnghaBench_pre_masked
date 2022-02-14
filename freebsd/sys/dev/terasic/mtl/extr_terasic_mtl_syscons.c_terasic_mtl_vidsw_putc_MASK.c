
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_4__ {int vi_width; } ;
struct TYPE_5__ {TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int uint8_t ;
typedef int u_int ;
struct terasic_mtl_softc {int dummy; } ;


 int FUNC_0 (struct terasic_mtl_softc*,int,int,int ,int ) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_0, vm_offset_t VAR_1, uint8_t VAR_2,
    uint8_t VAR_3)
{
 struct terasic_mtl_softc *VAR_4;
 u_int VAR_5, VAR_6;

 VAR_4 = (struct terasic_mtl_softc *)VAR_0;
 VAR_5 = (VAR_1 % VAR_0->va_info.vi_width);
 VAR_6 = (VAR_1 / VAR_0->va_info.vi_width);
 FUNC_0(VAR_4, VAR_5, VAR_6, VAR_2, VAR_3);
 return (0);
}
