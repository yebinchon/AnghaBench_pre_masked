
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mtx {int dummy; } ;
struct cam_sim {char const* sim_name; int max_tagged_dev_openings; int max_dev_openings; int refcount; int callout; int flags; struct mtx* mtx; struct cam_devq* devq; scalar_t__ bus_id; int unit_number; int * sim_dev; int path_id; void* softc; int sim_poll; int sim_action; } ;
struct cam_devq {int dummy; } ;
typedef int sim_poll_func ;
typedef int sim_action_func ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtx VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int,int ,int) ;

struct cam_sim *
FUNC_2(sim_action_func VAR_6, sim_poll_func VAR_7,
       const char *VAR_8, void *VAR_9, u_int32_t VAR_10,
       struct mtx *VAR_11, int VAR_12,
       int VAR_13, struct cam_devq *VAR_14)
{
 struct cam_sim *VAR_15;

 VAR_15 = (struct cam_sim *)FUNC_1(sizeof(struct cam_sim),
     VAR_3, VAR_5 | VAR_4);

 if (VAR_15 == ((void*)0))
  return (((void*)0));

 VAR_15->sim_action = VAR_6;
 VAR_15->sim_poll = VAR_7;
 VAR_15->sim_name = VAR_8;
 VAR_15->softc = VAR_9;
 VAR_15->path_id = VAR_0;
 VAR_15->sim_dev = ((void*)0);
 VAR_15->unit_number = VAR_10;
 VAR_15->bus_id = 0;
 VAR_15->max_tagged_dev_openings = VAR_13;
 VAR_15->max_dev_openings = VAR_12;
 VAR_15->flags = 0;
 VAR_15->refcount = 1;
 VAR_15->devq = VAR_14;
 VAR_15->mtx = VAR_11;
 if (VAR_11 == &VAR_2) {
  VAR_15->flags |= 0;
  FUNC_0(&VAR_15->callout, 0);
 } else {
  VAR_15->flags |= VAR_1;
  FUNC_0(&VAR_15->callout, 1);
 }
 return (VAR_15);
}
