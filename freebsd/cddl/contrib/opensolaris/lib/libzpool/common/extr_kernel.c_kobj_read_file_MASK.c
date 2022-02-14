
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct _buf {scalar_t__ _fd; } ;
typedef unsigned int ssize_t ;
typedef int offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*,unsigned int,int ,int ,int ,int ,int ,unsigned int*) ;

int
FUNC_1(struct _buf *VAR_2, char *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 ssize_t VAR_6;

 FUNC_0(VAR_0, (vnode_t *)VAR_2->_fd, VAR_3, VAR_4, (offset_t)VAR_5,
     VAR_1, 0, 0, 0, &VAR_6);

 return (VAR_4 - VAR_6);
}
