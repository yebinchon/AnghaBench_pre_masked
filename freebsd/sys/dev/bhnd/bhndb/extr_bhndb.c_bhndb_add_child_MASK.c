
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhndb_devinfo {int resources; int addrspace; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct bhndb_devinfo*) ;
 struct bhndb_devinfo* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static device_t
FUNC_5(device_t VAR_3, u_int VAR_4, const char *VAR_5, int VAR_6)
{
 struct bhndb_devinfo *VAR_7;
 device_t VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 VAR_7 = FUNC_3(sizeof(struct bhndb_devinfo), VAR_1, VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_3, VAR_8);
  return (((void*)0));
 }

 VAR_7->addrspace = VAR_0;
 FUNC_4(&VAR_7->resources);

 FUNC_2(VAR_8, VAR_7);

 return (VAR_8);
}
