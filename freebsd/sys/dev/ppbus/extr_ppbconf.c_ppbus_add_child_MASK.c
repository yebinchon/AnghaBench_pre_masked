
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ppb_device {char const* name; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,struct ppb_device*) ;
 struct ppb_device* FUNC_2 (int,int ,int) ;

__attribute__((used)) static device_t
FUNC_3(device_t VAR_3, u_int VAR_4, const char *VAR_5, int VAR_6)
{
 struct ppb_device *VAR_7;
 device_t VAR_8;


 VAR_7 = FUNC_2(sizeof(struct ppb_device), VAR_1,
  VAR_0 | VAR_2);
 if (!VAR_7)
  return (((void*)0));


 VAR_7->name = VAR_5;



 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_8, VAR_7);

 return (VAR_8);
}
