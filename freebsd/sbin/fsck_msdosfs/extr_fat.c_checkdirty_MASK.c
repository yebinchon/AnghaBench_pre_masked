
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct bootblock {scalar_t__ ClustMask; size_t bpbResSectors; size_t bpbBytesPerSec; int bpbMedia; } ;
typedef size_t off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 size_t FUNC_1 (int,size_t,int ) ;
 int* FUNC_2 (size_t) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int,int*,size_t) ;

int
FUNC_5(int VAR_3, struct bootblock *VAR_4)
{
 off_t VAR_5;
 u_char *VAR_6;
 int VAR_7 = 0;
 size_t VAR_8;

 if (VAR_4->ClustMask != VAR_0 && VAR_4->ClustMask != VAR_1)
  return 0;

 VAR_5 = VAR_4->bpbResSectors;
 VAR_5 *= VAR_4->bpbBytesPerSec;

 VAR_6 = FUNC_2(VAR_8 = VAR_4->bpbBytesPerSec);
 if (VAR_6 == ((void*)0)) {
  FUNC_3("No space for FAT sectors (%zu)", VAR_8);
  return 1;
 }

 if (FUNC_1(VAR_3, VAR_5, VAR_2) != VAR_5) {
  FUNC_3("Unable to read FAT");
  goto err;
 }

 if ((size_t)FUNC_4(VAR_3, VAR_6, VAR_4->bpbBytesPerSec) !=
     VAR_4->bpbBytesPerSec) {
  FUNC_3("Unable to read FAT");
  goto err;
 }





 if (VAR_6[0] != VAR_4->bpbMedia || VAR_6[1] != 0xff)
  goto err;
 if (VAR_4->ClustMask == VAR_0) {
  if ((VAR_6[2] & 0xf8) != 0xf8 || (VAR_6[3] & 0x3f) != 0x3f)
   goto err;
 } else {
  if (VAR_6[2] != 0xff || (VAR_6[3] & 0x0f) != 0x0f
      || (VAR_6[4] & 0xf8) != 0xf8 || VAR_6[5] != 0xff
      || VAR_6[6] != 0xff || (VAR_6[7] & 0x03) != 0x03)
   goto err;
 }




 if (VAR_4->ClustMask == VAR_0) {
  if ((VAR_6[3] & 0xc0) == 0xc0)
   VAR_7 = 1;
 } else {
  if ((VAR_6[7] & 0x0c) == 0x0c)
   VAR_7 = 1;
 }

err:
 FUNC_0(VAR_6);
 return VAR_7;
}
