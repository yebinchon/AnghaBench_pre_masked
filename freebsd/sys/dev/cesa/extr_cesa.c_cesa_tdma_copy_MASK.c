
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cesa_tdma_desc {TYPE_1__* ctd_cthd; } ;
struct cesa_softc {int dummy; } ;
typedef scalar_t__ bus_size_t ;
typedef void* bus_addr_t ;
struct TYPE_2__ {scalar_t__ cthd_flags; scalar_t__ cthd_byte_count; void* cthd_src; void* cthd_dst; } ;


 scalar_t__ VAR_0 ;
 struct cesa_tdma_desc* FUNC_0 (struct cesa_softc*) ;

__attribute__((used)) static struct cesa_tdma_desc *
FUNC_1(struct cesa_softc *VAR_1, bus_addr_t VAR_2, bus_addr_t VAR_3,
    bus_size_t VAR_4)
{
 struct cesa_tdma_desc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if (!VAR_5)
  return (((void*)0));

 VAR_5->ctd_cthd->cthd_dst = VAR_2;
 VAR_5->ctd_cthd->cthd_src = VAR_3;
 VAR_5->ctd_cthd->cthd_byte_count = VAR_4;


 if (VAR_4 != 0)
  VAR_5->ctd_cthd->cthd_flags = VAR_0;
 else
  VAR_5->ctd_cthd->cthd_flags = 0;

 return (VAR_5);
}
