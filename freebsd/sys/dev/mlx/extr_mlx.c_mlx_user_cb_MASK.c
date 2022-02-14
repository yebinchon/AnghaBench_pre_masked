
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_usercommand {int mu_bufptr; scalar_t__ mu_datasize; } ;
struct mlx_dcdb {int dcdb_physaddr; } ;
struct mlx_command {int* mc_mailbox; int mc_dataphys; scalar_t__ mc_data; scalar_t__ mc_private; } ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlx_command*,int *,int,int) ;
 scalar_t__ FUNC_2 (struct mlx_command*) ;

void
FUNC_3(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
    struct mlx_usercommand *VAR_5;
    struct mlx_command *VAR_6;
    struct mlx_dcdb *VAR_7;

    VAR_6 = (struct mlx_command *)VAR_1;
    if (VAR_4)
 return;

    FUNC_1(VAR_6, VAR_2, VAR_3, VAR_4);

    VAR_5 = (struct mlx_usercommand *)VAR_6->mc_private;
    VAR_7 = ((void*)0);







    if (VAR_6->mc_mailbox[0] == VAR_0) {
 VAR_7 = (struct mlx_dcdb *)VAR_6->mc_data;
 VAR_7->dcdb_physaddr = VAR_6->mc_dataphys + sizeof(*VAR_7);
 VAR_5->mu_bufptr = 8;
    }




    if (VAR_5->mu_datasize > 0) {
 VAR_6->mc_mailbox[VAR_5->mu_bufptr ] = VAR_6->mc_dataphys & 0xff;
 VAR_6->mc_mailbox[VAR_5->mu_bufptr + 1] = (VAR_6->mc_dataphys >> 8) & 0xff;
 VAR_6->mc_mailbox[VAR_5->mu_bufptr + 2] = (VAR_6->mc_dataphys >> 16) & 0xff;
 VAR_6->mc_mailbox[VAR_5->mu_bufptr + 3] = (VAR_6->mc_dataphys >> 24) & 0xff;
    }
    FUNC_0(0, "command fixup");


    if (FUNC_2(VAR_6) != 0)
 return;

}
