
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct chipc_softc {int dummy; } ;
struct chipc_devinfo {int irq_mapped; int resources; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,int *) ;
 struct chipc_softc* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct chipc_devinfo*) ;
 struct chipc_devinfo* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static device_t
FUNC_6(device_t VAR_2, u_int VAR_3, const char *VAR_4, int VAR_5)
{
 struct chipc_softc *VAR_6;
 struct chipc_devinfo *VAR_7;
 device_t VAR_8;

 VAR_6 = FUNC_2(VAR_2);

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 VAR_7 = FUNC_4(sizeof(struct chipc_devinfo), VAR_0, VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_2, VAR_8);
  return (((void*)0));
 }

 FUNC_5(&VAR_7->resources);
 VAR_7->irq_mapped = 0;
 FUNC_3(VAR_8, VAR_7);

 return (VAR_8);
}
