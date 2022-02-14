
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uio_resid; int uio_offset; } ;
typedef TYPE_1__ uio_t ;
typedef void* uint64_t ;
struct vop_readdir_args {scalar_t__* a_ncookies; } ;
struct dirent {char* d_name; int d_namlen; int d_reclen; void* d_type; void* d_fileno; } ;
typedef int off_t ;
typedef int entry ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dirent*) ;
 int FUNC_2 (struct vop_readdir_args*,struct dirent*,int) ;

__attribute__((used)) static int
FUNC_3(uint64_t VAR_2, uint64_t VAR_3, struct vop_readdir_args *VAR_4,
    uio_t *VAR_5, off_t *VAR_6)
{
 struct dirent VAR_7;
 int VAR_8;


 if (VAR_4->a_ncookies != ((void*)0))
  *VAR_4->a_ncookies = 0;

 if (VAR_5->uio_resid < sizeof(VAR_7))
  return (FUNC_0(VAR_1));

 if (VAR_5->uio_offset < 0)
  return (FUNC_0(VAR_1));
 if (VAR_5->uio_offset == 0) {
  VAR_7.d_fileno = VAR_3;
  VAR_7.d_type = VAR_0;
  VAR_7.d_name[0] = '.';
  VAR_7.d_namlen = 1;
  VAR_7.d_reclen = sizeof(VAR_7);
  FUNC_1(&VAR_7);
  VAR_8 = FUNC_2(VAR_4, &VAR_7, VAR_5->uio_offset);
  if (VAR_8 != 0)
   return (FUNC_0(VAR_8));
 }

 if (VAR_5->uio_offset < sizeof(VAR_7))
  return (FUNC_0(VAR_1));
 if (VAR_5->uio_offset == sizeof(VAR_7)) {
  VAR_7.d_fileno = VAR_2;
  VAR_7.d_type = VAR_0;
  VAR_7.d_name[0] = '.';
  VAR_7.d_name[1] = '.';
  VAR_7.d_namlen = 2;
  VAR_7.d_reclen = sizeof(VAR_7);
  FUNC_1(&VAR_7);
  VAR_8 = FUNC_2(VAR_4, &VAR_7, VAR_5->uio_offset);
  if (VAR_8 != 0)
   return (FUNC_0(VAR_8));
 }

 if (VAR_6 != ((void*)0))
  *VAR_6 = 2 * sizeof(VAR_7);
 return (0);
}
