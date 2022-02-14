
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct uio {int uio_iovcnt; int uio_segflg; int * uio_iov; } ;
struct mntarg {int len; int error; int * v; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mntarg*) ;
 int FUNC_2 (int ,int ,struct uio*) ;

int
FUNC_3(struct mntarg *VAR_2, uint64_t VAR_3)
{
 struct uio VAR_4;
 int VAR_5;

 FUNC_0(VAR_2 != ((void*)0), ("kernel_mount NULL ma"));
 FUNC_0(VAR_2->v != ((void*)0), ("kernel_mount NULL ma->v"));
 FUNC_0(!(VAR_2->len & 1), ("kernel_mount odd ma->len (%d)", VAR_2->len));

 VAR_4.uio_iov = VAR_2->v;
 VAR_4.uio_iovcnt = VAR_2->len;
 VAR_4.uio_segflg = VAR_0;

 VAR_5 = VAR_2->error;
 if (!VAR_5)
  VAR_5 = FUNC_2(VAR_1, VAR_3, &VAR_4);
 FUNC_1(VAR_2);
 return (VAR_5);
}
