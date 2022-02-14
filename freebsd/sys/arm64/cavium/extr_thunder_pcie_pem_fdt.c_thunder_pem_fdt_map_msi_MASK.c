
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int phandle_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1, int VAR_2, uint64_t *VAR_3,
    uint32_t *VAR_4)
{
 phandle_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(FUNC_1(VAR_0), FUNC_3(VAR_1),
     &VAR_5, ((void*)0));
 if (VAR_6 != 0)
  return (VAR_6);
 return (FUNC_0(VAR_0, VAR_1, VAR_5, VAR_2, VAR_3, VAR_4));
}
