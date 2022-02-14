
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dc_nsets; int dc_linesize; scalar_t__ dc_nways; int dc_size; } ;
struct TYPE_3__ {int ic_nsets; int ic_linesize; int ic_nways; int dc_nsets; int dc_linesize; int dc_nways; int dc_size; int ic_size; } ;
struct mips_cpuinfo {scalar_t__ icache_virtual; TYPE_2__ l2; TYPE_1__ l1; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;

void
FUNC_2(struct mips_cpuinfo * VAR_17)
{
 int VAR_18;

 VAR_18 = VAR_17->l1.ic_nsets * VAR_17->l1.ic_linesize * VAR_17->l1.ic_linesize > VAR_0;
 if (VAR_17->icache_virtual) {





  VAR_18 = 0;
 }

 if (VAR_18) {
  VAR_11 = VAR_0;
  VAR_9 = (VAR_17->l1.ic_nsets * VAR_17->l1.ic_linesize / VAR_0) *
      VAR_17->l1.ic_nways;
 } else {
  VAR_11 = VAR_17->l1.ic_nsets * VAR_17->l1.ic_linesize;
  VAR_9 = VAR_17->l1.ic_nways;
 }

 if (VAR_17->l1.dc_nsets * VAR_17->l1.dc_linesize < VAR_0) {
  VAR_7 = VAR_17->l1.dc_nsets * VAR_17->l1.dc_linesize;
  VAR_5 = VAR_17->l1.dc_nways;
 } else {
  VAR_7 = VAR_0;
  VAR_5 = (VAR_17->l1.dc_nsets * VAR_17->l1.dc_linesize / VAR_0) *
      VAR_17->l1.dc_nways;
 }

 VAR_3 = VAR_17->l1.ic_linesize;
 VAR_2 = VAR_17->l1.dc_linesize;

 VAR_10 = VAR_17->l1.ic_size;
 VAR_12 = VAR_17->l1.ic_nways - 1;
 VAR_6 = VAR_17->l1.dc_size;
 VAR_8 = VAR_17->l1.dc_nways - 1;

 VAR_15 = VAR_17->l2.dc_nsets * VAR_17->l2.dc_linesize;
 VAR_13 = VAR_17->l2.dc_nways;
 VAR_14 = VAR_17->l2.dc_size;
 VAR_16 = VAR_17->l2.dc_nways - 1;

 VAR_4 = VAR_17->l2.dc_linesize;
 VAR_1 = FUNC_0(VAR_2,
     VAR_4);



 FUNC_1("Cache info:\n");
 if (VAR_17->icache_virtual)
  FUNC_1("  icache is virtual\n");
 FUNC_1("  picache_stride    = %d\n", VAR_11);
 FUNC_1("  picache_loopcount = %d\n", VAR_9);
 FUNC_1("  pdcache_stride    = %d\n", VAR_7);
 FUNC_1("  pdcache_loopcount = %d\n", VAR_5);
 FUNC_1("  max line size     = %d\n", VAR_1);

}
