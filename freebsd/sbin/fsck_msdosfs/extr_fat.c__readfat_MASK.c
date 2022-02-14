
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct bootblock {int FATsecs; int bpbBytesPerSec; int bpbResSectors; } ;
typedef int off_t ;


 int VAR_0 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int,int *,int) ;

__attribute__((used)) static int
FUNC_5(int VAR_1, struct bootblock *VAR_2, u_int VAR_3, u_char **VAR_4)
{
 off_t VAR_5;

 *VAR_4 = FUNC_0(VAR_2->FATsecs, VAR_2->bpbBytesPerSec);
 if (*VAR_4 == ((void*)0)) {
  FUNC_3("No space for FAT sectors (%zu)",
      (size_t)VAR_2->FATsecs);
  return 0;
 }

 VAR_5 = VAR_2->bpbResSectors + VAR_3 * VAR_2->FATsecs;
 VAR_5 *= VAR_2->bpbBytesPerSec;

 if (FUNC_2(VAR_1, VAR_5, VAR_0) != VAR_5) {
  FUNC_3("Unable to read FAT");
  goto err;
 }

 if ((size_t)FUNC_4(VAR_1, *VAR_4, VAR_2->FATsecs * VAR_2->bpbBytesPerSec)
     != VAR_2->FATsecs * VAR_2->bpbBytesPerSec) {
  FUNC_3("Unable to read FAT");
  goto err;
 }

 return 1;

    err:
 FUNC_1(*VAR_4);
 return 0;
}
