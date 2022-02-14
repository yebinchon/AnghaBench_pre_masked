
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mtu; int hdrlen; int * ops; struct irnet_socket* private; } ;
struct irnet_socket {int mru; unsigned int* xaccm; unsigned int raccm; int event_index; TYPE_1__ chan; scalar_t__ ppp_open; struct file* file; } ;
struct inode {int dummy; } ;
struct file {struct irnet_socket* private_data; } ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,char*,struct file*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,struct irnet_socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct irnet_socket*) ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct irnet_socket*) ;
 struct irnet_socket* FUNC_7 (int,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(struct inode * VAR_10,
        struct file * VAR_11)
{
  struct irnet_socket * VAR_12;
  int VAR_13;

  FUNC_1(VAR_4, "(file=0x%p)\n", VAR_11);
  VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_5);
  FUNC_0(VAR_12 == ((void*)0), -VAR_1, VAR_3, "Can't allocate struct irnet...\n");

  FUNC_8();

  VAR_12->file = VAR_11;


  VAR_12->ppp_open = 0;
  VAR_12->chan.private = VAR_12;
  VAR_12->chan.ops = &VAR_9;
  VAR_12->chan.mtu = (2048 - VAR_7 - 2 - VAR_6);
  VAR_12->chan.hdrlen = 2 + VAR_7;

  VAR_12->mru = (2048 - VAR_7 - 2 - VAR_6);
  VAR_12->xaccm[0] = ~0U;
  VAR_12->xaccm[3] = 0x60000000U;
  VAR_12->raccm = ~0U;


  VAR_13 = FUNC_5(VAR_12);
  if(VAR_13)
    {
      FUNC_2(VAR_3, "Can't setup IrDA link...\n");
      FUNC_6(VAR_12);
      FUNC_9();
      return VAR_13;
    }


  VAR_12->event_index = VAR_8.index;


  VAR_11->private_data = VAR_12;

  FUNC_3(VAR_4, " - ap=0x%p\n", VAR_12);
  FUNC_9();
  return 0;
}
