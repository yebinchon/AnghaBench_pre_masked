
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct its_col {scalar_t__ col_target; } ;
struct TYPE_2__ {struct its_col* col; } ;
struct its_cmd_desc {TYPE_1__ cmd_desc_sync; int cmd_type; } ;
struct its_cmd {int dummy; } ;
struct gicv3_its_softc {int sc_its_cmd_next_idx; int sc_its_cmd_lock; struct its_cmd* sc_its_cmd_base; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct gicv3_its_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct gicv3_its_softc*,int ,scalar_t__) ;
 struct its_cmd* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct its_cmd*,struct its_cmd_desc*) ;
 int FUNC_5 (struct gicv3_its_softc*,struct its_cmd*) ;
 int FUNC_6 (int ,struct its_cmd*,struct its_cmd*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4, struct its_cmd_desc *VAR_5)
{
 struct gicv3_its_softc *VAR_6;
 struct its_cmd *VAR_7, *VAR_8, *VAR_9;
 struct its_col VAR_10;
 struct its_cmd_desc VAR_11;
 uint64_t VAR_12, VAR_13;

 VAR_6 = FUNC_0(VAR_4);
 FUNC_7(&VAR_6->sc_its_cmd_lock);
 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_4, "could not allocate ITS command\n");
  FUNC_8(&VAR_6->sc_its_cmd_lock);
  return (VAR_0);
 }

 VAR_12 = FUNC_4(VAR_7, VAR_5);
 FUNC_5(VAR_6, VAR_7);

 if (VAR_12 != VAR_3) {
  VAR_8 = FUNC_3(VAR_4);
  if (VAR_8 != ((void*)0)) {
   VAR_11.cmd_type = VAR_2;
   VAR_10.col_target = VAR_12;
   VAR_11.cmd_desc_sync.col = &VAR_10;
   FUNC_4(VAR_8, &VAR_11);
   FUNC_5(VAR_6, VAR_8);
  }
 }


 VAR_13 = VAR_6->sc_its_cmd_next_idx * sizeof(struct its_cmd);
 FUNC_2(VAR_6, VAR_1, VAR_13);
 VAR_9 = &VAR_6->sc_its_cmd_base[VAR_6->sc_its_cmd_next_idx];
 FUNC_8(&VAR_6->sc_its_cmd_lock);

 FUNC_6(VAR_4, VAR_7, VAR_9);

 return (0);
}
