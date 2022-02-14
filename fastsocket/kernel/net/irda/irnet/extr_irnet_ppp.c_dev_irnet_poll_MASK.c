
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irnet_socket {int ppp_open; } ;
struct file {scalar_t__ private_data; } ;
typedef int poll_table ;
typedef struct irnet_socket irnet_socket ;


 int FUNC_0 (int ,unsigned int,int ,char*) ;
 int FUNC_1 (int ,char*,struct file*,struct irnet_socket*) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_3 (struct irnet_socket*,struct file*,int *) ;

__attribute__((used)) static unsigned int
FUNC_4(struct file * VAR_4,
        poll_table * VAR_5)
{
  irnet_socket * VAR_6 = (struct irnet_socket *) VAR_4->private_data;
  unsigned int VAR_7;

  FUNC_1(VAR_1, "(file=0x%p, ap=0x%p)\n",
  VAR_4, VAR_6);

  VAR_7 = VAR_2 | VAR_3;
  FUNC_0(VAR_6 == ((void*)0), VAR_7, VAR_0, "ap is NULL !!!\n");


  if(!VAR_6->ppp_open)
    VAR_7 |= FUNC_3(VAR_6, VAR_4, VAR_5);

  FUNC_2(VAR_1, " - mask=0x%X\n", VAR_7);
  return(VAR_7);
}
