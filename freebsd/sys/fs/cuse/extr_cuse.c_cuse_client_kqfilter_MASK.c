
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knote {int kn_filter; int * kn_fop; struct cuse_client* kn_hook; } ;
struct TYPE_2__ {int si_note; } ;
struct cuse_server {TYPE_1__ selinfo; } ;
struct cuse_client {int cflags; struct cuse_server* server; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct cuse_client**) ;
 int FUNC_1 (struct cdev*,struct cuse_client*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,struct knote*,int) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_5, struct knote *VAR_6)
{
 struct cuse_client *VAR_7;
 struct cuse_server *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(&VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);

 FUNC_2();
 VAR_8 = VAR_7->server;
 switch (VAR_6->kn_filter) {
 case 129:
  VAR_7->cflags |= VAR_0;
  VAR_6->kn_hook = VAR_7;
  VAR_6->kn_fop = &VAR_3;
  FUNC_4(&VAR_8->selinfo.si_note, VAR_6, 1);
  break;
 case 128:
  VAR_7->cflags |= VAR_1;
  VAR_6->kn_hook = VAR_7;
  VAR_6->kn_fop = &VAR_4;
  FUNC_4(&VAR_8->selinfo.si_note, VAR_6, 1);
  break;
 default:
  VAR_9 = VAR_2;
  break;
 }
 FUNC_3();

 if (VAR_9 == 0)
  FUNC_1(VAR_5, VAR_7);
 return (VAR_9);
}
