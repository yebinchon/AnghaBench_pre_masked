
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iucv_param {int dummy; } iucv_param ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,union iucv_param*) ;
 union iucv_param** VAR_2 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_3)
{
 int VAR_4 = FUNC_4();
 union iucv_param *VAR_5;

 if (!FUNC_1(VAR_4, VAR_1))
  return;


 FUNC_2(((void*)0));


 VAR_5 = VAR_2[VAR_4];
 FUNC_3(VAR_0, VAR_5);


 FUNC_0(VAR_4, VAR_1);
}
