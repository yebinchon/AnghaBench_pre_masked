
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tv64; } ;
typedef TYPE_1__ ktime_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (TYPE_1__ const,TYPE_1__ const) ;
 TYPE_1__ FUNC_1 (int ,int ) ;

ktime_t FUNC_2(const ktime_t VAR_1, const ktime_t VAR_2)
{
 ktime_t VAR_3 = FUNC_0(VAR_1, VAR_2);





 if (VAR_3.tv64 < 0 || VAR_3.tv64 < VAR_1.tv64 || VAR_3.tv64 < VAR_2.tv64)
  VAR_3 = FUNC_1(VAR_0, 0);

 return VAR_3;
}
