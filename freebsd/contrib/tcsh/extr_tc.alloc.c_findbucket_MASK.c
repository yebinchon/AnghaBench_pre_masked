
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union overhead {union overhead* ov_next; } ;


 size_t VAR_0 ;
 union overhead** VAR_1 ;

__attribute__((used)) static int
FUNC_0(union overhead *VAR_2, int VAR_3)
{
    union overhead *VAR_4;
    size_t VAR_5;
    int VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
 VAR_6 = 0;
 for (VAR_4 = VAR_1[VAR_5]; VAR_4 && VAR_6 != VAR_3; VAR_4 = VAR_4->ov_next) {
     if (VAR_4 == VAR_2)
  return (VAR_5);
     VAR_6++;
 }
    }
    return (-1);
}
