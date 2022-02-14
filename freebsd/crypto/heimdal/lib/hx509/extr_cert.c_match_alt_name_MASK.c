
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ element; } ;
struct TYPE_9__ {scalar_t__ element; } ;
struct TYPE_8__ {size_t len; TYPE_4__* val; } ;
typedef TYPE_1__ GeneralNames ;
typedef TYPE_2__ GeneralName ;
typedef int Certificate ;


 int VAR_0 ;
 int FUNC_0 (int const*,size_t*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__ const*,TYPE_4__*,int*) ;

__attribute__((used)) static int
FUNC_3(const GeneralName *VAR_1, const Certificate *VAR_2,
        int *VAR_3, int *VAR_4)
{
    GeneralNames VAR_5;
    int VAR_6;
    size_t VAR_7, VAR_8;

    VAR_7 = 0;
    do {
 VAR_6 = FUNC_0(VAR_2, &VAR_7, &VAR_5);
 if (VAR_6 == VAR_0) {
     VAR_6 = 0;
     break;
 } else if (VAR_6 != 0)
     break;

 for (VAR_8 = 0; VAR_8 < VAR_5.len; VAR_8++) {
     if (VAR_1->element == VAR_5.val[VAR_8].element) {
  *VAR_3 = 1;
  VAR_6 = FUNC_2(VAR_1, &VAR_5.val[VAR_8], VAR_4);
     }
 }
 FUNC_1(&VAR_5);
    } while (1);
    return VAR_6;
}
