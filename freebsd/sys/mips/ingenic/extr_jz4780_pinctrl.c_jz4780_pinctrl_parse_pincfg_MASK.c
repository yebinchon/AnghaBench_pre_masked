
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int phandle_t ;
struct TYPE_3__ {int bias; int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(phandle_t VAR_1, uint32_t *VAR_2)
{
 phandle_t VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_0); VAR_4++) {
  if (FUNC_0(VAR_3, VAR_0[VAR_4].name)) {
   *VAR_2 = VAR_0[VAR_4].bias;
   return 0;
  }
 }

 return -1;
}
