
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irnet_socket {int chan; scalar_t__ ppp_open; } ;
struct inode {int dummy; } ;
struct file {int * private_data; } ;
typedef struct irnet_socket irnet_socket ;


 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,char*,struct file*,struct irnet_socket*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct irnet_socket*) ;
 int FUNC_5 (struct irnet_socket*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct inode * VAR_2,
  struct file * VAR_3)
{
  irnet_socket * VAR_4 = (struct irnet_socket *) VAR_3->private_data;

  FUNC_1(VAR_1, "(file=0x%p, ap=0x%p)\n",
  VAR_3, VAR_4);
  FUNC_0(VAR_4 == ((void*)0), 0, VAR_0, "ap is NULL !!!\n");


  VAR_3->private_data = ((void*)0);


  FUNC_4(VAR_4);


  if(VAR_4->ppp_open)
    {
      FUNC_2(VAR_0, "Channel still registered - deregistering !\n");
      VAR_4->ppp_open = 0;
      FUNC_6(&VAR_4->chan);
    }

  FUNC_5(VAR_4);

  FUNC_3(VAR_1, "\n");
  return 0;
}
