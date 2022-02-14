
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vint64 ;
typedef int uint32_t ;
struct calendar {int dummy; } ;
typedef int ntpcal_split ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct calendar*,int *,int ) ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(
 uint32_t VAR_1,
 struct calendar * VAR_2
 )
{
 vint64 VAR_3;
 ntpcal_split VAR_4;


 FUNC_0(((void*)0) != VAR_2);






 VAR_3 = FUNC_3(VAR_1, ((void*)0));
 VAR_4 = FUNC_1(&VAR_3);
 FUNC_2(VAR_2, &VAR_4, VAR_0);
}
