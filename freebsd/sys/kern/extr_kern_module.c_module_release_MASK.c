
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* module_t ;
struct TYPE_7__ {scalar_t__ refs; TYPE_1__* file; } ;
struct TYPE_6__ {int modules; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;

void
FUNC_4(module_t VAR_6)
{

 VAR_0;

 if (VAR_6->refs <= 0)
  FUNC_3("module_release: bad reference count");

 FUNC_0(VAR_2, ("module_release: before, refs=%d\n", VAR_6->refs));

 VAR_6->refs--;
 if (VAR_6->refs == 0) {
  FUNC_1(&VAR_5, VAR_6, VAR_4);
  if (VAR_6->file)
   FUNC_1(&VAR_6->file->modules, VAR_6, VAR_3);
  FUNC_2(VAR_6, VAR_1);
 }
}
