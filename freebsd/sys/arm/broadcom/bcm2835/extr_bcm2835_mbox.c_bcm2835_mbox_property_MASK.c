
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef void msg_set_power_state ;
struct bcm_mbox_softc {int property_chan_lock; } ;
struct bcm2835_mbox_hdr {int dummy; } ;
typedef int * device_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,struct bcm2835_mbox_hdr*,size_t) ;
 void* FUNC_3 (int *,size_t,int *,int *,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,void*,int ) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int ,int ) ;
 struct bcm_mbox_softc* FUNC_10 (int *) ;
 int FUNC_11 (void*,void*,size_t) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int
FUNC_14(void *VAR_5, size_t VAR_6)
{
 struct bcm_mbox_softc *VAR_7;
 struct msg_set_power_state *VAR_8;
 bus_dma_tag_t VAR_9;
 bus_dmamap_t VAR_10;
 bus_addr_t VAR_11;
 uint32_t VAR_12;
 device_t VAR_13;
 int VAR_14;


 VAR_13 = FUNC_9(FUNC_8("mbox"), 0);
 if (VAR_13 == ((void*)0))
  return (VAR_4);

 VAR_7 = FUNC_10(VAR_13);
 FUNC_12(&VAR_7->property_chan_lock);


 VAR_8 = FUNC_3(VAR_13, VAR_6, &VAR_9, &VAR_10,
     &VAR_11);
 if (VAR_8 == ((void*)0)) {
  VAR_14 = VAR_3;
  goto out;
 }

 FUNC_11(VAR_8, VAR_5, VAR_6);

 FUNC_5(VAR_9, VAR_10,
     VAR_2);

 FUNC_1(VAR_13, VAR_0, (uint32_t)VAR_11);
 FUNC_0(VAR_13, VAR_0, &VAR_12);

 FUNC_5(VAR_9, VAR_10,
     VAR_1);

 FUNC_11(VAR_5, VAR_8, VAR_6);

 VAR_14 = FUNC_2(VAR_13, VAR_11, VAR_12,
     (struct bcm2835_mbox_hdr *)VAR_5, VAR_6);

 FUNC_6(VAR_9, VAR_10);
 FUNC_7(VAR_9, VAR_8, VAR_10);
 FUNC_4(VAR_9);
out:
 FUNC_13(&VAR_7->property_chan_lock);
 return (VAR_14);
}
