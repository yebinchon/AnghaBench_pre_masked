
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zr_bytes; scalar_t__ zr_buf; } ;
typedef TYPE_1__ zut_readdir_t ;
struct TYPE_5__ {int* d_name; scalar_t__ d_reclen; } ;
typedef TYPE_2__ dirent64_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(zut_readdir_t *VAR_0)
{
 dirent64_t *VAR_1;
 char *VAR_2;

 VAR_1 = (dirent64_t *)(intptr_t)VAR_0->zr_buf;
 VAR_2 = (char *)VAR_1;
 while ((char *)VAR_1 < VAR_2 + VAR_0->zr_bytes) {
  int VAR_3 = 0;
  while (VAR_3 < FUNC_0(VAR_1->d_reclen)) {
   if (!VAR_1->d_name[VAR_3])
    break;
   (void) FUNC_1("%c", VAR_1->d_name[VAR_3++]);
  }
  (void) FUNC_1("\n");
  VAR_1 = (dirent64_t *)((intptr_t)VAR_1 + VAR_1->d_reclen);
 }
}
