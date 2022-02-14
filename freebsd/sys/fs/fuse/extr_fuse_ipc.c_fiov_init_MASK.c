
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fuse_iov {int credit; int allocated_size; int base; scalar_t__ len; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(struct fuse_iov *VAR_4, size_t VAR_5)
{
 uint32_t VAR_6 = FUNC_0(VAR_5);

 VAR_4->len = 0;

 VAR_4->base = FUNC_1(VAR_6, VAR_0, VAR_1 | VAR_2);

 VAR_4->allocated_size = VAR_6;
 VAR_4->credit = VAR_3;
}
