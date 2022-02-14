
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int mly_buffer_dmat; } ;
struct mly_command {int mc_flags; int mc_datamap; int * mc_data; struct mly_softc* mc_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct mly_command *VAR_5)
{
    struct mly_softc *VAR_6 = VAR_5->mc_sc;

    FUNC_2(2);

    if (!(VAR_5->mc_flags & VAR_4))
 return;


    if (VAR_5->mc_data != ((void*)0)) {
 if (VAR_5->mc_flags & VAR_2)
     FUNC_0(VAR_6->mly_buffer_dmat, VAR_5->mc_datamap, VAR_0);
 if (VAR_5->mc_flags & VAR_3)
     FUNC_0(VAR_6->mly_buffer_dmat, VAR_5->mc_datamap, VAR_1);

 FUNC_1(VAR_6->mly_buffer_dmat, VAR_5->mc_datamap);
    }
    VAR_5->mc_flags &= ~VAR_4;
}
