
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct statsblobv1 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct statsblobv1*,scalar_t__,scalar_t__) ;

int
FUNC_3(struct statsblobv1 *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5;

 VAR_5 = 0;

 FUNC_0();
 if (VAR_2 == ((void*)0) || VAR_3 >= VAR_1) {
  VAR_5 = VAR_0;
 } else {
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 }
 FUNC_1();

 return (VAR_5);
}
