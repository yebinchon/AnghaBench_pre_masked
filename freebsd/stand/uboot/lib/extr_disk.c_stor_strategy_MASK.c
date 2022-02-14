
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disk_devdesc {size_t d_offset; } ;
typedef size_t daddr_t ;
struct TYPE_2__ {size_t bsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (struct disk_devdesc*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct disk_devdesc*,size_t,size_t,char*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_4, int VAR_5, daddr_t VAR_6, size_t VAR_7,
    char *VAR_8, size_t *VAR_9)
{
 struct disk_devdesc *VAR_10 = (struct disk_devdesc *)VAR_4;
 daddr_t VAR_11;
 int VAR_12;

 VAR_5 &= VAR_2;
 if (VAR_5 != VAR_3) {
  FUNC_1("write attempt, operation not supported!\n");
  return (VAR_1);
 }

 if (VAR_7 % FUNC_0(VAR_10).bsize) {
  FUNC_1("size=%zu not multiple of device "
      "block size=%d\n",
      VAR_7, FUNC_0(VAR_10).bsize);
  return (VAR_0);
 }
 VAR_11 = VAR_7 / FUNC_0(VAR_10).bsize;
 if (VAR_9)
  *VAR_9 = 0;

 VAR_12 = FUNC_2(VAR_10, VAR_6 + VAR_10->d_offset, VAR_11, VAR_8);
 if (!VAR_12 && VAR_9)
  *VAR_9 = VAR_7;

 return (VAR_12);
}
