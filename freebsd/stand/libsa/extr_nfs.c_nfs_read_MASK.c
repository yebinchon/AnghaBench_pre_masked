
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct open_file {scalar_t__ f_fsdata; } ;
struct nfs_iodesc {scalar_t__ off; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfs_iodesc*,scalar_t__,void*,size_t) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;

int
FUNC_4(struct open_file *VAR_2, void *VAR_3, size_t VAR_4, size_t *VAR_5)
{
 struct nfs_iodesc *VAR_6 = (struct nfs_iodesc *)VAR_2->f_fsdata;
 ssize_t VAR_7;
 char *VAR_8 = VAR_3;






 while ((int)VAR_4 > 0) {
  FUNC_3(16);
  VAR_7 = FUNC_0(VAR_6, VAR_6->off, (void *)VAR_8, VAR_4);

  if (VAR_7 == -1) {




   return (VAR_1);
  }
  if (VAR_7 == 0) {




   goto ret;
  }
  VAR_6->off += VAR_7;
  VAR_8 += VAR_7;
  VAR_4 -= VAR_7;
 }
ret:
 if (VAR_5)
  *VAR_5 = VAR_4;

 return (0);
}
