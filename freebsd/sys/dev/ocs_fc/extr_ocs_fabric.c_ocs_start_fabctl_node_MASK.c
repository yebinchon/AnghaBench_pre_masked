
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ocs_sport_t ;
typedef int ocs_node_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,int ,int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_sport_t *VAR_3)
{
 ocs_node_t *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_0, VAR_0);
  if (VAR_4 == ((void*)0)) {
   return -1;
  }
 }




 FUNC_2(VAR_4, VAR_2, ((void*)0));
 return 0;
}
