
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mlx_usercommand {int mu_bufptr; int mu_datasize; int mu_buf; int mu_status; int mu_command; } ;
struct mlx_softc {int mlx_buffer_dmat; } ;
struct mlx_command {int mc_status; int mc_length; void* mc_data; int mc_dmamap; struct mlx_usercommand* mc_private; int mc_mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx_softc*) ;
 int FUNC_1 (struct mlx_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,void*,int ,int ,struct mlx_command*,int ) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*,int ) ;
 void* FUNC_9 (int ,int ,int ) ;
 struct mlx_command* FUNC_10 (struct mlx_softc*) ;
 scalar_t__ FUNC_11 (struct mlx_command*) ;
 int FUNC_12 (struct mlx_command*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_13(struct mlx_softc *VAR_7, struct mlx_usercommand *VAR_8)
{
    struct mlx_command *VAR_9;
    void *VAR_10;
    int VAR_11;

    FUNC_7(0);

    VAR_10 = ((void*)0);
    VAR_9 = ((void*)0);
    VAR_11 = VAR_2;


    FUNC_0(VAR_7);
    if ((VAR_9 = FUNC_10(VAR_7)) == ((void*)0)) {
 FUNC_1(VAR_7);
 return(VAR_11);
    }
    FUNC_2(VAR_8->mu_command, VAR_9->mc_mailbox, sizeof(VAR_9->mc_mailbox));
    FUNC_6(0, "got command buffer");





    if (VAR_8->mu_datasize > 0) {
 if (VAR_8->mu_datasize > VAR_3) {
     VAR_11 = VAR_1;
     goto out;
 }
 FUNC_1(VAR_7);
 if (((VAR_10 = FUNC_9(VAR_8->mu_datasize, VAR_4, VAR_5)) == ((void*)0)) ||
     (VAR_11 = FUNC_4(VAR_8->mu_buf, VAR_10, VAR_8->mu_datasize))) {
     FUNC_0(VAR_7);
     goto out;
 }
 FUNC_0(VAR_7);
 FUNC_6(0, "got kernel buffer");
    }


    if (FUNC_11(VAR_9))
 goto out;
    FUNC_6(0, "got a slot");

    if (VAR_8->mu_datasize > 0) {


 if ((VAR_8->mu_bufptr < 0) || (VAR_8->mu_bufptr > (sizeof(VAR_8->mu_command) -
           sizeof(u_int32_t)))) {
     VAR_11 = VAR_1;
     goto out;
 }
    }


    VAR_9->mc_data = VAR_10;
    VAR_9->mc_length = VAR_8->mu_datasize;
    VAR_9->mc_private = VAR_8;
    VAR_11 = FUNC_3(VAR_7->mlx_buffer_dmat, VAR_9->mc_dmamap, VAR_9->mc_data,
       VAR_9->mc_length, VAR_6, VAR_9, VAR_0);
    if (VAR_11)
 goto out;


    VAR_8->mu_status = VAR_9->mc_status;
    if (VAR_8->mu_datasize > 0) {
 FUNC_1(VAR_7);
 VAR_11 = FUNC_5(VAR_10, VAR_8->mu_buf, VAR_8->mu_datasize);
 FUNC_0(VAR_7);
    }

 out:
    FUNC_12(VAR_9);
    FUNC_1(VAR_7);
    if (VAR_10 != ((void*)0))
 FUNC_8(VAR_10, VAR_4);
    return(VAR_11);
}
