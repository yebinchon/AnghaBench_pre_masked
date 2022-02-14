
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct superio_devinfo {int ldn; int resources; int * dev; int type; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct superio_devinfo*) ;
 struct superio_devinfo* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static device_t
FUNC_5(device_t VAR_4, u_int VAR_5, const char *VAR_6, int VAR_7)
{
 struct superio_devinfo *VAR_8;
 device_t VAR_9;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9 == ((void*)0))
  return (((void*)0));
 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_0, VAR_1 | VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_4, VAR_9);
  return (((void*)0));
 }
 VAR_8->ldn = 0xff;
 VAR_8->type = VAR_3;
 VAR_8->dev = VAR_9;
 FUNC_4(&VAR_8->resources);
 FUNC_2(VAR_9, VAR_8);
 return (VAR_9);
}
