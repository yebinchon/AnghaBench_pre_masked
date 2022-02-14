
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {TYPE_2__* fc; void* post_busreset; int * post_explore; int dev; } ;
struct dcons_crom_softc {int ehand; int dma_map; int dma_tag; TYPE_1__ fd; } ;
typedef int device_t ;
struct TYPE_6__ {int size; int * buf; } ;
struct TYPE_5__ {int dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,void*,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,void*,int ,int ,struct dcons_crom_softc*,int ) ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_12)
{
 struct dcons_crom_softc *VAR_13;
 int VAR_14;

 if (VAR_7->buf == ((void*)0))
  return (VAR_4);
        VAR_13 = (struct dcons_crom_softc *) FUNC_5(VAR_12);
 VAR_13->fd.fc = FUNC_4(VAR_12);
 VAR_13->fd.dev = VAR_12;
 VAR_13->fd.post_explore = ((void*)0);
 VAR_13->fd.post_busreset = (void *) VAR_9;


 VAR_14 = FUNC_1(
             VAR_13->fd.fc->dmat,
                sizeof(u_int32_t),
               0,
              VAR_2,
               VAR_2,
            ((void*)0), ((void*)0),
              VAR_7->size,
                1,
               VAR_3,
            VAR_0,
              VAR_6,
             &VAR_5,
  &VAR_13->dma_tag);
 if (VAR_14 != 0)
  return (VAR_14);
 VAR_14 = FUNC_2(VAR_13->dma_tag, VAR_1, &VAR_13->dma_map);
 if (VAR_14 != 0)
  return (VAR_14);
 VAR_14 = FUNC_3(VAR_13->dma_tag, VAR_13->dma_map,
     (void *)VAR_7->buf, VAR_7->size,
     VAR_11, VAR_13, 0);
 if (VAR_14 != 0)
  return (VAR_14);
 VAR_13->ehand = FUNC_0(VAR_10, VAR_8,
    (void *)VAR_13, 0);
 return (0);
}
