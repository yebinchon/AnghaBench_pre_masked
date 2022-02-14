
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int phandle_t ;
typedef int pcell_t ;
typedef int bank_count ;
struct TYPE_6__ {int pd_size; int pd_pa; int pd_va; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,char*,int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int,TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_6 (int,char*) ;
 scalar_t__ FUNC_7 (int,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_8 (int,char*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

int
FUNC_10(void)
{
 phandle_t VAR_9, VAR_10;
 pcell_t VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = 0;
 FUNC_4(&VAR_5[0]);

 if ((VAR_9 = FUNC_1("/")) == -1)
  return (VAR_1);




 VAR_5[VAR_12].pd_va = VAR_8;
 VAR_5[VAR_12].pd_pa = VAR_6;
 VAR_5[VAR_12].pd_size = VAR_7;
 VAR_12++;




 if (VAR_12 < VAR_2)
  if (FUNC_9(&VAR_5[VAR_12]) == 0)
   VAR_12++;





 for (VAR_10 = FUNC_0(VAR_9); VAR_10 != 0; VAR_10 = FUNC_3(VAR_10)) {
  if (FUNC_6(VAR_10, "pci") ||
      FUNC_6(VAR_10, "pciep")) {




   if (VAR_12 + 1 >= VAR_2)
    return (VAR_0);





   if (FUNC_7(VAR_10, &VAR_5[VAR_12], VAR_3,
        VAR_4) != 0)
    return (VAR_1);
   VAR_12 += 2;
  }

  if (FUNC_8(VAR_10, "mrvl,lbc")) {

   if (FUNC_2(VAR_10, "bank-count", &VAR_11,
       sizeof(VAR_11)) <= 0)

    VAR_11 = 1;

   if ((VAR_12 + VAR_11) >= VAR_2)
    return (VAR_0);


   VAR_13 = 0;

   if (FUNC_5(VAR_10, &VAR_5[VAR_12],
       (int)VAR_11, &VAR_13) != 0)
    return (VAR_1);

   VAR_12 += VAR_13;
  }
 }

 return (0);
}
