
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int platform_t ;
typedef int phandle_t ;
struct TYPE_5__ {int pd_size; int pd_pa; int pd_va; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(platform_t VAR_9)
{
 phandle_t VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = 0;
 FUNC_3(&VAR_5[0]);

 if ((VAR_10 = FUNC_1("/")) == -1)
  return (VAR_1);




 VAR_5[VAR_12].pd_va = VAR_8;
 VAR_5[VAR_12].pd_pa = VAR_6;
 VAR_5[VAR_12].pd_size = VAR_7;
 VAR_12++;




 if (VAR_12 < VAR_2)
  if (FUNC_6(&VAR_5[VAR_12]) == 0)
   VAR_12++;





 for (VAR_11 = FUNC_0(VAR_10); VAR_11 != 0; VAR_11 = FUNC_2(VAR_11)) {
  if (FUNC_4(VAR_11, "pci") ||
      FUNC_4(VAR_11, "pciep")) {




   if (VAR_12 + 1 >= VAR_2)
    return (VAR_0);

   if (FUNC_5(VAR_11, &VAR_5[VAR_12], VAR_3,
        VAR_4) != 0)
    return (VAR_1);
   VAR_12 += 2;
  }
 }

 return (0);
}
