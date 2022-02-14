
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cuse_server_dev {struct cuse_dev* user_dev; struct cuse_server* server; } ;
struct cuse_server {scalar_t__ refs; scalar_t__ pid; scalar_t__ is_closing; int hcli; } ;
struct cuse_dev {int dummy; } ;
struct TYPE_3__ {int command; struct cuse_dev* dev; } ;
struct cuse_client_command {int cv; int sx; struct cuse_client* client; TYPE_1__ sub; } ;
struct cuse_client {int fflags; struct cuse_client_command* cmds; struct cuse_server* server; struct cuse_server_dev* server_dev; } ;
struct cdev {struct cuse_server_dev* si_drv1; } ;
struct TYPE_4__ {scalar_t__ p_pid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct cuse_client*,int ) ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct cuse_client_command*,int ,int ) ;
 int FUNC_2 (struct cuse_client_command*,int ,int ,int,int ) ;
 int FUNC_3 (struct cuse_client_command*) ;
 int FUNC_4 (struct cuse_client_command*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct cuse_server*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (struct cuse_client*,int *) ;
 int VAR_9 ;
 int FUNC_12 (struct cuse_client*,int ) ;
 struct cuse_client* FUNC_13 (int,int ,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *,char*) ;

__attribute__((used)) static int
FUNC_16(struct cdev *VAR_10, int VAR_11, int VAR_12, struct thread *VAR_13)
{
 struct cuse_client_command *VAR_14;
 struct cuse_server_dev *VAR_15;
 struct cuse_client *VAR_16;
 struct cuse_server *VAR_17;
 struct cuse_dev *VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_6();
 VAR_15 = VAR_10->si_drv1;
 if (VAR_15 != ((void*)0)) {
  VAR_17 = VAR_15->server;
  VAR_18 = VAR_15->user_dev;






  VAR_17->refs++;
  if (VAR_17->refs < 0 || VAR_17->pid == VAR_7->p_pid) {

   VAR_17->refs--;
   VAR_15 = ((void*)0);
  }
 } else {
  VAR_17 = ((void*)0);
  VAR_18 = ((void*)0);
 }
 FUNC_8();

 if (VAR_15 == ((void*)0))
  return (VAR_2);

 VAR_16 = FUNC_13(sizeof(*VAR_16), VAR_4, VAR_5 | VAR_6);
 if (VAR_16 == ((void*)0)) {

  FUNC_7(VAR_17);
  return (VAR_3);
 }
 if (FUNC_11(VAR_16, &VAR_8)) {
  FUNC_14("Cuse: Cannot set cdevpriv.\n");

  FUNC_7(VAR_17);
  FUNC_12(VAR_16, VAR_4);
  return (VAR_3);
 }
 VAR_16->fflags = VAR_11;
 VAR_16->server_dev = VAR_15;
 VAR_16->server = VAR_17;

 for (VAR_20 = 0; VAR_20 != VAR_0; VAR_20++) {

  VAR_14 = &VAR_16->cmds[VAR_20];

  VAR_14->sub.dev = VAR_18;
  VAR_14->sub.command = VAR_20;
  VAR_14->client = VAR_16;

  FUNC_15(&VAR_14->sx, "cuse-client-sx");
  FUNC_9(&VAR_14->cv, "cuse-client-cv");
 }

 FUNC_6();




 FUNC_0(&VAR_17->hcli, VAR_16, VAR_9);


 if ((VAR_17->is_closing != 0) || (VAR_10->si_drv1 == ((void*)0))) {
  VAR_19 = VAR_2;
 } else {
  VAR_19 = 0;
 }
 FUNC_8();

 if (VAR_19) {
  FUNC_10();
  return (VAR_19);
 }
 VAR_14 = &VAR_16->cmds[VAR_1];

 FUNC_3(VAR_14);

 FUNC_6();
 FUNC_2(VAR_14, 0, 0, VAR_16->fflags, 0);

 VAR_19 = FUNC_1(VAR_14, 0, 0);
 FUNC_8();

 if (VAR_19 < 0) {
  VAR_19 = FUNC_5(VAR_19);
 } else {
  VAR_19 = 0;
 }

 FUNC_4(VAR_14);

 if (VAR_19)
  FUNC_10();

 return (VAR_19);
}
