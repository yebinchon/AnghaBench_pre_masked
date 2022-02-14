
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,uintptr_t*) ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 uintptr_t VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,uintptr_t,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_6)
{
 device_t VAR_7;
 uintptr_t VAR_8, VAR_9;
 int VAR_10;

 VAR_7 = FUNC_1(VAR_6);

 if (FUNC_0(VAR_7, VAR_6, VAR_4, &VAR_9))
  return (VAR_2);
 if (VAR_9 != VAR_5)
  return (VAR_2);

 if (FUNC_0(VAR_7, VAR_6, VAR_3, &VAR_8))
  VAR_8 = VAR_1;

 VAR_10 = FUNC_2(VAR_6, 0, VAR_8, 1);
 return ((VAR_10 > 0) ? VAR_10 : VAR_0);
}
