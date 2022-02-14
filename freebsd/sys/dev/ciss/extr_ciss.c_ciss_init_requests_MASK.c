
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ciss_softc {int ciss_max_requests; int ciss_buffer_dmat; scalar_t__ ciss_command_phys; scalar_t__ ciss_command; struct ciss_request* ciss_request; int ciss_command_map; int ciss_command_dmat; int ciss_parent_dmat; TYPE_1__* ciss_cfg; } ;
struct ciss_request {int cr_tag; int cr_datamap; scalar_t__ cr_ccphys; struct ciss_command* cr_cc; struct ciss_softc* cr_sc; } ;
struct ciss_command {int dummy; } ;
struct TYPE_2__ {int max_outstanding_commands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,scalar_t__,int,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (int ,void**,int ,int *) ;
 int FUNC_4 (scalar_t__,int) ;
 int VAR_7 ;
 int FUNC_5 (struct ciss_request*) ;
 int FUNC_6 (struct ciss_softc*,char*,...) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct ciss_softc *VAR_8)
{
    struct ciss_request *VAR_9;
    int VAR_10;

    FUNC_7(1);

    if (VAR_6)
 FUNC_6(VAR_8, "using %d of %d available commands\n",
      VAR_8->ciss_max_requests, VAR_8->ciss_cfg->max_outstanding_commands);




    if (FUNC_0(VAR_8->ciss_parent_dmat,
      32, 0,
      VAR_2,
      VAR_1,
      ((void*)0), ((void*)0),
      VAR_4 *
      VAR_8->ciss_max_requests, 1,
      VAR_3,
      0,
      ((void*)0), ((void*)0),
      &VAR_8->ciss_command_dmat)) {
 FUNC_6(VAR_8, "can't allocate command DMA tag\n");
 return(VAR_5);
    }



    if (FUNC_3(VAR_8->ciss_command_dmat, (void **)&VAR_8->ciss_command,
    VAR_0, &VAR_8->ciss_command_map)) {
 FUNC_6(VAR_8, "can't allocate command memory\n");
 return(VAR_5);
    }
    FUNC_2(VAR_8->ciss_command_dmat, VAR_8->ciss_command_map,VAR_8->ciss_command,
      VAR_4 * VAR_8->ciss_max_requests,
      VAR_7, &VAR_8->ciss_command_phys, 0);
    FUNC_4(VAR_8->ciss_command, VAR_4 * VAR_8->ciss_max_requests);





    for (VAR_10 = 1; VAR_10 < VAR_8->ciss_max_requests; VAR_10++) {
 VAR_9 = &VAR_8->ciss_request[VAR_10];
 VAR_9->cr_sc = VAR_8;
 VAR_9->cr_tag = VAR_10;
 VAR_9->cr_cc = (struct ciss_command *)((uintptr_t)VAR_8->ciss_command +
     VAR_4 * VAR_10);
 VAR_9->cr_ccphys = VAR_8->ciss_command_phys + VAR_4 * VAR_10;
 FUNC_1(VAR_8->ciss_buffer_dmat, 0, &VAR_9->cr_datamap);
 FUNC_5(VAR_9);
    }
    return(0);
}
