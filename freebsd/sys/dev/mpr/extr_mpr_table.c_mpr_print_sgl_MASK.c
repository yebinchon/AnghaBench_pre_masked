
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct mpr_softc {int dummy; } ;
struct mpr_command {int cm_flags; int cm_chain_list; scalar_t__ cm_req; } ;
struct mpr_chain {scalar_t__ chain; } ;
struct TYPE_6__ {int Flags; int NextChainOffset; int Length; int Address; } ;
struct TYPE_5__ {int Flags; int Address; int Length; } ;
struct TYPE_4__ {int FlagsLength; int Address; } ;
typedef TYPE_1__ MPI2_SGE_SIMPLE64 ;
typedef int MPI2_REQUEST_HEADER ;
typedef TYPE_2__ MPI2_IEEE_SGE_SIMPLE64 ;
typedef TYPE_3__ MPI25_IEEE_SGE_CHAIN64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mpr_chain* FUNC_0 (int *) ;
 struct mpr_chain* FUNC_1 (struct mpr_chain*,int ) ;
 int VAR_6 ;
 int FUNC_2 (char*,int,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;

void
FUNC_6(struct mpr_softc *VAR_7, struct mpr_command *VAR_8, int VAR_9)
{
 MPI2_IEEE_SGE_SIMPLE64 *VAR_10;
 MPI25_IEEE_SGE_CHAIN64 *VAR_11;
 MPI2_SGE_SIMPLE64 *VAR_12;
 MPI2_REQUEST_HEADER *VAR_13;
 struct mpr_chain *VAR_14 = ((void*)0);
 char *VAR_15;
 u_int VAR_16 = 0, VAR_17, VAR_18;

 VAR_13 = (MPI2_REQUEST_HEADER *)VAR_8->cm_req;
 VAR_15 = (char *)VAR_8->cm_req;
 VAR_10 = (MPI2_IEEE_SGE_SIMPLE64 *)&VAR_15[VAR_9 * 4];
 VAR_12 = (MPI2_SGE_SIMPLE64 *)&VAR_15[VAR_9 * 4];
 FUNC_5("SGL for command %p\n", VAR_8);

 FUNC_2(VAR_15, 128, ((void*)0), 0);
 while ((VAR_15 != ((void*)0)) && (!(VAR_8->cm_flags & VAR_5))) {
  VAR_17 = VAR_10->Flags;
  VAR_18 = FUNC_3(VAR_10->Length);
  FUNC_5("IEEE seg%d flags=0x%02x len=0x%08x addr=0x%016jx\n", VAR_16,
      VAR_17, VAR_18, FUNC_4(&VAR_10->Address));
  if (VAR_17 & VAR_0)
   break;
  VAR_10++;
  VAR_16++;
  if (VAR_17 & VAR_1) {
   VAR_11 = (MPI25_IEEE_SGE_CHAIN64 *)VAR_10;
   FUNC_5("IEEE chain flags=0x%x len=0x%x Offset=0x%x "
       "Address=0x%016jx\n", VAR_11->Flags,
       FUNC_3(VAR_11->Length),
       VAR_11->NextChainOffset,
       FUNC_4(&VAR_11->Address));
   if (VAR_14 == ((void*)0))
    VAR_14 = FUNC_0(&VAR_8->cm_chain_list);
   else
    VAR_14 = FUNC_1(VAR_14, VAR_6);
   VAR_15 = (char *)VAR_14->chain;
   VAR_10 = (MPI2_IEEE_SGE_SIMPLE64 *)VAR_15;
   FUNC_2(VAR_15, 128, ((void*)0), 0);
  }
 }
 while ((VAR_15 != ((void*)0)) && (VAR_8->cm_flags & VAR_5)) {
  VAR_17 = FUNC_3(VAR_12->FlagsLength) >> VAR_4;
  FUNC_5("seg%d flags=0x%02x len=0x%06x addr=0x%016jx\n", VAR_16,
      VAR_17, FUNC_3(VAR_12->FlagsLength) & 0xffffff,
      FUNC_4(&VAR_12->Address));
  if (VAR_17 & (VAR_3 |
      VAR_2))
   break;
  VAR_12++;
  VAR_16++;
 }
}
