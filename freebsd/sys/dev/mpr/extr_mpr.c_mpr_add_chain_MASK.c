
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mpr_softc {int chain_frame_size; } ;
struct mpr_command {int cm_flags; int cm_sglsize; scalar_t__ cm_req; int * cm_sge; int cm_chain_list; struct mpr_softc* cm_sc; } ;
struct mpr_chain {int chain_busaddr; scalar_t__ chain; } ;
struct TYPE_5__ {void* High; void* Low; } ;
struct TYPE_8__ {int NextChainOffset; int Flags; TYPE_1__ Address; void* Length; } ;
struct TYPE_7__ {int IeeeSimple; TYPE_4__ IeeeChain; } ;
struct TYPE_6__ {int ChainOffset; } ;
typedef TYPE_2__ MPI2_REQUEST_HEADER ;
typedef TYPE_3__ MPI25_SGE_IO_UNION ;
typedef TYPE_4__ MPI25_IEEE_SGE_CHAIN64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct mpr_chain*,int ) ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 struct mpr_chain* FUNC_2 (struct mpr_softc*) ;
 int FUNC_3 (struct mpr_softc*,int ,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct mpr_command *VAR_6, int VAR_7)
{
 struct mpr_softc *VAR_8 = VAR_6->cm_sc;
 MPI2_REQUEST_HEADER *VAR_9;
 MPI25_IEEE_SGE_CHAIN64 *VAR_10;
 struct mpr_chain *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 uint8_t VAR_16 = 0;






 if (VAR_6->cm_flags & VAR_3) {
  FUNC_3(VAR_8, VAR_4, "A chain element cannot be added to "
      "an MPI SGL.\n");
  return(VAR_0);
 }

 VAR_12 = sizeof(MPI25_IEEE_SGE_CHAIN64);
 if (VAR_6->cm_sglsize < VAR_12)
  FUNC_4("MPR: Need SGE Error Code\n");

 VAR_11 = FUNC_2(VAR_6->cm_sc);
 if (VAR_11 == ((void*)0))
  return (VAR_0);





 FUNC_0(&VAR_6->cm_chain_list, VAR_11, VAR_5);






 VAR_14 = 0;
 if (VAR_6->cm_sglsize < (VAR_12 * VAR_7)) {
  VAR_13 = (VAR_6->cm_sglsize / VAR_12) - 1;
  VAR_14 = VAR_7 - VAR_13;
  VAR_15 = VAR_8->chain_frame_size / VAR_12;
  if (VAR_14 > VAR_15) {
   VAR_16 = VAR_15 - 1;
  }
 }
 VAR_10 = &((MPI25_SGE_IO_UNION *)VAR_6->cm_sge)->IeeeChain;
 VAR_10->Length = VAR_16 ?
     FUNC_1((uint32_t)VAR_8->chain_frame_size) :
     FUNC_1((uint32_t)VAR_14 * (uint32_t)VAR_12);
 VAR_10->NextChainOffset = VAR_16;
 VAR_10->Flags = (VAR_1 |
     VAR_2);
 VAR_10->Address.Low = FUNC_1(VAR_11->chain_busaddr);
 VAR_10->Address.High = FUNC_1(VAR_11->chain_busaddr >> 32);
 VAR_6->cm_sge = &((MPI25_SGE_IO_UNION *)VAR_11->chain)->IeeeSimple;
 VAR_9 = (MPI2_REQUEST_HEADER *)VAR_6->cm_req;
 VAR_9->ChainOffset = (VAR_8->chain_frame_size - VAR_12) >> 4;

 VAR_6->cm_sglsize = VAR_8->chain_frame_size;
 return (0);
}
