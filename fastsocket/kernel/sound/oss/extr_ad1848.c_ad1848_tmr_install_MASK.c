
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int dev; } ;


 TYPE_1__ VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3)
{
 if (VAR_2 != -1)
  return 0;

 VAR_2 = VAR_0.dev = VAR_3;
 FUNC_0(&VAR_0, VAR_1[VAR_3]->name);

 return 1;
}
