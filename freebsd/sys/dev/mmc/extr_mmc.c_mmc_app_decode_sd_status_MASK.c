
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_sd_status {void* erase_offset; void* erase_timeout; void* erase_size; void* au_size; void* perf_move; void* speed_class; void* prot_area; void* card_type; void* secured_mode; void* bus_width; } ;


 int FUNC_0 (struct mmc_sd_status*,int ,int) ;
 void* FUNC_1 (int *,int,int,int) ;

__attribute__((used)) static void
FUNC_2(uint32_t *VAR_0,
    struct mmc_sd_status *VAR_1)
{

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->bus_width = FUNC_1(VAR_0, 512, 510, 2);
 VAR_1->secured_mode = FUNC_1(VAR_0, 512, 509, 1);
 VAR_1->card_type = FUNC_1(VAR_0, 512, 480, 16);
 VAR_1->prot_area = FUNC_1(VAR_0, 512, 448, 12);
 VAR_1->speed_class = FUNC_1(VAR_0, 512, 440, 8);
 VAR_1->perf_move = FUNC_1(VAR_0, 512, 432, 8);
 VAR_1->au_size = FUNC_1(VAR_0, 512, 428, 4);
 VAR_1->erase_size = FUNC_1(VAR_0, 512, 408, 16);
 VAR_1->erase_timeout = FUNC_1(VAR_0, 512, 402, 6);
 VAR_1->erase_offset = FUNC_1(VAR_0, 512, 400, 2);
}
