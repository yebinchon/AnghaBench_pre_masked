
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int lo; int hi; } ;
struct firewire_comm {TYPE_5__* crom_src_buf; int * crom_root; struct crom_src* crom_src; TYPE_4__ eui; int speed; int maxrec; } ;
struct TYPE_7__ {int lo; int hi; } ;
struct TYPE_8__ {int irmc; int cmc; int isc; int bmc; int cyc_clk_acc; TYPE_2__ eui64; int link_spd; int generation; int max_rom; int max_rec; scalar_t__ pmc; int bus_name; } ;
struct TYPE_6__ {int info_len; } ;
struct crom_src {int chunk_list; TYPE_3__ businfo; TYPE_1__ hdr; } ;
struct TYPE_10__ {int root; struct crom_src src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct crom_src*,int) ;

__attribute__((used)) static void
FUNC_2(struct firewire_comm *VAR_3)
{
 struct crom_src *VAR_4;

 VAR_4 = &VAR_3->crom_src_buf->src;
 FUNC_1(VAR_4, sizeof(struct crom_src));


 VAR_4->hdr.info_len = 4;

 VAR_4->businfo.bus_name = VAR_0;

 VAR_4->businfo.irmc = 1;
 VAR_4->businfo.cmc = 1;
 VAR_4->businfo.isc = 1;
 VAR_4->businfo.bmc = 1;
 VAR_4->businfo.pmc = 0;
 VAR_4->businfo.cyc_clk_acc = 100;
 VAR_4->businfo.max_rec = VAR_3->maxrec;
 VAR_4->businfo.max_rom = VAR_2;

 VAR_4->businfo.generation = 2;
 VAR_4->businfo.link_spd = VAR_3->speed;

 VAR_4->businfo.eui64.hi = VAR_3->eui.hi;
 VAR_4->businfo.eui64.lo = VAR_3->eui.lo;

 FUNC_0(&VAR_4->chunk_list);

 VAR_3->crom_src = VAR_4;
 VAR_3->crom_root = &VAR_3->crom_src_buf->root;
}
