
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct aw_sid_softc {int prctl_mtx; TYPE_2__* sid_conf; } ;
typedef enum aw_sid_fuse_id { ____Placeholder_aw_sid_fuse_id } aw_sid_fuse_id ;
struct TYPE_4__ {int nfuses; TYPE_1__* efuses; } ;
struct TYPE_3__ {int id; int size; int public; scalar_t__ offset; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aw_sid_softc*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct aw_sid_softc*,scalar_t__,int) ;
 struct aw_sid_softc* VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(enum aw_sid_fuse_id VAR_8, uint8_t *VAR_9, uint32_t *VAR_10)
{
 struct aw_sid_softc *VAR_11;
 uint32_t VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = VAR_7;
 if (VAR_11 == ((void*)0))
  return (VAR_2);

 for (VAR_13 = 0; VAR_13 < VAR_11->sid_conf->nfuses; VAR_13++)
  if (VAR_8 == VAR_11->sid_conf->efuses[VAR_13].id)
   break;

 if (VAR_13 == VAR_11->sid_conf->nfuses)
  return (VAR_0);

 if (*VAR_10 != VAR_11->sid_conf->efuses[VAR_13].size) {
  *VAR_10 = VAR_11->sid_conf->efuses[VAR_13].size;
  return (VAR_1);
 }

 if (VAR_9 == ((void*)0))
  return (VAR_1);

 if (VAR_11->sid_conf->efuses[VAR_13].public == 0)
  FUNC_3(&VAR_11->prctl_mtx);
 for (VAR_14 = 0; VAR_14 < VAR_11->sid_conf->efuses[VAR_13].size; VAR_14 += 4) {
  if (VAR_11->sid_conf->efuses[VAR_13].public == 0) {
   VAR_12 = FUNC_1(VAR_11->sid_conf->efuses[VAR_13].offset + VAR_14) |
    VAR_4 |
    VAR_5;
   FUNC_2(VAR_11, VAR_3, VAR_12);

   while (FUNC_0(VAR_11, VAR_3) & VAR_5)
    continue;
   VAR_12 = FUNC_0(VAR_11, VAR_6);
  } else
   VAR_12 = FUNC_0(VAR_11, VAR_11->sid_conf->efuses[VAR_13].base +
       VAR_11->sid_conf->efuses[VAR_13].offset + VAR_14);
  VAR_9[VAR_14] = VAR_12 & 0xFF;
  if (VAR_14 + 1 < *VAR_10)
   VAR_9[VAR_14 + 1] = (VAR_12 & 0xFF00) >> 8;
  if (VAR_14 + 2 < *VAR_10)
   VAR_9[VAR_14 + 2] = (VAR_12 & 0xFF0000) >> 16;
  if (VAR_14 + 3 < *VAR_10)
   VAR_9[VAR_14 + 3] = (VAR_12 & 0xFF000000) >> 24;
 }
 if (VAR_11->sid_conf->efuses[VAR_13].public == 0)
  FUNC_4(&VAR_11->prctl_mtx);

 return (0);
}
