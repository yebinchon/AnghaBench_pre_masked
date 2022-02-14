
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct mpt_softc {int mpt_max_tgtcmds; int tgt_cmds_allocated; TYPE_1__** tgt_cmd_ptrs; } ;
struct TYPE_6__ {int state; } ;
typedef TYPE_1__ request_t ;


 int VAR_0 ;
 int FUNC_0 (struct mpt_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__**,int ) ;
 TYPE_1__** FUNC_2 (int,int ,int) ;
 TYPE_1__* FUNC_3 (struct mpt_softc*,int) ;
 int FUNC_4 (struct mpt_softc*,int ,char*,...) ;
 int FUNC_5 (struct mpt_softc*,TYPE_1__*,int) ;
 int FUNC_6 (struct mpt_softc*,char*) ;

__attribute__((used)) static int
FUNC_7(struct mpt_softc *VAR_8)
{
 int VAR_9, VAR_10;

 if (VAR_8->tgt_cmd_ptrs) {
  return (VAR_7);
 }

 VAR_10 = FUNC_0(VAR_8) >> 1;
 if (VAR_10 > VAR_8->mpt_max_tgtcmds) {
  VAR_10 = VAR_8->mpt_max_tgtcmds;
 }
 VAR_8->tgt_cmd_ptrs =
     FUNC_2(VAR_10 * sizeof (request_t *), VAR_3, VAR_4 | VAR_5);
 if (VAR_8->tgt_cmd_ptrs == ((void*)0)) {
  FUNC_6(VAR_8,
      "mpt_add_target_commands: could not allocate cmd ptrs\n");
  return (VAR_0);
 }

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  request_t *VAR_11;

  VAR_11 = FUNC_3(VAR_8, VAR_0);
  if (VAR_11 == ((void*)0)) {
   break;
  }
  VAR_11->state |= VAR_6;
  VAR_8->tgt_cmd_ptrs[VAR_9] = VAR_11;
  FUNC_5(VAR_8, VAR_11, VAR_9);
 }


 if (VAR_9 == 0) {
  FUNC_4(VAR_8, VAR_1, "could not add any target bufs\n");
  FUNC_1(VAR_8->tgt_cmd_ptrs, VAR_3);
  VAR_8->tgt_cmd_ptrs = ((void*)0);
  return (VAR_0);
 }

 VAR_8->tgt_cmds_allocated = VAR_9;

 if (VAR_9 < VAR_10) {
  FUNC_4(VAR_8, VAR_2,
      "added %d of %d target bufs\n", VAR_9, VAR_10);
 }
 return (VAR_9);
}
