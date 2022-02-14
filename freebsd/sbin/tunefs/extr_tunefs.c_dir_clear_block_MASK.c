
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct direct {int d_type; scalar_t__ d_reclen; scalar_t__ d_ino; } ;
typedef size_t off_t ;
struct TYPE_2__ {size_t fs_bsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_0(const char *VAR_3, off_t VAR_4)
{
 struct direct *VAR_5;

 for (; VAR_4 < VAR_2.fs_bsize; VAR_4 += VAR_0) {
  VAR_5 = (struct direct *)&VAR_3[VAR_4];
  VAR_5->d_ino = 0;
  VAR_5->d_reclen = VAR_0;
  VAR_5->d_type = VAR_1;
 }
}
