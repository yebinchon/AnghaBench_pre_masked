
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ctl_be_ramdisk_lun {scalar_t__ cap_bytes; int indir; int page_lock; scalar_t__ pblocksize; int cap_used; int ** pages; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int ** VAR_3 ;
 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ctl_be_ramdisk_lun *VAR_4, off_t VAR_5)
{
 uint8_t ***VAR_6;
 off_t VAR_7;
 int VAR_8;

 if (VAR_4->cap_bytes == 0)
  return;
 FUNC_1(&VAR_4->page_lock);
 VAR_6 = &VAR_4->pages;
 for (VAR_8 = (VAR_4->indir - 1) * VAR_1; VAR_8 >= 0; VAR_8 -= VAR_1) {
  if (*VAR_6 == ((void*)0))
   goto noindir;
  VAR_7 = VAR_5 >> VAR_8;
  VAR_6 = (uint8_t ***)&(*VAR_6)[VAR_7];
  VAR_5 -= VAR_7 << VAR_8;
 }
 if (*VAR_6 == VAR_2) {
  VAR_4->cap_used -= VAR_4->pblocksize;
  *VAR_6 = VAR_3;
 } else if (*VAR_6 != VAR_3) {
  FUNC_0(*VAR_6, VAR_0);
  VAR_4->cap_used -= VAR_4->pblocksize;
  *VAR_6 = VAR_3;
 }
noindir:
 FUNC_2(&VAR_4->page_lock);
}
