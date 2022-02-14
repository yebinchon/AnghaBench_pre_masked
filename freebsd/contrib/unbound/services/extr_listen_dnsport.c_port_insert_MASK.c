
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listen_port {int fd; int ftype; struct listen_port* next; } ;
typedef enum listen_type { ____Placeholder_listen_type } listen_type ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct listen_port** VAR_0, int VAR_1, enum listen_type VAR_2)
{
 struct listen_port* VAR_3 = (struct listen_port*)FUNC_0(
  sizeof(struct listen_port));
 if(!VAR_3)
  return 0;
 VAR_3->next = *VAR_0;
 VAR_3->fd = VAR_1;
 VAR_3->ftype = VAR_2;
 *VAR_0 = VAR_3;
 return 1;
}
