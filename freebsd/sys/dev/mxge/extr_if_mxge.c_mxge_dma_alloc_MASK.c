
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent_dmat; int dev; } ;
typedef TYPE_1__ mxge_softc_t ;
struct TYPE_6__ {int dmat; int map; int addr; int bus_addr; } ;
typedef TYPE_2__ mxge_dma_t ;
typedef int device_t ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int ,int ,int *,int *,size_t,int,int,int,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,size_t,int ,void*,int ) ;
 int FUNC_3 (int ,int *,int,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(mxge_softc_t *VAR_5, mxge_dma_t *VAR_6, size_t VAR_7,
     bus_size_t VAR_8)
{
 int VAR_9;
 device_t VAR_10 = VAR_5->dev;
 bus_size_t VAR_11, VAR_12;

 if (VAR_7 > 4096 && VAR_8 == 4096) {
  VAR_11 = 0;
  VAR_12 = VAR_7;
 } else {
  VAR_11 = 4096;
  VAR_12 = 4096;
 }


 VAR_9 = FUNC_0(VAR_5->parent_dmat,
     VAR_8,
     VAR_11,
     VAR_3,
     VAR_3,
     ((void*)0), ((void*)0),
     VAR_7,
     1,
     VAR_12,
     VAR_0,
     ((void*)0), ((void*)0),
     &VAR_6->dmat);
 if (VAR_9 != 0) {
  FUNC_5(VAR_10, "couldn't alloc tag (err = %d)\n", VAR_9);
  return VAR_9;
 }


 VAR_9 = FUNC_3(VAR_6->dmat, &VAR_6->addr,
          (VAR_1 | VAR_0
    | VAR_2), &VAR_6->map);
 if (VAR_9 != 0) {
  FUNC_5(VAR_10, "couldn't alloc mem (err = %d)\n", VAR_9);
  goto abort_with_dmat;
 }


 VAR_9 = FUNC_2(VAR_6->dmat, VAR_6->map, VAR_6->addr, VAR_7,
         VAR_4,
         (void *)&VAR_6->bus_addr, 0);
 if (VAR_9 != 0) {
  FUNC_5(VAR_10, "couldn't load map (err = %d)\n", VAR_9);
  goto abort_with_mem;
 }
 return 0;

abort_with_mem:
 FUNC_4(VAR_6->dmat, VAR_6->addr, VAR_6->map);
abort_with_dmat:
 (void)FUNC_1(VAR_6->dmat);
 return VAR_9;
}
