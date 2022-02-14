
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int family; int proto; int uaddr; } ;
typedef TYPE_1__ endpoint ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(endpoint VAR_0[], int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_0[VAR_2].uaddr);
  FUNC_0(VAR_0[VAR_2].proto);
  FUNC_0(VAR_0[VAR_2].family);
 }
 return;
}
