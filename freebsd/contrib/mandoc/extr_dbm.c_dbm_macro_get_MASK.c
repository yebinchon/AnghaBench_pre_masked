
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dbm_macro {void* pp; void* value; } ;
typedef size_t int32_t ;
struct TYPE_2__ {int pages; int value; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 TYPE_1__** VAR_1 ;
 size_t* VAR_2 ;

struct dbm_macro *
FUNC_2(int32_t VAR_3, int32_t VAR_4)
{
 static struct dbm_macro VAR_5;

 FUNC_0(VAR_3 >= 0);
 FUNC_0(VAR_3 < VAR_0);
 FUNC_0(VAR_4 >= 0);
 FUNC_0(VAR_4 < VAR_2[VAR_3]);
 VAR_5.value = FUNC_1(VAR_1[VAR_3][VAR_4].value);
 VAR_5.pp = FUNC_1(VAR_1[VAR_3][VAR_4].pages);
 return &VAR_5;
}
