
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct mpt_softc {scalar_t__ is_fc; int els_cmds_allocated; TYPE_1__** els_cmd_ptrs; } ;
struct TYPE_6__ {int state; } ;
typedef TYPE_1__ request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__**,int ) ;
 TYPE_1__** FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct mpt_softc*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (struct mpt_softc*,int) ;
 int FUNC_4 (struct mpt_softc*,int ,char*,int,int) ;
 int FUNC_5 (struct mpt_softc*,char*) ;

__attribute__((used)) static int
FUNC_6(struct mpt_softc *VAR_8)
{
 int VAR_9;

 if (VAR_8->is_fc == 0) {
  return (VAR_7);
 }

 if (VAR_8->els_cmds_allocated) {
  return (VAR_7);
 }

 VAR_8->els_cmd_ptrs = FUNC_1(VAR_1 * sizeof (request_t *),
     VAR_3, VAR_4 | VAR_5);

 if (VAR_8->els_cmd_ptrs == ((void*)0)) {
  return (VAR_0);
 }




 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  request_t *VAR_10 = FUNC_3(VAR_8, VAR_0);
  if (VAR_10 == ((void*)0)) {
   break;
  }
  VAR_10->state |= VAR_6;
  VAR_8->els_cmd_ptrs[VAR_9] = VAR_10;
  FUNC_2(VAR_8, VAR_10, VAR_9);
 }

 if (VAR_9 == 0) {
  FUNC_5(VAR_8, "unable to add ELS buffer resources\n");
  FUNC_0(VAR_8->els_cmd_ptrs, VAR_3);
  VAR_8->els_cmd_ptrs = ((void*)0);
  return (VAR_0);
 }
 if (VAR_9 != VAR_1) {
  FUNC_4(VAR_8, VAR_2,
      "only added %d of %d  ELS buffers\n", VAR_9, VAR_1);
 }
 VAR_8->els_cmds_allocated = VAR_9;
 return(VAR_7);
}
