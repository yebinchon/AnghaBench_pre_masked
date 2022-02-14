
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {scalar_t__ ciss_perf; int ciss_buffer_dmat; int ciss_command_map; int ciss_command_dmat; } ;
struct ciss_request {int cr_flags; int cr_ccphys; int cr_sg_tag; int cr_length; int * cr_data; int cr_datamap; struct ciss_softc* cr_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ciss_softc*,struct ciss_request*) ;
 int FUNC_1 (struct ciss_softc*,int ) ;
 int FUNC_2 (int ,int ,int *,int ,int ,struct ciss_request*,int ) ;
 int FUNC_3 (int ,int ,int *,int ,struct ciss_request*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct ciss_request *VAR_6)
{
    struct ciss_softc *VAR_7;
    int VAR_8 = 0;

    FUNC_5(2);

    VAR_7 = VAR_6->cr_sc;


    if (VAR_6->cr_flags & VAR_3)
 return(0);

    VAR_6->cr_flags |= VAR_3;

    FUNC_4(VAR_7->ciss_command_dmat, VAR_7->ciss_command_map,
      VAR_0);

    if (VAR_6->cr_data != ((void*)0)) {
 if (VAR_6->cr_flags & VAR_2)
  VAR_8 = FUNC_3(VAR_7->ciss_buffer_dmat,
     VAR_6->cr_datamap, VAR_6->cr_data,
     VAR_5, VAR_6, 0);
 else
  VAR_8 = FUNC_2(VAR_7->ciss_buffer_dmat, VAR_6->cr_datamap,
     VAR_6->cr_data, VAR_6->cr_length,
     VAR_5, VAR_6, 0);
 if (VAR_8 != 0)
     return (VAR_8);
    } else {



 VAR_6->cr_sg_tag = VAR_4;
 VAR_6->cr_flags |= VAR_1;
 if (VAR_7->ciss_perf)
     FUNC_0(VAR_7, VAR_6);
 else
     FUNC_1(VAR_7, VAR_6->cr_ccphys);
    }

    return(0);
}
