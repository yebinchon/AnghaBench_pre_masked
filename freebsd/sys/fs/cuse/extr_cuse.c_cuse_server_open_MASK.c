
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_3__ {int si_note; } ;
struct cuse_server {int refs; TYPE_1__ selinfo; int cv; int hmem; int hcli; int hdev; int head; int pid; } ;
struct cdev {int dummy; } ;
struct TYPE_4__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cuse_server*,int ) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (struct cuse_server*,int *) ;
 int VAR_8 ;
 int FUNC_6 (struct cuse_server*,int ) ;
 int FUNC_7 (int *,int *) ;
 struct cuse_server* FUNC_8 (int,int ,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(struct cdev *VAR_9, int VAR_10, int VAR_11, struct thread *VAR_12)
{
 struct cuse_server *VAR_13;

 VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_1, VAR_2 | VAR_3);
 if (VAR_13 == ((void*)0))
  return (VAR_0);

 if (FUNC_5(VAR_13, &VAR_6)) {
  FUNC_9("Cuse: Cannot set cdevpriv.\n");
  FUNC_6(VAR_13, VAR_1);
  return (VAR_0);
 }

 VAR_13->pid = VAR_4->p_pid;

 FUNC_0(&VAR_13->head);
 FUNC_0(&VAR_13->hdev);
 FUNC_0(&VAR_13->hcli);
 FUNC_0(&VAR_13->hmem);

 FUNC_4(&VAR_13->cv, "cuse-server-cv");

 FUNC_7(&VAR_13->selinfo.si_note, &VAR_5);

 FUNC_2();
 VAR_13->refs++;
 FUNC_1(&VAR_7, VAR_13, VAR_8);
 FUNC_3();

 return (0);
}
