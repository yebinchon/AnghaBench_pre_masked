
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_fd; } ;
typedef TYPE_1__ vnode_t ;
typedef int uint64_t ;
struct stat64 {int st_size; } ;
struct _buf {scalar_t__ _fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct stat64*) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int *) ;

int
FUNC_2(struct _buf *VAR_1, uint64_t *VAR_2)
{
 struct stat64 VAR_3;
 vnode_t *VAR_4 = (vnode_t *)VAR_1->_fd;

 if (FUNC_0(VAR_4->v_fd, &VAR_3) == -1) {
  FUNC_1(VAR_4, 0, ((void*)0), ((void*)0));
  return (VAR_0);
 }
 *VAR_2 = VAR_3.st_size;
 return (0);
}
