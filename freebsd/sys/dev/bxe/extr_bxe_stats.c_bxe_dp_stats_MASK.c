
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bxe_softc {TYPE_5__* fw_stats_req; } ;
struct TYPE_6__ {int lo; int hi; } ;
struct TYPE_7__ {int cmd_num; TYPE_1__ stats_counters_addrs; int reserved1; int drv_stats_counter; int reserved0; } ;
struct TYPE_10__ {TYPE_4__* query; TYPE_2__ hdr; } ;
struct TYPE_8__ {int lo; int hi; } ;
struct TYPE_9__ {TYPE_3__ address; int reserved; int funcID; int index; int kind; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,int ,int ,int ,int ,int ,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct bxe_softc *VAR_1)
{
    int VAR_2;

    FUNC_0(VAR_1, VAR_0,
          "dumping stats:\n"
          "  fw_stats_req\n"
          "    hdr\n"
          "      cmd_num %d\n"
          "      reserved0 %d\n"
          "      drv_stats_counter %d\n"
          "      reserved1 %d\n"
          "      stats_counters_addrs %x %x\n",
          VAR_1->fw_stats_req->hdr.cmd_num,
          VAR_1->fw_stats_req->hdr.reserved0,
          VAR_1->fw_stats_req->hdr.drv_stats_counter,
          VAR_1->fw_stats_req->hdr.reserved1,
          VAR_1->fw_stats_req->hdr.stats_counters_addrs.hi,
          VAR_1->fw_stats_req->hdr.stats_counters_addrs.lo);

    for (VAR_2 = 0; VAR_2 < VAR_1->fw_stats_req->hdr.cmd_num; VAR_2++) {
        FUNC_0(VAR_1, VAR_0,
              "query[%d]\n"
              "  kind %d\n"
              "  index %d\n"
              "  funcID %d\n"
              "  reserved %d\n"
              "  address %x %x\n",
              VAR_2,
              VAR_1->fw_stats_req->query[VAR_2].kind,
              VAR_1->fw_stats_req->query[VAR_2].index,
              VAR_1->fw_stats_req->query[VAR_2].funcID,
              VAR_1->fw_stats_req->query[VAR_2].reserved,
              VAR_1->fw_stats_req->query[VAR_2].address.hi,
              VAR_1->fw_stats_req->query[VAR_2].address.lo);
    }
}
