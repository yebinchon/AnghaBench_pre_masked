
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoa_softc {struct aoa_dma* sc_intrp; int sc_dev; } ;
struct aoa_dma {int mutex; int blksz; int bufsz; int tag; } ;
typedef int device_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 struct aoa_dma* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;

__attribute__((used)) static struct aoa_dma *
FUNC_4(struct aoa_softc *VAR_8)
{
 struct aoa_dma *VAR_9;
 bus_dma_tag_t VAR_10;
 int VAR_11;
 device_t VAR_12;

 VAR_12 = VAR_8->sc_dev;
 VAR_11 = FUNC_0(FUNC_1(VAR_12),
     4, 0, VAR_2, VAR_1, ((void*)0), ((void*)0),
     VAR_0, 1, VAR_0, 0, ((void*)0), ((void*)0), &VAR_10);
 if (VAR_11 != 0)
  return (((void*)0));

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_4, VAR_5 | VAR_6);
 VAR_9->tag = VAR_10;
 VAR_9->bufsz = VAR_0;
 VAR_9->blksz = VAR_7;

 FUNC_3(&VAR_9->mutex, "AOA", ((void*)0), VAR_3);

 VAR_8->sc_intrp = VAR_9;

 return (VAR_9);
}
