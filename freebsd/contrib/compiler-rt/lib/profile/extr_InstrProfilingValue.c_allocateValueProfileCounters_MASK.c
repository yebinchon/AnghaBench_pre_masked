
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {int Values; scalar_t__* NumValueSites; } ;
typedef TYPE_1__ __llvm_profile_data ;
typedef int ValueProfNode ;


 int FUNC_0 (int *,int ,int **) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int **) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_3(__llvm_profile_data *VAR_6) {
  uint64_t VAR_7 = 0;
  uint32_t VAR_8;



  VAR_5 = 0;


  if (!VAR_4)
    VAR_3 = VAR_0;

  for (VAR_8 = VAR_1; VAR_8 <= VAR_2; ++VAR_8)
    VAR_7 += VAR_6->NumValueSites[VAR_8];

  ValueProfNode **VAR_9 =
      (ValueProfNode **)FUNC_1(VAR_7, sizeof(ValueProfNode *));
  if (!VAR_9)
    return 0;
  if (!FUNC_0(&VAR_6->Values, 0, VAR_9)) {
    FUNC_2(VAR_9);
    return 0;
  }
  return 1;
}
