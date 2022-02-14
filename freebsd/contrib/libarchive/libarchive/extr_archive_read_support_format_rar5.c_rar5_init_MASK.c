
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filters; } ;
struct rar5 {TYPE_1__ cstate; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (struct rar5*,int ,int) ;
 int* VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_2(struct rar5* VAR_5) {
 ssize_t VAR_6;

 FUNC_1(VAR_5, 0, sizeof(struct rar5));




 if(VAR_3[0] == 243) {
  for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   VAR_3[VAR_6] ^= 0xA1;
  }
 }

 if(VAR_2 != FUNC_0(&VAR_5->cstate.filters, 8192))
  return VAR_0;

 return VAR_1;
}
