
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_platform {int * nvram_cls; int * nvram_io; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct bcm_platform* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct bcm_platform *VAR_3;


 VAR_3 = FUNC_1();
 if (VAR_3->nvram_io == ((void*)0))
  return (VAR_1);

 FUNC_0(VAR_3->nvram_cls != ((void*)0), ("missing NVRAM class"));


 FUNC_3(VAR_2, FUNC_2(VAR_3->nvram_cls));


 return (VAR_0);
}
