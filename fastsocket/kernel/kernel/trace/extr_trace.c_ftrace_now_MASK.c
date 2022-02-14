
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int cycle_t ;
struct TYPE_2__ {int buffer; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;

cycle_t FUNC_3(int VAR_1)
{
 u64 VAR_2;


 if (!VAR_0.buffer)
  return FUNC_2();

 VAR_2 = FUNC_1(VAR_0.buffer, VAR_1);
 FUNC_0(VAR_0.buffer, VAR_1, &VAR_2);

 return VAR_2;
}
