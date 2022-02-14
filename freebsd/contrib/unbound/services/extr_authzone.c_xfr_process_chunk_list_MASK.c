
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module_env {int * now; int scratch_buffer; TYPE_3__* auth_zones; } ;
struct auth_zone {int lock; scalar_t__ zone_expired; } ;
struct auth_xfer {scalar_t__ serial; int name; scalar_t__ have_zone; int lease_time; TYPE_2__* task_transfer; scalar_t__ zone_expired; int lock; int dclass; int namelen; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {TYPE_1__* master; int on_ixfr_is_axfr; scalar_t__ on_ixfr; } ;
struct TYPE_4__ {int host; scalar_t__ http; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct auth_xfer*,struct auth_zone*,int ) ;
 int FUNC_1 (struct auth_xfer*,struct auth_zone*,int ) ;
 int FUNC_2 (struct auth_xfer*,struct auth_zone*,int ) ;
 struct auth_zone* FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__,char*,char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (struct auth_zone*,struct auth_xfer*) ;
 int FUNC_12 (struct auth_xfer*,struct module_env*) ;

__attribute__((used)) static int
FUNC_13(struct auth_xfer* VAR_3, struct module_env* VAR_4,
 int* VAR_5)
{
 struct auth_zone* VAR_6;




 FUNC_6(&VAR_3->lock);
 FUNC_7(&VAR_4->auth_zones->lock);
 VAR_6 = FUNC_3(VAR_4->auth_zones, VAR_3->name, VAR_3->namelen,
  VAR_3->dclass);
 if(!VAR_6) {
  FUNC_8(&VAR_4->auth_zones->lock);

  FUNC_5(&VAR_3->lock);
  return 0;
 }
 FUNC_9(&VAR_6->lock);
 FUNC_5(&VAR_3->lock);
 FUNC_8(&VAR_4->auth_zones->lock);


 if(VAR_3->task_transfer->master->http) {
  if(!FUNC_1(VAR_3, VAR_6, VAR_4->scratch_buffer)) {
   FUNC_8(&VAR_6->lock);
   FUNC_10(VAR_0, "http from %s: could not store data",
    VAR_3->task_transfer->master->host);
   return 0;
  }
 } else if(VAR_3->task_transfer->on_ixfr &&
  !VAR_3->task_transfer->on_ixfr_is_axfr) {
  if(!FUNC_2(VAR_3, VAR_6, VAR_4->scratch_buffer)) {
   FUNC_8(&VAR_6->lock);
   FUNC_10(VAR_0, "xfr from %s: could not store IXFR"
    " data", VAR_3->task_transfer->master->host);
   *VAR_5 = 1;
   return 0;
  }
 } else {
  if(!FUNC_0(VAR_3, VAR_6, VAR_4->scratch_buffer)) {
   FUNC_8(&VAR_6->lock);
   FUNC_10(VAR_0, "xfr from %s: could not store AXFR"
    " data", VAR_3->task_transfer->master->host);
   return 0;
  }
 }
 VAR_3->zone_expired = 0;
 VAR_6->zone_expired = 0;
 if(!FUNC_11(VAR_6, VAR_3)) {
  FUNC_8(&VAR_6->lock);
  FUNC_10(VAR_0, "xfr from %s: no SOA in zone after update"
   " (or malformed RR)", VAR_3->task_transfer->master->host);
  return 0;
 }
 if(VAR_3->have_zone)
  VAR_3->lease_time = *VAR_4->now;


 FUNC_8(&VAR_6->lock);

 if(VAR_2 >= VAR_1 && VAR_3->have_zone) {
  char VAR_7[256];
  FUNC_4(VAR_3->name, VAR_7);
  FUNC_10(VAR_1, "auth zone %s updated to serial %u", VAR_7,
   (unsigned)VAR_3->serial);
 }

 FUNC_12(VAR_3, VAR_4);
 return 1;
}
