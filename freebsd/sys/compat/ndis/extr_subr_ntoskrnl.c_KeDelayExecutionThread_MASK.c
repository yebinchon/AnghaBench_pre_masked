
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ktimer ;
typedef int int64_t ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int ,scalar_t__,int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_4(uint8_t VAR_1, uint8_t VAR_2, int64_t *VAR_3)
{
 ktimer VAR_4;

 if (VAR_1 != 0)
  FUNC_3("invalid wait_mode %d", VAR_1);

 FUNC_0(&VAR_4);
 FUNC_1(&VAR_4, *VAR_3, ((void*)0));
 FUNC_2(&VAR_4, 0, 0, VAR_2, ((void*)0));

 return VAR_0;
}
