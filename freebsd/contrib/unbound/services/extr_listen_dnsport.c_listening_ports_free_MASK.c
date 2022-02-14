
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listen_port {int fd; struct listen_port* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct listen_port*) ;

void FUNC_3(struct listen_port* VAR_0)
{
 struct listen_port* VAR_1;
 while(VAR_0) {
  VAR_1 = VAR_0->next;
  if(VAR_0->fd != -1) {

   FUNC_0(VAR_0->fd);



  }
  FUNC_2(VAR_0);
  VAR_0 = VAR_1;
 }
}
