
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int sample_count; int events; } ;
struct TYPE_4__ {char* config_blk_base_addr; TYPE_1__ cfg_blk; int read_cfg_blk; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static
void FUNC_5(void)
{
    VAR_2.config_blk_base_addr = (char *)FUNC_2(VAR_0);
    FUNC_3(&(VAR_2.cfg_blk.events), VAR_2.config_blk_base_addr + FUNC_4(VAR_1, VAR_3), sizeof(int64_t));


    FUNC_1(&VAR_2.read_cfg_blk,1);
    FUNC_0("cfg_blk.events=%lu, sample_count=%ld\n", VAR_2.cfg_blk.events, VAR_2.cfg_blk.sample_count);
}
