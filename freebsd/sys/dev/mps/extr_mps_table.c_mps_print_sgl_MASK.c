
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct mps_softc {int dummy; } ;
struct mps_command {int cm_chain_list; scalar_t__ cm_req; } ;
struct mps_chain {scalar_t__ chain; } ;
struct TYPE_4__ {int Flags; int NextChainOffset; int Address; int Length; } ;
struct TYPE_3__ {int FlagsLength; int Address; } ;
typedef TYPE_1__ MPI2_SGE_SIMPLE64 ;
typedef TYPE_2__ MPI2_SGE_CHAIN32 ;
typedef int MPI2_REQUEST_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mps_chain* FUNC_0 (int *) ;
 struct mps_chain* FUNC_1 (struct mps_chain*,int ) ;
 int VAR_4 ;
 int FUNC_2 (char*,int,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;

void
FUNC_7(struct mps_softc *VAR_5, struct mps_command *VAR_6, int VAR_7)
{
 MPI2_SGE_SIMPLE64 *VAR_8;
 MPI2_SGE_CHAIN32 *VAR_9;
 MPI2_REQUEST_HEADER *VAR_10;
 struct mps_chain *VAR_11 = ((void*)0);
 char *VAR_12;
 u_int VAR_13 = 0, VAR_14;

 VAR_10 = (MPI2_REQUEST_HEADER *)VAR_6->cm_req;
 VAR_12 = (char *)VAR_6->cm_req;
 VAR_8 = (MPI2_SGE_SIMPLE64 *)&VAR_12[VAR_7 * 4];
 FUNC_6("SGL for command %p\n", VAR_6);

 FUNC_2(VAR_12, 128, ((void*)0), 0);
 while (VAR_12 != ((void*)0)) {
  VAR_14 = FUNC_4(VAR_8->FlagsLength) >> VAR_3;
  FUNC_6("seg%d flags=0x%02x len=0x%06x addr=0x%016jx\n",
      VAR_13, VAR_14, FUNC_4(VAR_8->FlagsLength) & 0xffffff,
      FUNC_5(&VAR_8->Address));
  if (VAR_14 & (VAR_1 |
      VAR_0))
   break;
  VAR_8++;
  VAR_13++;
  if (VAR_14 & VAR_2) {
   VAR_9 = (MPI2_SGE_CHAIN32 *)VAR_8;
   FUNC_6("chain flags=0x%x len=0x%x Offset=0x%x "
       "Address=0x%x\n", VAR_9->Flags, FUNC_3(VAR_9->Length),
       VAR_9->NextChainOffset, FUNC_4(VAR_9->Address));
   if (VAR_11 == ((void*)0))
    VAR_11 = FUNC_0(&VAR_6->cm_chain_list);
   else
    VAR_11 = FUNC_1(VAR_11, VAR_4);
   VAR_12 = (char *)VAR_11->chain;
   VAR_8 = (MPI2_SGE_SIMPLE64 *)VAR_12;
   FUNC_2(VAR_12, 128, ((void*)0), 0);
  }
 }
}
