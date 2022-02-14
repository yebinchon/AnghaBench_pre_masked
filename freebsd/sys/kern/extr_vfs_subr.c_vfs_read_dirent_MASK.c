
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct vop_readdir_args {int* a_ncookies; int ** a_cookies; TYPE_1__* a_uio; } ;
struct dirent {scalar_t__ d_reclen; } ;
typedef int off_t ;
struct TYPE_2__ {scalar_t__ uio_resid; } ;


 int VAR_0 ;
 int FUNC_0 (int **,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,int ) ;
 int * FUNC_2 (int *,int,int ,int) ;
 int FUNC_3 (struct dirent*,scalar_t__,TYPE_1__*) ;

int
FUNC_4(struct vop_readdir_args *VAR_4, struct dirent *VAR_5, off_t VAR_6)
{
 int VAR_7;

 if (VAR_5->d_reclen > VAR_4->a_uio->uio_resid)
  return (VAR_0);
 VAR_7 = FUNC_3(VAR_5, VAR_5->d_reclen, VAR_4->a_uio);
 if (VAR_7) {
  if (VAR_4->a_ncookies != ((void*)0)) {
   if (VAR_4->a_cookies != ((void*)0))
    FUNC_1(VAR_4->a_cookies, VAR_1);
   VAR_4->a_cookies = ((void*)0);
   *VAR_4->a_ncookies = 0;
  }
  return (VAR_7);
 }
 if (VAR_4->a_ncookies == ((void*)0))
  return (0);

 FUNC_0(VAR_4->a_cookies,
     ("NULL ap->a_cookies value with non-NULL ap->a_ncookies!"));

 *VAR_4->a_cookies = FUNC_2(*VAR_4->a_cookies,
     (*VAR_4->a_ncookies + 1) * sizeof(u_long), VAR_1, VAR_2 | VAR_3);
 (*VAR_4->a_cookies)[*VAR_4->a_ncookies] = VAR_6;
 *VAR_4->a_ncookies += 1;
 return (0);
}
