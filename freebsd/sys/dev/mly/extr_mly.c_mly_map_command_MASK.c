
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int mly_buffer_dmat; } ;
struct mly_command {int mc_flags; int mc_datamap; int mc_length; int * mc_data; struct mly_softc* mc_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *,int ,int ,struct mly_command*,int ) ;
 int FUNC_1 (int ,int ,int *,int ,struct mly_command*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(struct mly_command *VAR_7)
{
    struct mly_softc *VAR_8 = VAR_7->mc_sc;

    FUNC_3(2);


    if (VAR_7->mc_flags & VAR_5)
 return;


    if (VAR_7->mc_data != ((void*)0)) {
 if (VAR_7->mc_flags & VAR_2)
  FUNC_1(VAR_8->mly_buffer_dmat, VAR_7->mc_datamap,
    VAR_7->mc_data, VAR_6, VAR_7, 0);
 else
  FUNC_0(VAR_8->mly_buffer_dmat, VAR_7->mc_datamap,
    VAR_7->mc_data, VAR_7->mc_length,
    VAR_6, VAR_7, 0);
 if (VAR_7->mc_flags & VAR_3)
     FUNC_2(VAR_8->mly_buffer_dmat, VAR_7->mc_datamap, VAR_0);
 if (VAR_7->mc_flags & VAR_4)
     FUNC_2(VAR_8->mly_buffer_dmat, VAR_7->mc_datamap, VAR_1);
    }
    VAR_7->mc_flags |= VAR_5;
}
