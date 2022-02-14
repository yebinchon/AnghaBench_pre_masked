
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_input {int fd; int * buf; int * id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct port_input *VAR_0)
{
 if (VAR_0->id != ((void*)0)) {
  FUNC_1(VAR_0->id);
  VAR_0->id = ((void*)0);
 }
 if (VAR_0->fd >= 0) {
  (void)FUNC_0(VAR_0->fd);
  VAR_0->fd = -1;
 }
 if (VAR_0->buf != ((void*)0)) {
  FUNC_2(VAR_0->buf);
  VAR_0->buf = ((void*)0);
 }
}
