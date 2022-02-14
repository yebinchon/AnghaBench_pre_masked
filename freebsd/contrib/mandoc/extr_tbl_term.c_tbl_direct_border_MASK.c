
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {size_t (* width ) (struct termp*,int) ;size_t viscol; int (* letter ) (struct termp*,int) ;} ;


 int* VAR_0 ;
 size_t FUNC_0 (struct termp*,int) ;
 int FUNC_1 (struct termp*,int) ;

__attribute__((used)) static void
FUNC_2(struct termp *VAR_1, int VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;

 VAR_2 = VAR_0[VAR_2];
 VAR_5 = (*VAR_1->width)(VAR_1, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += VAR_5) {
  (*VAR_1->letter)(VAR_1, VAR_2);
  VAR_1->viscol += VAR_5;
 }
}
