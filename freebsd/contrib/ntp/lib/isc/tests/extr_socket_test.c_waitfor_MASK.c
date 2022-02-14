
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {scalar_t__ done; } ;
typedef TYPE_1__ completion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static isc_result_t
FUNC_3(completion_t *VAR_3) {
 int VAR_4 = 0;
 while (!VAR_3->done && VAR_4++ < 5000) {

  while (FUNC_1(VAR_2))
   FUNC_0(VAR_2);

  FUNC_2(1000);
 }
 if (VAR_3->done)
  return (VAR_1);
 return (VAR_0);
}
