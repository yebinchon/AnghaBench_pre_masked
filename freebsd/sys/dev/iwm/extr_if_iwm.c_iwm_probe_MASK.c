
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_5__ {scalar_t__ device; TYPE_1__* cfg; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_3); VAR_5++) {
  if (FUNC_3(VAR_4) == VAR_2 &&
      FUNC_2(VAR_4) == VAR_3[VAR_5].device) {
   FUNC_0(VAR_4, VAR_3[VAR_5].cfg->name);
   return (VAR_0);
  }
 }

 return (VAR_1);
}
