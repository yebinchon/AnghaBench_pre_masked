
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int blocksize; } ;
struct ctl_be_ramdisk_lun {int cap_bytes; int cap_used; int page_lock; TYPE_1__ cbe_lun; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static uint64_t
FUNC_3(void *VAR_1, const char *VAR_2)
{
 struct ctl_be_ramdisk_lun *VAR_3 = VAR_1;
 uint64_t VAR_4;

 VAR_4 = VAR_0;
 if (VAR_3->cap_bytes == 0)
  return (VAR_4);
 FUNC_1(&VAR_3->page_lock);
 if (FUNC_0(VAR_2, "blocksused") == 0) {
  VAR_4 = VAR_3->cap_used / VAR_3->cbe_lun.blocksize;
 } else if (FUNC_0(VAR_2, "blocksavail") == 0) {
  VAR_4 = (VAR_3->cap_bytes - VAR_3->cap_used) /
      VAR_3->cbe_lun.blocksize;
 }
 FUNC_2(&VAR_3->page_lock);
 return (VAR_4);
}
