
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * di_extb; } ;
union dinode {TYPE_1__ dp2; } ;
struct TYPE_6__ {int fs_bsize; } ;
struct TYPE_5__ {int c_extsize; int c_count; int* c_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(union dinode *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;




 if (VAR_4.c_extsize == 0)
  return (0);






 if (VAR_4.c_extsize > VAR_2 * VAR_3->fs_bsize)
  VAR_8 = FUNC_1(VAR_2 * VAR_3->fs_bsize, VAR_0);
 else
  VAR_8 = FUNC_1(VAR_4.c_extsize, VAR_0);
 if (VAR_4.c_count + VAR_8 > VAR_1)
  return (0);





 VAR_9 = VAR_3->fs_bsize >> VAR_5;
 FUNC_0(VAR_4.c_count + VAR_8 < VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  if (&VAR_6->dp2.di_extb[VAR_7 / VAR_9] != 0)
    VAR_4.c_addr[VAR_4.c_count + VAR_7] = 1;
   else
    VAR_4.c_addr[VAR_4.c_count + VAR_7] = 0;
 VAR_4.c_count += VAR_8;
 return (VAR_8);
}
