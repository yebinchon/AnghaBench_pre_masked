
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t len; TYPE_1__* val; } ;
typedef TYPE_2__ hx509_name_constraints ;
typedef int hx509_context ;
struct TYPE_4__ {int excludedSubtrees; int permittedSubtrees; } ;
typedef int GeneralSubtrees ;
typedef int Certificate ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 (int *,int const*,int*) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_1,
         const hx509_name_constraints *VAR_2,
         const Certificate *VAR_3)
{
    int VAR_4, VAR_5;
    size_t VAR_6;

    for (VAR_6 = 0 ; VAR_6 < VAR_2->len; VAR_6++) {
 GeneralSubtrees VAR_7;

 if (VAR_2->val[VAR_6].permittedSubtrees) {
     FUNC_0(&VAR_7, VAR_2->val[VAR_6].permittedSubtrees);
     VAR_5 = FUNC_3(&VAR_7, VAR_3, &VAR_4);
     if (VAR_5) {
  FUNC_1(VAR_1);
  return VAR_5;
     }

     if (VAR_4 == 0 && !FUNC_4(VAR_3)) {
  FUNC_2(VAR_1, 0, VAR_0,
           "Error verify constraints, "
           "certificate didn't match any "
           "permitted subtree");
  return VAR_0;
     }
 }
 if (VAR_2->val[VAR_6].excludedSubtrees) {
     FUNC_0(&VAR_7, VAR_2->val[VAR_6].excludedSubtrees);
     VAR_5 = FUNC_3(&VAR_7, VAR_3, &VAR_4);
     if (VAR_5) {
  FUNC_1(VAR_1);
  return VAR_5;
     }
     if (VAR_4) {
  FUNC_2(VAR_1, 0, VAR_0,
           "Error verify constraints, "
           "certificate included in excluded "
           "subtree");
  return VAR_0;
     }
 }
    }
    return 0;
}
