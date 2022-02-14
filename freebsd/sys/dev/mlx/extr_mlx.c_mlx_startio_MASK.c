
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx_softc {int mlx_state; int mlx_buffer_dmat; int mlx_waitbufs; int mlx_bioq; } ;
struct mlx_command {int mc_length; int mc_data; int mc_dmamap; struct bio* mc_private; int mc_complete; } ;
struct bio {int bio_bcount; int bio_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx_softc*) ;
 int VAR_1 ;
 struct bio* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,struct mlx_command*,int ) ;
 struct mlx_command* FUNC_4 (struct mlx_softc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct mlx_command*) ;
 int FUNC_6 (struct mlx_command*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(struct mlx_softc *VAR_4)
{
    struct mlx_command *VAR_5;
    struct bio *VAR_6;
    int VAR_7;

    FUNC_0(VAR_4);


    for (;;) {
 if (VAR_4->mlx_state & VAR_1)
     break;


 if ((VAR_6 = FUNC_1(&VAR_4->mlx_bioq)) == ((void*)0))
     break;

 if ((VAR_5 = FUNC_4(VAR_4)) == ((void*)0))
     break;

 if (FUNC_5(VAR_5) != 0) {
     FUNC_6(VAR_5);
     break;
 }

 FUNC_2(&VAR_4->mlx_bioq, VAR_6);
 VAR_4->mlx_waitbufs--;


 VAR_5->mc_complete = VAR_2;
 VAR_5->mc_private = VAR_6;
 VAR_5->mc_data = VAR_6->bio_data;
 VAR_5->mc_length = VAR_6->bio_bcount;


 VAR_7 = FUNC_3(VAR_4->mlx_buffer_dmat, VAR_5->mc_dmamap, VAR_5->mc_data,
    VAR_5->mc_length, VAR_3, VAR_5, 0);
 if (VAR_7 == VAR_0) {
     VAR_4->mlx_state |= VAR_1;
     break;
 }
    }
}
