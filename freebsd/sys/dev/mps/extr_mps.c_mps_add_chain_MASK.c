
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct mps_command {int cm_sglsize; TYPE_2__* cm_sge; int cm_chain_list; TYPE_4__* cm_sc; } ;
struct mps_chain {TYPE_1__* chain; int chain_busaddr; } ;
struct TYPE_8__ {int reqframesz; } ;
struct TYPE_7__ {int Address; int Flags; scalar_t__ NextChainOffset; int Length; } ;
struct TYPE_6__ {int MpiChain; } ;
struct TYPE_5__ {int MpiSimple; } ;
typedef TYPE_2__ MPI2_SGE_IO_UNION ;
typedef TYPE_3__ MPI2_SGE_CHAIN32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct mps_chain*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mps_chain* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct mps_command *VAR_4)
{
 MPI2_SGE_CHAIN32 *VAR_5;
 struct mps_chain *VAR_6;
 u_int VAR_7;

 if (VAR_4->cm_sglsize < VAR_2)
  FUNC_4("MPS: Need SGE Error Code\n");

 VAR_6 = FUNC_3(VAR_4->cm_sc);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_7 = VAR_4->cm_sc->reqframesz;





 FUNC_0(&VAR_4->cm_chain_list, VAR_6, VAR_3);

 VAR_5 = (MPI2_SGE_CHAIN32 *)&VAR_4->cm_sge->MpiChain;
 VAR_5->Length = FUNC_1(VAR_7);
 VAR_5->NextChainOffset = 0;






 VAR_5->Flags = VAR_1;
 VAR_5->Address = FUNC_2(VAR_6->chain_busaddr);

 VAR_4->cm_sge = (MPI2_SGE_IO_UNION *)&VAR_6->chain->MpiSimple;
 VAR_4->cm_sglsize = VAR_7;
 return (0);
}
