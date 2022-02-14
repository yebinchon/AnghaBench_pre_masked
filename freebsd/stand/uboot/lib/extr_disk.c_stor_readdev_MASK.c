
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct disk_devdesc {int dummy; } ;
typedef size_t lbasize_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct disk_devdesc*) ;
 int FUNC_1 (char*,int,size_t,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,size_t,scalar_t__,size_t*) ;

__attribute__((used)) static int
FUNC_4(struct disk_devdesc *VAR_1, daddr_t VAR_2, size_t VAR_3, char *VAR_4)
{
 lbasize_t VAR_5;
 int VAR_6;

 FUNC_1("reading blk=%d size=%d @ 0x%08x\n", (int)VAR_2, VAR_3, (uint32_t)VAR_4);

 VAR_6 = FUNC_3(FUNC_0(VAR_1).handle, VAR_4, VAR_3, VAR_2, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_2("read failed, error=%d\n", VAR_6);
  return (VAR_0);
 }

 if (VAR_5 != VAR_3) {
  FUNC_2("real size != size\n");
  VAR_6 = VAR_0;
 }

 return (VAR_6);
}
