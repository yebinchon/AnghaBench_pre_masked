
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int frac; int sec; } ;


 int FUNC_0 (int,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 void* FUNC_2 (TYPE_1__) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void __inline
FUNC_4(void)
{
 int VAR_9;

 if (VAR_8 > 0) {
  VAR_9 = (99 + VAR_8) / VAR_8;
  VAR_6 = FUNC_3(VAR_9 + (VAR_9 >> 1)) - 1;
  FUNC_0(VAR_3 / VAR_7, &VAR_2);
  FUNC_0(VAR_3, &VAR_1);
  FUNC_1(&VAR_2, VAR_6);
  FUNC_1(&VAR_1, VAR_6);
 } else {
  VAR_6 = 31;
  VAR_2.sec = VAR_0;
  VAR_2.frac = ~(uint64_t)0;
  VAR_1 = VAR_2;
 }
 VAR_5 = FUNC_2(VAR_2);
 VAR_4 = FUNC_2(VAR_1);
}
