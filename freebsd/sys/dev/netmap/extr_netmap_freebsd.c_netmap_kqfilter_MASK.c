
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct nm_selinfo {TYPE_1__ si; int kqueue_users; int mtxname; } ;
struct netmap_priv_d {struct nm_selinfo** np_si; struct netmap_adapter* np_na; } ;
struct netmap_adapter {int dummy; } ;
struct knote {int kn_filter; struct netmap_priv_d* kn_hook; int * kn_fop; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (void**) ;
 int FUNC_3 (int *,struct knote*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_6, struct knote *VAR_7)
{
 struct netmap_priv_d *VAR_8;
 int VAR_9;
 struct netmap_adapter *VAR_10;
 struct nm_selinfo *VAR_11;
 int VAR_12 = VAR_7->kn_filter;

 if (VAR_12 != VAR_0 && VAR_12 != VAR_1) {
  FUNC_4("bad filter request %d", VAR_12);
  return 1;
 }
 VAR_9 = FUNC_2((void**)&VAR_8);
 if (VAR_9) {
  FUNC_4("device not yet setup");
  return 1;
 }
 VAR_10 = VAR_8->np_na;
 if (VAR_10 == ((void*)0)) {
  FUNC_4("no netmap adapter for this file descriptor");
  return 1;
 }

 VAR_11 = VAR_8->np_si[(VAR_12 == VAR_1) ? VAR_3 : VAR_2];
 VAR_7->kn_fop = (VAR_12 == VAR_1) ?
  &VAR_5 : &VAR_4;
 VAR_7->kn_hook = VAR_8;
 FUNC_0();
 VAR_11->kqueue_users++;
 FUNC_5("kqueue users for %s: %d", VAR_11->mtxname, VAR_11->kqueue_users);
 FUNC_1();
 FUNC_3(&VAR_11->si.si_note, VAR_7, 0);

 return 0;
}
