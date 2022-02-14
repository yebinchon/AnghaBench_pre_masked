
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct bhnd_dma_translation {int addr_mask; int addrext_mask; } ;
typedef int device_t ;
typedef int bus_size_t ;
typedef int bus_dma_tag_t ;
typedef int bus_addr_t ;
typedef int bhnd_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int ,int ,int ,int *,int *,int,int ,int,int ,int *,int *,int *) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, bus_dma_tag_t VAR_3,
    const struct bhnd_dma_translation *VAR_4, bus_dma_tag_t *VAR_5)
{
 bus_dma_tag_t VAR_6;
 bhnd_addr_t VAR_7;
 bus_addr_t VAR_8, VAR_9;
 bus_size_t VAR_10;
 int VAR_11;

 VAR_9 = VAR_0;
 VAR_10 = VAR_1;


 VAR_7 = (VAR_4->addr_mask | VAR_4->addrext_mask);
 FUNC_0(VAR_7 != 0, ("DMA addr_mask invalid: %#jx",
  (uintmax_t)VAR_7));


 VAR_8 = FUNC_1(VAR_7, VAR_0);


 if (VAR_4->addr_mask < VAR_10)
  VAR_10 = VAR_4->addr_mask;


 VAR_11 = FUNC_2(VAR_3,
     1, 0,
     VAR_8, VAR_9,
     ((void*)0), ((void*)0),
     VAR_1, 0,
     VAR_10, 0,
     ((void*)0), ((void*)0),
     &VAR_6);
 if (VAR_11) {
  FUNC_3(VAR_2, "failed to create bridge DMA tag: %d\n",
      VAR_11);
  return (VAR_11);
 }

 *VAR_5 = VAR_6;
 return (0);
}
