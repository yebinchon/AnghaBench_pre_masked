
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long line; } ;
union sltentry {TYPE_1__ snorm; } ;
struct objfile {int dummy; } ;
typedef int sltpointer ;


 union sltentry* FUNC_0 (int ,struct objfile*) ;

__attribute__((used)) static unsigned long
FUNC_1 (sltpointer VAR_0, struct objfile *VAR_1)
{
  union sltentry *VAR_2;

  VAR_2 = FUNC_0 (VAR_0, VAR_1);
  return VAR_2->snorm.line;
}
