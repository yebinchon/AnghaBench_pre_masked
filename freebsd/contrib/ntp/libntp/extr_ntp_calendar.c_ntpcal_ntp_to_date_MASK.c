
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vint64 ;
typedef int uint32_t ;
typedef int time_t ;
struct calendar {int dummy; } ;


 int FUNC_0 (struct calendar*,int *) ;
 int FUNC_1 (int ,int const*) ;

int
FUNC_2(
 struct calendar *VAR_0,
 uint32_t VAR_1,
 const time_t *VAR_2
 )
{
 vint64 VAR_3;






 VAR_3 = FUNC_1(VAR_1, VAR_2);
 return FUNC_0(VAR_0, &VAR_3);
}
