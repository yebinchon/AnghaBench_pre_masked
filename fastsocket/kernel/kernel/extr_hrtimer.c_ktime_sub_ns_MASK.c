
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_8__ {scalar_t__ tv64; } ;
typedef TYPE_1__ ktime_t ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__ FUNC_1 (long,unsigned long) ;
 TYPE_1__ FUNC_2 (TYPE_1__ const,TYPE_1__) ;
 scalar_t__ FUNC_3 (int) ;

ktime_t FUNC_4(const ktime_t VAR_1, u64 VAR_2)
{
 ktime_t VAR_3;

 if (FUNC_3(VAR_2 < VAR_0)) {
  VAR_3.tv64 = VAR_2;
 } else {
  unsigned long VAR_4 = FUNC_0(VAR_2, VAR_0);

  VAR_3 = FUNC_1((long)VAR_2, VAR_4);
 }

 return FUNC_2(VAR_1, VAR_3);
}
