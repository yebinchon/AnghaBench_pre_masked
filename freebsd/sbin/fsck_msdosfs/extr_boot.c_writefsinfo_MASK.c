
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct bootblock {int bpbFSInfo; int bpbBytesPerSec; int FSFree; int FSNext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,scalar_t__*,int) ;
 int FUNC_3 (int,scalar_t__*,int) ;

int
FUNC_4(int VAR_3, struct bootblock *VAR_4)
{
 u_char VAR_5[2 * VAR_0];

 if (FUNC_0(VAR_3, VAR_4->bpbFSInfo * VAR_4->bpbBytesPerSec, VAR_2)
     != VAR_4->bpbFSInfo * VAR_4->bpbBytesPerSec
     || FUNC_2(VAR_3, VAR_5, sizeof VAR_5) != sizeof VAR_5) {
  FUNC_1("could not read fsinfo block");
  return VAR_1;
 }
 VAR_5[0x1e8] = (u_char)VAR_4->FSFree;
 VAR_5[0x1e9] = (u_char)(VAR_4->FSFree >> 8);
 VAR_5[0x1ea] = (u_char)(VAR_4->FSFree >> 16);
 VAR_5[0x1eb] = (u_char)(VAR_4->FSFree >> 24);
 VAR_5[0x1ec] = (u_char)VAR_4->FSNext;
 VAR_5[0x1ed] = (u_char)(VAR_4->FSNext >> 8);
 VAR_5[0x1ee] = (u_char)(VAR_4->FSNext >> 16);
 VAR_5[0x1ef] = (u_char)(VAR_4->FSNext >> 24);
 if (FUNC_0(VAR_3, VAR_4->bpbFSInfo * VAR_4->bpbBytesPerSec, VAR_2)
     != VAR_4->bpbFSInfo * VAR_4->bpbBytesPerSec
     || FUNC_3(VAR_3, VAR_5, sizeof VAR_5)
     != sizeof VAR_5) {
  FUNC_1("Unable to write bpbFSInfo");
  return VAR_1;
 }
 return 0;
}
