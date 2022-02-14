
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhnd_pcie2_devinfo {int resources; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct bhnd_pcie2_devinfo*) ;
 struct bhnd_pcie2_devinfo* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static device_t
FUNC_5(device_t VAR_2, u_int VAR_3, const char *VAR_4, int VAR_5)
{
 struct bhnd_pcie2_devinfo *VAR_6;
 device_t VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 == ((void*)0))
  return (((void*)0));

 VAR_6 = FUNC_3(sizeof(struct bhnd_pcie2_devinfo), VAR_0, VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_2, VAR_7);
  return (((void*)0));
 }

 FUNC_4(&VAR_6->resources);

 FUNC_2(VAR_7, VAR_6);
 return (VAR_7);
}
