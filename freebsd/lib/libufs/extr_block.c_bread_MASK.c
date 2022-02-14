
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs2_daddr_t ;
struct uufsd {int d_bsize; int d_fd; } ;
typedef int ssize_t ;
typedef int off_t ;


 int FUNC_0 (struct uufsd*,char*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (void*,void*,size_t) ;
 int FUNC_4 (void*,int ,size_t) ;
 int FUNC_5 (int ,void*,size_t,int ) ;

ssize_t
FUNC_6(struct uufsd *VAR_0, ufs2_daddr_t VAR_1, void *VAR_2, size_t VAR_3)
{
 void *VAR_4;
 ssize_t VAR_5;

 FUNC_0(VAR_0, ((void*)0));

 VAR_4 = VAR_2;






 if (((intptr_t)VAR_2) & 0x3f) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4 == ((void*)0)) {
   FUNC_0(VAR_0, "allocate bounce buffer");
   goto fail;
  }
 }
 VAR_5 = FUNC_5(VAR_0->d_fd, VAR_4, VAR_3, (off_t)(VAR_1 * VAR_0->d_bsize));
 if (VAR_5 == -1) {
  FUNC_0(VAR_0, "read error from block device");
  goto fail;
 }
 if (VAR_5 == 0) {
  FUNC_0(VAR_0, "end of file from block device");
  goto fail;
 }
 if ((size_t)VAR_5 != VAR_3) {
  FUNC_0(VAR_0, "short read or read error from block device");
  goto fail;
 }
 if (VAR_4 != VAR_2) {
  FUNC_3(VAR_2, VAR_4, VAR_3);
  FUNC_1(VAR_4);
 }
 return (VAR_5);
fail: FUNC_4(VAR_2, 0, VAR_3);
 if (VAR_4 != VAR_2) {
  FUNC_1(VAR_4);
 }
 return (-1);
}
