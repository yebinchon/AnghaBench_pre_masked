
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 void* VAR_0 ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, size_t VAR_2)
{

 VAR_0 -= VAR_2;
 if (VAR_0 != VAR_1) {
  FUNC_0("ZFS: zfs_alloc()/zfs_free() mismatch");
 }
}
