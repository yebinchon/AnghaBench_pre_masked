
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cesa_tdma_desc {int dummy; } ;
struct cesa_softc {scalar_t__ sc_sram_base_pa; } ;
struct cesa_packet {scalar_t__ cp_offset; int cp_copyout; int cp_copyin; scalar_t__ cp_size; } ;
struct TYPE_3__ {unsigned int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *,struct cesa_tdma_desc*,int ) ;
 struct cesa_tdma_desc* FUNC_3 (struct cesa_softc*,scalar_t__,scalar_t__,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct cesa_softc *VAR_2, struct cesa_packet *VAR_3,
    bus_dma_segment_t *VAR_4)
{
 struct cesa_tdma_desc *VAR_5;
 unsigned int VAR_6;


 VAR_6 = FUNC_1(VAR_4->ds_len, VAR_3->cp_size - VAR_3->cp_offset);

 if (VAR_6 > 0) {
  VAR_5 = FUNC_3(VAR_2, VAR_2->sc_sram_base_pa +
      FUNC_0(VAR_3->cp_offset), VAR_4->ds_addr, VAR_6);
  if (!VAR_5)
   return (-VAR_0);

  FUNC_2(&VAR_3->cp_copyin, VAR_5, VAR_1);

  VAR_5 = FUNC_3(VAR_2, VAR_4->ds_addr, VAR_2->sc_sram_base_pa +
      FUNC_0(VAR_3->cp_offset), VAR_6);
  if (!VAR_5)
   return (-VAR_0);

  FUNC_2(&VAR_3->cp_copyout, VAR_5, VAR_1);

  VAR_4->ds_len -= VAR_6;
  VAR_4->ds_addr += VAR_6;
  VAR_3->cp_offset += VAR_6;
 }

 return (VAR_6);
}
