
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(nvlist_t *VAR_4, nvlist_t **VAR_5)
{
 nvlist_t *VAR_6, *VAR_7;

 VAR_6 = FUNC_3();
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_4, VAR_1);
  return;
 }

 VAR_7 = FUNC_2();







 FUNC_0(VAR_6, VAR_0, *VAR_5);
 FUNC_0(VAR_6, VAR_2, VAR_7);
 FUNC_0(VAR_4, VAR_3, VAR_6);
 *VAR_5 = ((void*)0);
}
