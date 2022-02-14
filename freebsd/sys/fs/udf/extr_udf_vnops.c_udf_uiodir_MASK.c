
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct udf_uiodir {scalar_t__ acookies; scalar_t__ ncookies; int dirent; scalar_t__ eofflag; int * cookies; } ;


 int FUNC_0 (int ,int,struct uio*) ;

__attribute__((used)) static int
FUNC_1(struct udf_uiodir *VAR_0, int VAR_1, struct uio *VAR_2, long VAR_3)
{
 if (VAR_0->cookies != ((void*)0)) {
  if (++VAR_0->acookies > VAR_0->ncookies) {
   VAR_0->eofflag = 0;
   return (-1);
  }
  *VAR_0->cookies++ = VAR_3;
 }

 if (VAR_2->uio_resid < VAR_1) {
  VAR_0->eofflag = 0;
  return (-1);
 }

 return (FUNC_0(VAR_0->dirent, VAR_1, VAR_2));
}
