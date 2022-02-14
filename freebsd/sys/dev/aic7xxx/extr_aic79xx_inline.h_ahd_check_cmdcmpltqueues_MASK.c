
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct target_cmd {int dummy; } ;
struct TYPE_5__ {int dmamap; } ;
struct ahd_softc {int qoutfifonext; scalar_t__ qoutfifonext_valid_tag; int flags; size_t tqinfifonext; TYPE_3__* targetcmds; int tqinfifofnext; TYPE_2__ shared_data_map; int shared_data_dmat; TYPE_1__* qoutfifo; } ;
struct TYPE_6__ {scalar_t__ cmd_valid; } ;
struct TYPE_4__ {scalar_t__ valid_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*,int ,int ,int,int,int ) ;

__attribute__((used)) static __inline u_int
FUNC_2(struct ahd_softc *VAR_5)
{
 u_int VAR_6;

 VAR_6 = 0;
 FUNC_1(VAR_5, VAR_5->shared_data_dmat, VAR_5->shared_data_map.dmamap,
             VAR_5->qoutfifonext * sizeof(*VAR_5->qoutfifo),
          sizeof(*VAR_5->qoutfifo), VAR_4);
 if (VAR_5->qoutfifo[VAR_5->qoutfifonext].valid_tag
   == VAR_5->qoutfifonext_valid_tag)
  VAR_6 |= VAR_0;
 return (VAR_6);
}
