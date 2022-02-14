
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ total_in; scalar_t__ total_out; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_2(uint64_t *VAR_3,
  uint64_t *VAR_4, uint64_t *VAR_5)
{
 uint64_t VAR_6;
 FUNC_1(VAR_2, VAR_3, &VAR_6);


 FUNC_0(*VAR_3 <= VAR_2->total_in);


 FUNC_0(VAR_6 >= VAR_2->total_out);

 if (VAR_1 == VAR_0) {
  *VAR_4 = VAR_6;
  *VAR_5 = *VAR_3;
 } else {
  *VAR_4 = *VAR_3;
  *VAR_5 = VAR_6;
 }

 return;
}
