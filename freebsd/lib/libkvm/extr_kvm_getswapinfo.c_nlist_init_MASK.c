
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int program; } ;
typedef TYPE_1__ kvm_t ;
struct TYPE_8__ {scalar_t__ n_value; } ;


 int FUNC_0 (size_t,int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_5)
{

 if (VAR_4)
  return (1);

 if (FUNC_2(VAR_5, VAR_3) < 0)
  return (0);


 if (VAR_3[VAR_1].n_value == 0) {
  FUNC_1(VAR_5, VAR_5->program, "unable to find swtailq");
  return (0);
 }

 if (VAR_3[VAR_0].n_value == 0) {
  FUNC_1(VAR_5, VAR_5->program, "unable to find dmmax");
  return (0);
 }


 FUNC_0(VAR_0, &VAR_2);

 VAR_4 = 1;
 return (1);
}
