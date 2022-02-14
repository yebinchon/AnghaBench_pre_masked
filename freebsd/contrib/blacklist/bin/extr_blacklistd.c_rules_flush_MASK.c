
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct conf {int dummy; } ;
struct TYPE_4__ {size_t cs_n; int * cs_c; } ;
struct TYPE_3__ {size_t cs_n; int * cs_c; } ;


 int FUNC_0 (struct conf**) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct conf*) ;
 int FUNC_2 (struct conf***,size_t*,size_t*,int *) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct conf **VAR_2;
 size_t VAR_3, VAR_4;

 VAR_2 = ((void*)0);
 VAR_4 = VAR_3 = 0;
 for (size_t VAR_5 = 0; VAR_5 < VAR_1.cs_n; VAR_5++)
  FUNC_2(&VAR_2, &VAR_3, &VAR_4, &VAR_1.cs_c[VAR_5]);
 for (size_t VAR_6 = 0; VAR_6 < VAR_0.cs_n; VAR_6++)
  FUNC_2(&VAR_2, &VAR_3, &VAR_4, &VAR_0.cs_c[VAR_6]);

 for (size_t VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_1(VAR_2[VAR_7]);
 FUNC_0(VAR_2);
}
