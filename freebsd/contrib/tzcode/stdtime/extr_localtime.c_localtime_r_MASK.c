
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct tm* FUNC_2 (int const* const,long,struct tm*) ;
 int FUNC_3 (int) ;

struct tm *
FUNC_4(const time_t *const VAR_1, struct tm *VAR_2)
{
 FUNC_0(&VAR_0);
 FUNC_3(1);
 VAR_2 = FUNC_2(VAR_1, 0L, VAR_2);
 FUNC_1(&VAR_0);
 return VAR_2;
}
