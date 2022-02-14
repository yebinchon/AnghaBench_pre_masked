
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ufs1_daddr_t ;
typedef int ino_t ;
struct TYPE_4__ {int fs_fsize; int fs_bsize; } ;
struct TYPE_3__ {int* c_addr; int c_count; int c_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int,int) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(ufs1_daddr_t *VAR_6, int VAR_7, ino_t VAR_8)
{
 ufs1_daddr_t *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_13 = FUNC_2(VAR_7 * VAR_3->fs_fsize, VAR_0);
 VAR_14 = VAR_3->fs_bsize >> VAR_5;
 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10 += VAR_1) {
  if (VAR_10 + VAR_1 > VAR_13)
   VAR_12 = VAR_13;
  else
   VAR_12 = VAR_10 + VAR_1;
  FUNC_0(VAR_12 <= VAR_1 + VAR_10);
  for (VAR_11 = VAR_10; VAR_11 < VAR_12; VAR_11++)
   if (VAR_6[VAR_11 / VAR_14] != 0)
    VAR_4.c_addr[VAR_11 - VAR_10] = 1;
   else
    VAR_4.c_addr[VAR_11 - VAR_10] = 0;
  VAR_4.c_count = VAR_12 - VAR_10;
  FUNC_3(VAR_8);
  VAR_9 = &VAR_6[VAR_10 / VAR_14];
  for (VAR_11 = VAR_10; VAR_11 < VAR_12; VAR_11 += VAR_14, VAR_9++)
   if (*VAR_9 != 0) {
    if (VAR_11 + VAR_14 <= VAR_12)
     FUNC_1(*VAR_9, (int)VAR_3->fs_bsize);
    else
     FUNC_1(*VAR_9, (VAR_12 - VAR_11) * VAR_0);
   }
  VAR_4.c_type = VAR_2;
 }
}
