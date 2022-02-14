
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_5(void)
{
 vm_page_t VAR_2;

 FUNC_1(VAR_1, VAR_0);
 VAR_2 = FUNC_3();
 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_1);
  FUNC_4(((void*)0));
  FUNC_0(VAR_1);

 }
 return (VAR_2);
}
