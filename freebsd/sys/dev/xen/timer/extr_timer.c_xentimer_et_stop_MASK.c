
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xentimer_pcpu_data {scalar_t__ timer; } ;
struct eventtimer {int dummy; } ;


 struct xentimer_pcpu_data* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct eventtimer *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0);
 struct xentimer_pcpu_data *VAR_4 = FUNC_0(VAR_1);

 VAR_4->timer = 0;
 return (FUNC_2(VAR_3));
}
