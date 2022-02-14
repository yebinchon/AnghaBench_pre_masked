
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct aw_sid_softc {TYPE_2__* sid_conf; } ;
typedef enum aw_sid_fuse_id { ____Placeholder_aw_sid_fuse_id } aw_sid_fuse_id ;
typedef int device_t ;
struct TYPE_4__ {int nfuses; TYPE_1__* efuses; } ;
struct TYPE_3__ {scalar_t__ base; scalar_t__ offset; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *,scalar_t__*) ;
 struct aw_sid_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint8_t *VAR_4)
{
 struct aw_sid_softc *VAR_5;
 enum aw_sid_fuse_id VAR_6 = 0;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_5->sid_conf->nfuses; VAR_7++)
  if (VAR_2 == (VAR_5->sid_conf->efuses[VAR_7].base +
      VAR_5->sid_conf->efuses[VAR_7].offset)) {
   VAR_6 = VAR_5->sid_conf->efuses[VAR_7].id;
   break;
  }

 if (VAR_6 == 0)
  return (VAR_0);

 return (FUNC_0(VAR_6, VAR_4, &VAR_3));
}
