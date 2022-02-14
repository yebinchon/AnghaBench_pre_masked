
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int phys; } ;
struct TYPE_6__ {TYPE_5__ bmbx; int os; } ;
typedef TYPE_1__ sli4_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_6(sli4_t *VAR_4)
{
 uint32_t VAR_5 = 0;


 FUNC_2(&VAR_4->bmbx, VAR_0);
 VAR_5 = FUNC_0(VAR_4->bmbx.phys);
 FUNC_5(VAR_4, VAR_3, VAR_5);

 if (FUNC_4(VAR_4, VAR_1)) {
  FUNC_3(VAR_4->os, "BMBX WRITE_HI failed\n");
  return -1;
 }
 VAR_5 = FUNC_1(VAR_4->bmbx.phys);
 FUNC_5(VAR_4, VAR_3, VAR_5);


 return FUNC_4(VAR_4, VAR_2 );
}
