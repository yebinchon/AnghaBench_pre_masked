
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int ciss_buffer_dmat; int ciss_command_map; int ciss_command_dmat; } ;
struct ciss_request {int cr_flags; int cr_datamap; int * cr_data; struct ciss_softc* cr_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct ciss_request *VAR_5)
{
    struct ciss_softc *VAR_6;

    FUNC_2(2);

    VAR_6 = VAR_5->cr_sc;


    if ((VAR_5->cr_flags & VAR_4) == 0)
 return;

    FUNC_0(VAR_6->ciss_command_dmat, VAR_6->ciss_command_map,
      VAR_1);

    if (VAR_5->cr_data == ((void*)0))
 goto out;

    if (VAR_5->cr_flags & VAR_2)
 FUNC_0(VAR_6->ciss_buffer_dmat, VAR_5->cr_datamap, VAR_0);
    if (VAR_5->cr_flags & VAR_3)
 FUNC_0(VAR_6->ciss_buffer_dmat, VAR_5->cr_datamap, VAR_1);

    FUNC_1(VAR_6->ciss_buffer_dmat, VAR_5->cr_datamap);
out:
    VAR_5->cr_flags &= ~VAR_4;
}
