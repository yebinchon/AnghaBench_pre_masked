
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* platform_t ;
typedef int phandle_t ;
struct TYPE_6__ {char* fdt_compatible; } ;
struct TYPE_5__ {int * cls; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char const*) ;

__attribute__((used)) static int
FUNC_3(platform_t VAR_0)
{
 const char *VAR_1;
 phandle_t VAR_2;





 if (VAR_0->cls == ((void*)0) || FUNC_0(VAR_0) == ((void*)0))
  return 1;


 VAR_2 = FUNC_1("/");
 VAR_1 = FUNC_0(VAR_0)->fdt_compatible;
 if (FUNC_2(VAR_2, VAR_1) != 0)
  return 0;


 return 1;
}
