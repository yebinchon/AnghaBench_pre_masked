
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int *,int,int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0)
{
 phandle_t VAR_1, VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 FUNC_5(VAR_0, VAR_1);

 for (VAR_2 = FUNC_0(VAR_1); VAR_2 > 0; VAR_2 = FUNC_1(VAR_2)) {
  FUNC_4(VAR_0, VAR_2, 0, ((void*)0), -1, ((void*)0));
 }

 return (FUNC_2(VAR_0));
}
