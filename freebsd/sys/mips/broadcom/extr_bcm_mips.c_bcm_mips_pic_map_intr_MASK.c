
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intr_map_data {scalar_t__ type; } ;
struct intr_irqsrc {int dummy; } ;
struct bcm_mips_softc {TYPE_1__* isrcs; } ;
struct bcm_mips_intr_map_data {size_t ivec; } ;
typedef int device_t ;
struct TYPE_2__ {struct intr_irqsrc isrc; } ;


 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bcm_mips_softc* FUNC_1 (int ) ;
 size_t FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, struct intr_map_data *VAR_4,
    struct intr_irqsrc **VAR_5)
{
 struct bcm_mips_softc *VAR_6;
 struct bcm_mips_intr_map_data *VAR_7;

 VAR_6 = FUNC_1(VAR_3);

 if (VAR_4->type != VAR_2) {
  FUNC_0(VAR_3, "type=%d", VAR_4->type);
  return (VAR_1);
 }

 VAR_7 = (struct bcm_mips_intr_map_data *)VAR_4;
 FUNC_0(VAR_3, "type=%d, ivec=%u", VAR_4->type, VAR_7->ivec);
 if (VAR_7->ivec < 0 || VAR_7->ivec >= FUNC_2(VAR_6->isrcs))
  return (VAR_0);

 *VAR_5 = &VAR_6->isrcs[VAR_7->ivec].isrc;
 return (0);
}
