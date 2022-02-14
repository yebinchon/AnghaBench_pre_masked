
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int qla_host_t ;
struct TYPE_5__ {int cntxt_id; int opcode; int cmd; } ;
struct TYPE_6__ {int hash_type; int ind_tbl_mask; int * rss_key; int flags; TYPE_1__ hdr; } ;
typedef TYPE_2__ qla_fw_cds_config_rss_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_6, uint16_t VAR_7)
{
 qla_fw_cds_config_rss_t VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(&VAR_8, sizeof(qla_fw_cds_config_rss_t));

 VAR_8.hdr.cmd = VAR_0;
 VAR_8.hdr.opcode = VAR_1;
 VAR_8.hdr.cntxt_id = VAR_7;

 VAR_8.hash_type = (VAR_3 |
     VAR_4);
 VAR_8.flags = VAR_2;

 VAR_8.ind_tbl_mask = 0x7;

 for (VAR_10 = 0; VAR_10 < 5; VAR_10++)
  VAR_8.rss_key[VAR_10] = VAR_5[VAR_10];

 VAR_9 = FUNC_1(VAR_6, &VAR_8, sizeof(qla_fw_cds_config_rss_t));

 return VAR_9;
}
