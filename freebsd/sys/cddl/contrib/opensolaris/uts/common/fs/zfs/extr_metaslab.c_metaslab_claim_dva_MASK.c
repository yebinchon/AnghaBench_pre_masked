
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdev_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int dva_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int * FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int
FUNC_10(spa_t *VAR_2, const dva_t *VAR_3, uint64_t VAR_4)
{
 uint64_t VAR_5 = FUNC_4(VAR_3);
 uint64_t VAR_6 = FUNC_3(VAR_3);
 uint64_t VAR_7 = FUNC_1(VAR_3);
 vdev_t *VAR_8;

 if ((VAR_8 = FUNC_8(VAR_2, VAR_5)) == ((void*)0)) {
  return (FUNC_6(VAR_0));
 }

 FUNC_0(FUNC_5(VAR_3));

 if (FUNC_2(VAR_3))
  VAR_7 = FUNC_9(VAR_8, VAR_1);

 return (FUNC_7(VAR_8, VAR_6, VAR_7, VAR_4));
}
