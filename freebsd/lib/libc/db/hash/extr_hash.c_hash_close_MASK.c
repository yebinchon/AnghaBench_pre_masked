
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ internal; } ;
typedef int HTAB ;
typedef TYPE_1__ DB ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(DB *VAR_1)
{
 HTAB *VAR_2;
 int VAR_3;

 if (!VAR_1)
  return (VAR_0);

 VAR_2 = (HTAB *)VAR_1->internal;
 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_1);
 return (VAR_3);
}
