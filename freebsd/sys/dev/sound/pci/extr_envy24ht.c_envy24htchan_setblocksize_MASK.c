
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_chinfo {int size; int blk; int unit; scalar_t__ dir; int buffer; } ;
typedef int kobj_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static u_int32_t
FUNC_3(kobj_t VAR_4, void *VAR_5, u_int32_t VAR_6)
{
 struct sc_chinfo *VAR_7 = VAR_5;

 u_int32_t VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;




 VAR_9 = 0x7fffffff;

 for (VAR_8 = VAR_7->size / 2; VAR_8 > 0; VAR_8 /= 2) {
  if (FUNC_0(VAR_8 - VAR_6) < FUNC_0(VAR_9 - VAR_6))
   VAR_9 = VAR_8;
  else
   break;
 }

 VAR_7->blk = VAR_9 / VAR_7->unit;
 if (VAR_7->dir == VAR_2)
  VAR_7->blk *= VAR_0 / 4;
 else
  VAR_7->blk *= VAR_1 / 4;


        if (VAR_7->dir == VAR_2)
                VAR_11 = VAR_7->blk * 4 / VAR_0;
        else
                VAR_11 = VAR_7->blk * 4 / VAR_1;
        VAR_11 *= VAR_7->unit;
        VAR_10 = VAR_7->size / VAR_11;
        FUNC_2(VAR_7->buffer, VAR_10, VAR_11);





 return VAR_9;
}
