
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int objset_t ;
typedef int dnode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,void*,int ) ;
 int FUNC_1 (int *,int ,int ,int **) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(objset_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    void *VAR_5, uint32_t VAR_6)
{
 dnode_t *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_2(VAR_7, VAR_0);
 return (VAR_8);
}
