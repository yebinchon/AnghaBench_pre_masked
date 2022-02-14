
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmpfile ;
struct module_env {TYPE_3__* auth_zones; struct config_file* cfg; } ;
struct config_file {char* chrootdir; } ;
struct auth_zone {scalar_t__* zonefile; int lock; } ;
struct auth_xfer {TYPE_2__* task_transfer; int lock; int dclass; int namelen; int name; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {TYPE_1__* master; } ;
struct TYPE_4__ {scalar_t__ http; } ;


 int VAR_0 ;
 struct auth_zone* FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_1 (struct auth_xfer*,char*) ;
 int FUNC_2 (struct auth_zone*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*,char*,int ) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int,char*,char*,unsigned int) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*,char*,scalar_t__) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_16(struct auth_xfer* VAR_2, struct module_env* VAR_3)
{
 struct config_file* VAR_4 = VAR_3->cfg;
 struct auth_zone* VAR_5;
 char VAR_6[1024];
 char* VAR_7;
 FUNC_5(&VAR_2->lock);



 FUNC_6(&VAR_3->auth_zones->lock);
 VAR_5 = FUNC_0(VAR_3->auth_zones, VAR_2->name, VAR_2->namelen,
  VAR_2->dclass);
 if(!VAR_5) {
  FUNC_7(&VAR_3->auth_zones->lock);

  FUNC_4(&VAR_2->lock);
  return;
 }
 FUNC_6(&VAR_5->lock);
 FUNC_4(&VAR_2->lock);
 FUNC_7(&VAR_3->auth_zones->lock);

 if(VAR_5->zonefile == ((void*)0) || VAR_5->zonefile[0] == 0) {
  FUNC_7(&VAR_5->lock);

  return;
 }
 VAR_7 = VAR_5->zonefile;
 if(VAR_4->chrootdir && VAR_4->chrootdir[0] && FUNC_13(VAR_7,
  VAR_4->chrootdir, FUNC_12(VAR_4->chrootdir)) == 0)
  VAR_7 += FUNC_12(VAR_4->chrootdir);


 if((size_t)FUNC_12(VAR_7) + 16 > sizeof(VAR_6)) {
  FUNC_15(VAR_0, "tmpfilename too long, cannot update "
   " zonefile %s", VAR_7);
  FUNC_7(&VAR_5->lock);
  return;
 }
 FUNC_10(VAR_6, sizeof(VAR_6), "%s.tmp%u", VAR_7,
  (unsigned)FUNC_3());
 if(VAR_2->task_transfer->master->http) {

  if(!FUNC_1(VAR_2, VAR_6)) {
   FUNC_14(VAR_6);
   FUNC_7(&VAR_5->lock);
  }
 } else if(!FUNC_2(VAR_5, VAR_6)) {
  FUNC_14(VAR_6);
  FUNC_7(&VAR_5->lock);
  return;
 }
 if(FUNC_9(VAR_6, VAR_7) < 0) {
  FUNC_8("could not rename(%s, %s): %s", VAR_6, VAR_7,
   FUNC_11(VAR_1));
  FUNC_14(VAR_6);
  FUNC_7(&VAR_5->lock);
  return;
 }
 FUNC_7(&VAR_5->lock);
}
