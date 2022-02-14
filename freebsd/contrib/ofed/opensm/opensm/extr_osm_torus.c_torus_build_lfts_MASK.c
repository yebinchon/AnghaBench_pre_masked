
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fabric {scalar_t__ ca_cnt; scalar_t__ switch_cnt; scalar_t__ link_cnt; TYPE_2__* osm; } ;
struct torus_context {struct torus* torus; TYPE_2__* osm; struct fabric fabric; } ;
struct torus {int flags; TYPE_2__* osm; scalar_t__ ca_cnt; scalar_t__ switch_cnt; scalar_t__ link_cnt; scalar_t__ z_sz; scalar_t__ y_sz; scalar_t__ x_sz; } ;
struct TYPE_6__ {int qos_options; int qos_rtr_options; int qos_sw0_options; int qos_ca_options; int qos_swe_options; int torus_conf_file; int qos; } ;
typedef TYPE_3__ osm_subn_opt_t ;
typedef int osm_log_t ;
struct TYPE_4__ {TYPE_3__ opt; scalar_t__ min_sw_data_vls; scalar_t__ min_data_vls; } ;
struct TYPE_5__ {int log; TYPE_1__ subn; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct fabric*,struct torus*) ;
 struct torus* FUNC_3 (int,int) ;
 int FUNC_4 (struct fabric*) ;
 int FUNC_5 (int *,int *,char*,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (struct fabric*) ;
 int VAR_3 ;
 int FUNC_8 (int ,struct fabric*,struct torus*) ;
 int FUNC_9 (struct torus*,struct torus*) ;
 scalar_t__ FUNC_10 (struct torus*,struct fabric*) ;
 int FUNC_11 (struct torus*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct fabric*) ;
 int FUNC_14 (struct torus*) ;
 int FUNC_15 (struct torus*,struct fabric*) ;

__attribute__((used)) static
int FUNC_16(void *VAR_4)
{
 int VAR_5 = -1;
 struct torus_context *VAR_6 = VAR_4;
 struct fabric *VAR_7;
 struct torus *VAR_8;

 if (!VAR_6->osm->subn.opt.qos) {
  FUNC_1(&VAR_6->osm->log, VAR_1,
   "ERR 4E44: Routing engine list contains torus-2QoS. "
   "Enable QoS for correct operation "
   "(-Q or 'qos TRUE' in opensm.conf).\n");
  return VAR_5;
 }

 VAR_7 = &VAR_6->fabric;
 FUNC_13(VAR_7);

 VAR_8 = FUNC_3(1, sizeof(*VAR_8));
 if (!VAR_8) {
  FUNC_1(&VAR_6->osm->log, VAR_1,
   "ERR 4E45: allocating torus: %s\n", FUNC_12(VAR_3));
  goto out;
 }
 VAR_8->osm = VAR_6->osm;
 VAR_7->osm = VAR_6->osm;

 if (!FUNC_8(VAR_6->osm->subn.opt.torus_conf_file,
     VAR_7, VAR_8))
  goto out;

 if (!FUNC_4(VAR_7))
  goto out;

 FUNC_1(&VAR_8->osm->log, VAR_2,
  "Found fabric w/ %d links, %d switches, %d CA ports, "
  "minimum data VLs: endport %d, switchport %d\n",
  (int)VAR_7->link_cnt, (int)VAR_7->switch_cnt,
  (int)VAR_7->ca_cnt, (int)VAR_6->osm->subn.min_data_vls,
  (int)VAR_6->osm->subn.min_sw_data_vls);

 if (!FUNC_15(VAR_8, VAR_7))
  goto out;

 FUNC_1(&VAR_8->osm->log, VAR_2,
  "Looking for %d x %d x %d %s\n",
  (int)VAR_8->x_sz, (int)VAR_8->y_sz, (int)VAR_8->z_sz,
  (FUNC_0(VAR_8->flags) ? "mesh" : "torus"));

 if (!FUNC_2(VAR_7, VAR_8)) {
  FUNC_1(&VAR_8->osm->log, VAR_1, "ERR 4E57: "
   "build_torus finished with errors\n");
  goto out;
 }

 FUNC_1(&VAR_8->osm->log, VAR_2,
  "Built %d x %d x %d %s w/ %d links, %d switches, %d CA ports\n",
  (int)VAR_8->x_sz, (int)VAR_8->y_sz, (int)VAR_8->z_sz,
  (FUNC_0(VAR_8->flags) ? "mesh" : "torus"),
  (int)VAR_8->link_cnt, (int)VAR_8->switch_cnt,
  (int)VAR_8->ca_cnt);

 FUNC_7(VAR_7);




 if (VAR_8->flags & VAR_0)
  FUNC_9(VAR_8, VAR_6->torus);

 if (FUNC_10(VAR_8, VAR_7))
  VAR_5 = FUNC_11(VAR_8);

out:
 if (VAR_5) {
  if (VAR_8)
   FUNC_14(VAR_8);
 } else {
  osm_subn_opt_t *VAR_9 = &VAR_8->osm->subn.opt;
  osm_log_t *VAR_10 = &VAR_8->osm->log;

  if (VAR_6->torus)
   FUNC_14(VAR_6->torus);
  VAR_6->torus = VAR_8;

  FUNC_6(&VAR_9->qos_swe_options, &VAR_9->qos_options,
         VAR_10);

  FUNC_5(&VAR_9->qos_ca_options,
        &VAR_9->qos_options, "qos_ca", VAR_10);
  FUNC_5(&VAR_9->qos_sw0_options,
        &VAR_9->qos_options, "qos_sw0", VAR_10);
  FUNC_5(&VAR_9->qos_rtr_options,
        &VAR_9->qos_options, "qos_rtr", VAR_10);
 }
 FUNC_13(VAR_7);
 return VAR_5;
}
