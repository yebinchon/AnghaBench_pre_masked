
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int os; } ;
typedef TYPE_1__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int32_t
FUNC_4(sli4_t *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;
 int32_t VAR_6;

 VAR_6 = -1;


 FUNC_3(VAR_3, VAR_1, VAR_4 | VAR_2);

 for (VAR_5 = 0; VAR_5 < 3000; VAR_5 ++) {
  FUNC_1(VAR_0);
  if (FUNC_2(VAR_3) == 1) {
   VAR_6 = 0;
   break;
  }
 }

 if (VAR_6 != 0) {
  FUNC_0(VAR_3->os, "port failed to become ready after initialization\n");
 }

 return VAR_6;
}
