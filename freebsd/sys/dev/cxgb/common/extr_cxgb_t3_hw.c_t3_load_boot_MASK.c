
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {unsigned int length; scalar_t__ signature; } ;
typedef TYPE_1__ boot_header_t ;
typedef int adapter_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int *,unsigned int,unsigned int) ;
 int FUNC_4 (int *,unsigned int,unsigned int,int *,int ) ;

int FUNC_5(adapter_t *VAR_7, u8 *VAR_8, unsigned int VAR_9)
{
 boot_header_t *VAR_10 = (boot_header_t *)VAR_8;
 int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13 = VAR_0 >> 16;
 unsigned int VAR_14 = (VAR_0 + VAR_9 - 1) >> 16;






 if (VAR_9 < VAR_2 || VAR_9 > VAR_1) {
  FUNC_0(VAR_7, "boot image too small/large\n");
  return -VAR_5;
 }
 if (FUNC_1(*(u16*)VAR_10->signature) != VAR_3) {
  FUNC_0(VAR_7, "boot image missing signature\n");
  return -VAR_6;
 }
 if (VAR_10->length * VAR_4 != VAR_9) {
  FUNC_0(VAR_7, "boot image header length != image length\n");
  return -VAR_6;
 }

 VAR_11 = FUNC_3(VAR_7, VAR_13, VAR_14);
 if (VAR_11)
  goto out;

 for (VAR_12 = VAR_0; VAR_9; ) {
  unsigned int VAR_15 = FUNC_2(VAR_9, 256U);

  VAR_11 = FUNC_4(VAR_7, VAR_12, VAR_15, VAR_8, 0);
  if (VAR_11)
   goto out;

  VAR_12 += VAR_15;
  VAR_8 += VAR_15;
  VAR_9 -= VAR_15;
 }

out:
 if (VAR_11)
  FUNC_0(VAR_7, "boot image download failed, error %d\n", VAR_11);
 return VAR_11;
}
