
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* Booleans; int* Numbers; int * Strings; } ;
typedef int PredType ;
typedef size_t PredIdx ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int
FUNC_0(PredType VAR_6, PredIdx VAR_7)

{
    switch (VAR_6) {
    case 130:
 return (VAR_5->Booleans[VAR_7] == VAR_3)
     ? VAR_2 : VAR_5->Booleans[VAR_7];

    case 129:
 return (VAR_5->Numbers[VAR_7] == VAR_0)
     ? VAR_2 : VAR_5->Numbers[VAR_7];

    case 128:
 return (VAR_5->Strings[VAR_7] != VAR_1)
     ? (int) VAR_4 : VAR_2;
    }

    return (VAR_3);
}
