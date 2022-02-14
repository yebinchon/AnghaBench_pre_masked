
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sec_softc {int dummy; } ;
struct sec_lt {TYPE_1__* sl_lt; } ;
struct sec_desc_map_info {scalar_t__ sdmi_offset; scalar_t__ sdmi_size; int sdmi_lt_used; struct sec_lt* sdmi_lt_last; struct sec_lt* sdmi_lt_first; struct sec_softc* sdmi_sc; } ;
typedef scalar_t__ bus_size_t ;
struct TYPE_5__ {scalar_t__ ds_len; int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_4__ {int shl_ptr; scalar_t__ shl_n; scalar_t__ shl_r; scalar_t__ shl_length; } ;


 struct sec_lt* FUNC_0 (struct sec_softc*) ;
 int FUNC_1 (struct sec_softc*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3,
    int VAR_4)
{
 struct sec_desc_map_info *VAR_5 = VAR_1;
 struct sec_softc *VAR_6 = VAR_5->sdmi_sc;
 struct sec_lt *VAR_7 = ((void*)0);
 bus_addr_t VAR_8;
 bus_size_t VAR_9;
 int VAR_10;

 FUNC_1(VAR_6, VAR_0);

 if (VAR_4)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_8 = VAR_2[VAR_10].ds_addr;
  VAR_9 = VAR_2[VAR_10].ds_len;


  if (VAR_5->sdmi_offset >= VAR_9) {
   VAR_5->sdmi_offset -= VAR_9;
   continue;
  }

  VAR_8 += VAR_5->sdmi_offset;
  VAR_9 -= VAR_5->sdmi_offset;
  VAR_5->sdmi_offset = 0;


  if (VAR_5->sdmi_size < VAR_9)
   VAR_9 = VAR_5->sdmi_size;

  VAR_7 = FUNC_0(VAR_6);
  VAR_7->sl_lt->shl_length = VAR_9;
  VAR_7->sl_lt->shl_r = 0;
  VAR_7->sl_lt->shl_n = 0;
  VAR_7->sl_lt->shl_ptr = VAR_8;

  if (VAR_5->sdmi_lt_first == ((void*)0))
   VAR_5->sdmi_lt_first = VAR_7;

  VAR_5->sdmi_lt_used += 1;

  if ((VAR_5->sdmi_size -= VAR_9) == 0)
   break;
 }

 VAR_5->sdmi_lt_last = VAR_7;
}
