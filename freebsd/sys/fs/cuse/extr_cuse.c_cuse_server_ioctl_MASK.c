
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cuse_command {int dummy; } ;
struct TYPE_5__ {int * tqe_prev; } ;
struct cuse_server_dev {int error; int got_signal; struct cuse_dev* user_dev; TYPE_4__* kern_dev; struct cuse_server* server; struct cuse_client* client; int cv; int command; int * entered; struct cuse_command sub; TYPE_1__ entry; } ;
struct cuse_server {int hdev; int head; int is_closing; int cv; } ;
struct cuse_dev {int dummy; } ;
struct cuse_data_chunk {int peer_ptr; } ;
struct cuse_create_dev {int permissions; int * devname; int group_id; int user_id; struct cuse_dev* dev; } ;
struct cuse_client_command {int error; int got_signal; struct cuse_dev* user_dev; TYPE_4__* kern_dev; struct cuse_server* server; struct cuse_client* client; int cv; int command; int * entered; struct cuse_command sub; TYPE_1__ entry; } ;
struct cuse_client {TYPE_3__* cmds; } ;
struct cuse_alloc_info {int alloc_nr; int page_count; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_8__ {struct cuse_server_dev* si_drv1; } ;
struct TYPE_6__ {uintptr_t per_file_handle; } ;
struct TYPE_7__ {TYPE_2__ sub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct cuse_server_dev* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cuse_server_dev*,int ) ;
 struct cuse_server_dev* FUNC_3 (struct cuse_server_dev*,int ) ;
 int FUNC_4 (int *,struct cuse_server_dev*,int ) ;
 int * VAR_16 ;
 int FUNC_5 (struct cuse_server*,int) ;
 int VAR_17 ;
 int FUNC_6 (struct cuse_server*,int) ;
 int FUNC_7 () ;
 int VAR_18 ;
 int FUNC_8 (struct cuse_server*,int ,int ) ;
 int FUNC_9 (struct cuse_server_dev*,struct cuse_data_chunk*,int) ;
 struct cuse_server_dev* FUNC_10 (struct cuse_server*,int *) ;
 int FUNC_11 (struct cuse_server_dev*) ;
 int FUNC_12 (struct cuse_server*,int ) ;
 int FUNC_13 (struct cuse_server**) ;
 int FUNC_14 (struct cuse_server_dev*,struct cuse_data_chunk*,int) ;
 int FUNC_15 (struct cuse_server*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *) ;
 int VAR_19 ;
 int FUNC_20 (struct cuse_server_dev*,int ) ;
 TYPE_4__* FUNC_21 (int ,int *,int ,int *,int ,int ,int,char*,int *) ;
 struct cuse_server_dev* FUNC_22 (int,int ,int) ;
 int FUNC_23 (int *,int ) ;

__attribute__((used)) static int
FUNC_24(struct cdev *VAR_20, unsigned long VAR_21,
    caddr_t VAR_22, int VAR_23, struct thread *VAR_24)
{
 struct cuse_server *VAR_25;
 int VAR_26;

 VAR_26 = FUNC_13(&VAR_25);
 if (VAR_26 != 0)
  return (VAR_26);

 switch (VAR_21) {
  struct cuse_client_command *VAR_27;
  struct cuse_client *VAR_28;
  struct cuse_command *VAR_29;
  struct cuse_alloc_info *VAR_30;
  struct cuse_create_dev *VAR_31;
  struct cuse_server_dev *VAR_32;
  struct cuse_data_chunk *VAR_33;
  int VAR_34;

 case 134:
  VAR_29 = (void *)VAR_22;

  FUNC_7();

  while ((VAR_27 = FUNC_1(&VAR_25->head)) == ((void*)0)) {
   VAR_26 = FUNC_19(&VAR_25->cv, &VAR_18);

   if (VAR_25->is_closing)
    VAR_26 = VAR_10;

   if (VAR_26) {
    FUNC_17();
    return (VAR_26);
   }
  }

  FUNC_4(&VAR_25->head, VAR_27, VAR_19);
  VAR_27->entry.tqe_prev = ((void*)0);

  VAR_27->entered = VAR_16;

  *VAR_29 = VAR_27->sub;

  FUNC_17();

  break;

 case 129:

  FUNC_7();
  while ((VAR_27 = FUNC_10(VAR_25, VAR_16)) != ((void*)0)) {


   VAR_27->entered = ((void*)0);
   VAR_27->error = *(int *)VAR_22;
   VAR_27->command = VAR_5;


   FUNC_18(&VAR_27->cv);
  }
  FUNC_17();

  break;

 case 141:

  FUNC_7();
  VAR_34 = FUNC_5(VAR_25,
      FUNC_0(0));
  FUNC_17();

  if (VAR_34 < 0)
   VAR_26 = VAR_9;
  else
   *(int *)VAR_22 = VAR_34;
  break;

 case 140:

  VAR_34 = *(int *)VAR_22;

  VAR_34 = (VAR_34 & VAR_6);

  FUNC_7();
  VAR_34 = FUNC_5(VAR_25, VAR_34);
  FUNC_17();

  if (VAR_34 < 0)
   VAR_26 = VAR_9;
  else
   *(int *)VAR_22 = VAR_34;
  break;

 case 136:

  VAR_34 = *(int *)VAR_22;

  VAR_34 = FUNC_0(VAR_34);

  FUNC_7();
  VAR_26 = FUNC_6(VAR_25, VAR_34);
  FUNC_17();
  break;

 case 135:

  VAR_34 = *(int *)VAR_22;

  FUNC_7();
  VAR_26 = FUNC_6(VAR_25, VAR_34);
  FUNC_17();
  break;

 case 142:

  VAR_30 = (void *)VAR_22;

  if (VAR_30->alloc_nr >= VAR_1) {
   VAR_26 = VAR_9;
   break;
  }
  if (VAR_30->page_count >= VAR_0) {
   VAR_26 = VAR_9;
   break;
  }
  VAR_26 = FUNC_8(VAR_25,
      VAR_30->alloc_nr, VAR_30->page_count);
  break;

 case 137:
  VAR_30 = (void *)VAR_22;

  if (VAR_30->alloc_nr >= VAR_1) {
   VAR_26 = VAR_9;
   break;
  }
  VAR_26 = FUNC_12(VAR_25, VAR_30->alloc_nr);
  break;

 case 133:

  FUNC_7();
  VAR_27 = FUNC_10(VAR_25, VAR_16);

  if (VAR_27 != ((void*)0)) {
   VAR_34 = VAR_27->got_signal;
   VAR_27->got_signal = 0;
  } else {
   VAR_34 = 0;
  }
  FUNC_17();

  *(int *)VAR_22 = VAR_34;

  break;

 case 130:

  FUNC_7();
  VAR_27 = FUNC_10(VAR_25, VAR_16);

  if (VAR_27 != ((void*)0)) {
   VAR_28 = VAR_27->client;
   for (VAR_34 = 0; VAR_34 != VAR_4; VAR_34++) {
    VAR_28->cmds[VAR_34].sub.per_file_handle = *(uintptr_t *)VAR_22;
   }
  } else {
   VAR_26 = VAR_10;
  }
  FUNC_17();
  break;

 case 139:

  VAR_26 = FUNC_23(VAR_16, VAR_15);
  if (VAR_26)
   break;

  VAR_31 = (void *)VAR_22;



  VAR_31->devname[sizeof(VAR_31->devname) - 1] = 0;

  if (VAR_31->devname[0] == 0) {
   VAR_26 = VAR_8;
   break;
  }
  FUNC_16(VAR_31->devname);

  VAR_31->permissions &= 0777;



  VAR_32 = FUNC_22(sizeof(*VAR_32), VAR_12, VAR_13 | VAR_14);

  if (VAR_32 == ((void*)0)) {
   VAR_26 = VAR_9;
   break;
  }
  VAR_32->server = VAR_25;

  VAR_32->user_dev = VAR_31->dev;

  VAR_32->kern_dev = FUNC_21(VAR_11,
      &VAR_17, 0, ((void*)0), VAR_31->user_id, VAR_31->group_id,
      VAR_31->permissions, "%s", VAR_31->devname);

  if (VAR_32->kern_dev == ((void*)0)) {
   FUNC_20(VAR_32, VAR_12);
   VAR_26 = VAR_9;
   break;
  }
  VAR_32->kern_dev->si_drv1 = VAR_32;

  FUNC_7();
  FUNC_2(&VAR_25->hdev, VAR_32, VAR_19);
  FUNC_17();

  break;

 case 138:

  VAR_26 = FUNC_23(VAR_16, VAR_15);
  if (VAR_26)
   break;

  FUNC_7();

  VAR_26 = VAR_8;

  VAR_32 = FUNC_1(&VAR_25->hdev);
  while (VAR_32 != ((void*)0)) {
   if (VAR_32->user_dev == *(struct cuse_dev **)VAR_22) {
    FUNC_4(&VAR_25->hdev, VAR_32, VAR_19);
    FUNC_17();
    FUNC_11(VAR_32);
    FUNC_7();
    VAR_26 = 0;
    VAR_32 = FUNC_1(&VAR_25->hdev);
   } else {
    VAR_32 = FUNC_3(VAR_32, VAR_19);
   }
  }

  FUNC_17();
  break;

 case 128:
 case 132:

  FUNC_7();
  VAR_33 = (struct cuse_data_chunk *)VAR_22;

  VAR_27 = FUNC_10(VAR_25, VAR_16);

  if (VAR_27 == ((void*)0)) {
   VAR_26 = VAR_10;
  } else if (VAR_33->peer_ptr < VAR_3) {
   VAR_26 = VAR_7;
  } else if (VAR_33->peer_ptr < VAR_2) {
   VAR_26 = FUNC_14(VAR_27,
       VAR_33, VAR_21 == 132);
  } else {
   VAR_26 = FUNC_9(VAR_27,
       VAR_33, VAR_21 == 132);
  }
  FUNC_17();
  break;

 case 131:
  FUNC_7();




  FUNC_15(VAR_25);
  FUNC_17();
  break;

 default:
  VAR_26 = VAR_10;
  break;
 }
 return (VAR_26);
}
