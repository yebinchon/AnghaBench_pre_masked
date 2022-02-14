
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sc_info {int dev; scalar_t__ paddr; } ;
struct TYPE_3__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*,int ,int ,int) ;
 int FUNC_2 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, bus_dma_segment_t *VAR_4, int VAR_5, int VAR_6)
{
 struct sc_info *VAR_7 = VAR_3;

 VAR_7->paddr = VAR_4->ds_addr;
 FUNC_1(VAR_7, VAR_0, (uint32_t)VAR_4->ds_addr, 4);
 FUNC_1(VAR_7, VAR_1, (uint32_t)(VAR_4->ds_len / 4 - 1), 2);
}
