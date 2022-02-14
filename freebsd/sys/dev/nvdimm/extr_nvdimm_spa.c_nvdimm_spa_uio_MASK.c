
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_memattr_t ;
struct vm_page {int dummy; } ;
struct uio {int uio_resid; scalar_t__ uio_offset; } ;
struct nvdimm_spa_dev {scalar_t__ spa_len; int spa_phys_base; int * spa_kva; int spa_memattr; } ;
typedef int off_t ;
typedef int m ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_page*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,struct uio*) ;
 int FUNC_3 (struct vm_page**,int,int,struct uio*) ;
 int FUNC_4 (struct vm_page*,int ,int ) ;
 int FUNC_5 (struct vm_page*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct nvdimm_spa_dev *VAR_3, struct uio *VAR_4)
{
 struct vm_page VAR_5, *VAR_6;
 off_t VAR_7;
 vm_memattr_t VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = 0;
 if (VAR_3->spa_kva == ((void*)0)) {
  VAR_8 = VAR_3->spa_memattr;
  FUNC_0(&VAR_5, sizeof(VAR_5));
  FUNC_4(&VAR_5, 0, VAR_8);
  VAR_6 = &VAR_5;
  while (VAR_4->uio_resid > 0) {
   if (VAR_4->uio_offset >= VAR_3->spa_len)
    break;
   VAR_7 = VAR_3->spa_phys_base + VAR_4->uio_offset;
   FUNC_5(&VAR_5, FUNC_1(VAR_7), VAR_8);
   VAR_10 = VAR_2;
   if (VAR_10 > VAR_4->uio_resid)
    VAR_10 = VAR_4->uio_resid;
   VAR_9 = FUNC_3(&VAR_6, VAR_7 & VAR_1, VAR_10, VAR_4);
   if (VAR_9 != 0)
    break;
  }
 } else {
  while (VAR_4->uio_resid > 0) {
   if (VAR_4->uio_offset >= VAR_3->spa_len)
    break;
   VAR_10 = VAR_0;
   if (VAR_10 > VAR_4->uio_resid)
    VAR_10 = VAR_4->uio_resid;
   if (VAR_4->uio_offset + VAR_10 > VAR_3->spa_len)
    VAR_10 = VAR_3->spa_len - VAR_4->uio_offset;
   VAR_9 = FUNC_2((char *)VAR_3->spa_kva + VAR_4->uio_offset,
       VAR_10, VAR_4);
   if (VAR_9 != 0)
    break;
  }
 }
 return (VAR_9);
}
