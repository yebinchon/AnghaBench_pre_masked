
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(phandle_t VAR_1, uint8_t *VAR_2)
{
 uint8_t VAR_3[VAR_0];

 if (FUNC_0(VAR_1, "local-mac-address", VAR_3, VAR_0) == -1) {

  FUNC_2(VAR_2, 0, VAR_0);
 } else
  FUNC_1(VAR_2, VAR_3, VAR_0);
}
