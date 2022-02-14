
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,char const*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, phandle_t VAR_1,
    const char *VAR_2)
{
 phandle_t VAR_3;





 for (VAR_3 = FUNC_0(VAR_1); VAR_3 != 0; VAR_3 = FUNC_3(VAR_3)) {
  FUNC_5(VAR_0, VAR_3, VAR_2);
  if (VAR_2 == ((void*)0) || FUNC_2(VAR_3, VAR_2)) {
   FUNC_1(FUNC_4(VAR_3),
       VAR_0);
  }
 }
 return (0);
}
