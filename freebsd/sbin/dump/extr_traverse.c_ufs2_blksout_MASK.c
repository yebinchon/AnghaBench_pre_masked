
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int di_size; } ;
union dinode {TYPE_1__ dp2; } ;
typedef scalar_t__ ufs2_daddr_t ;
typedef int ino_t ;
struct TYPE_7__ {int fs_fsize; int fs_bsize; } ;
struct TYPE_6__ {int* c_addr; int c_count; int c_type; int c_extsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union dinode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int,int) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (union dinode*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(union dinode *VAR_6, ufs2_daddr_t *VAR_7, int VAR_8, ino_t VAR_9,
 int VAR_10)
{
 ufs2_daddr_t *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 static int VAR_19 = 0;






 VAR_16 = FUNC_4(VAR_8 * VAR_3->fs_fsize, VAR_0);
 if (VAR_10) {
  if (VAR_19)
   VAR_15 = FUNC_4(FUNC_3(VAR_3, VAR_4.c_extsize),
       VAR_0);
  else
   VAR_15 = FUNC_4(FUNC_3(VAR_3, VAR_6->dp2.di_size),
       VAR_0);
  if (VAR_15 > 0)
   VAR_16 -= FUNC_4(VAR_3->fs_fsize, VAR_0) - VAR_15;
 }
 VAR_17 = VAR_3->fs_bsize >> VAR_5;
 for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12 += VAR_1) {
  if (VAR_12 + VAR_1 > VAR_16)
   VAR_14 = VAR_16;
  else
   VAR_14 = VAR_12 + VAR_1;
  FUNC_1(VAR_14 <= VAR_1 + VAR_12);
  for (VAR_13 = VAR_12; VAR_13 < VAR_14; VAR_13++)
   if (VAR_7[VAR_13 / VAR_17] != 0)
    VAR_4.c_addr[VAR_13 - VAR_12] = 1;
   else
    VAR_4.c_addr[VAR_13 - VAR_12] = 0;
  VAR_4.c_count = VAR_14 - VAR_12;
  if (VAR_10 && VAR_14 == VAR_16 && !VAR_19)
   VAR_18 = FUNC_0(VAR_6);
  FUNC_6(VAR_9);
  VAR_11 = &VAR_7[VAR_12 / VAR_17];
  for (VAR_13 = VAR_12; VAR_13 < VAR_14; VAR_13 += VAR_17, VAR_11++)
   if (*VAR_11 != 0) {
    if (VAR_13 + VAR_17 <= VAR_14)
     FUNC_2(*VAR_11, (int)VAR_3->fs_bsize);
    else
     FUNC_2(*VAR_11, (VAR_14 - VAR_13) * VAR_0);
   }
  VAR_4.c_type = VAR_2;
  VAR_4.c_count = 0;
  if (VAR_10 && VAR_14 == VAR_16 && !VAR_19) {
   VAR_19 = 1;
   FUNC_5(VAR_6, VAR_9, VAR_18);
   VAR_19 = 0;
  }
 }
}
