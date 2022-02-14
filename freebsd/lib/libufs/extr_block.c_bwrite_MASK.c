
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
 int FUNC_3 (void*,void const*,size_t) ;
 int FUNC_4 (int ,void const*,size_t,int ) ;
 int FUNC_5 (struct uufsd*) ;

ssize_t
FUNC_6(struct uufsd *VAR_0, ufs2_daddr_t VAR_1, const void *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;
 int VAR_5;
 void *VAR_6 = ((void*)0);

 FUNC_0(VAR_0, ((void*)0));

 VAR_5 = FUNC_5(VAR_0);
 if (VAR_5 == -1) {
  FUNC_0(VAR_0, "failed to open disk for writing");
  return (-1);
 }







 if (((intptr_t)VAR_2) & 0x3f) {
  VAR_6 = FUNC_2(VAR_3);
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_0, "allocate bounce buffer");
   return (-1);
  }
  FUNC_3(VAR_6, VAR_2, VAR_3);
  VAR_2 = VAR_6;
 }
 VAR_4 = FUNC_4(VAR_0->d_fd, VAR_2, VAR_3, (off_t)(VAR_1 * VAR_0->d_bsize));
 if (VAR_6 != ((void*)0))
  FUNC_1(VAR_6);
 if (VAR_4 == -1) {
  FUNC_0(VAR_0, "write error to block device");
  return (-1);
 }
 if ((size_t)VAR_4 != VAR_3) {
  FUNC_0(VAR_0, "short write to block device");
  return (-1);
 }

 return (VAR_4);
}
