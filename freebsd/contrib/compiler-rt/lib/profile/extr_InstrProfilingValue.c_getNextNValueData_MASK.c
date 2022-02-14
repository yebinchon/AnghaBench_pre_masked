
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {struct TYPE_7__* Next; int Count; int Value; } ;
typedef TYPE_1__ ValueProfNode ;
struct TYPE_9__ {TYPE_1__*** NodesKind; } ;
struct TYPE_8__ {int Count; int Value; } ;
typedef TYPE_2__ InstrProfValueData ;


 TYPE_6__ VAR_0 ;

__attribute__((used)) static ValueProfNode *FUNC_0(uint32_t VAR_1, uint32_t VAR_2,
                                        InstrProfValueData *VAR_3,
                                        ValueProfNode *VAR_4, uint32_t VAR_5) {
  unsigned VAR_6;
  ValueProfNode *VAR_7 = VAR_4 ? VAR_4 : VAR_0.NodesKind[VAR_1][VAR_2];
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    VAR_3[VAR_6].Value = VAR_7->Value;
    VAR_3[VAR_6].Count = VAR_7->Count;
    VAR_7 = VAR_7->Next;
  }
  return VAR_7;
}
