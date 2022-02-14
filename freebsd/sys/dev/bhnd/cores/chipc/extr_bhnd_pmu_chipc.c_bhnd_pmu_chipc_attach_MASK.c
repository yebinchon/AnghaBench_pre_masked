
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_softc {struct bhnd_resource* core; } ;
struct bhnd_resource {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct bhnd_resource*) ;
 int FUNC_1 (int ) ;
 struct chipc_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct chipc_softc *VAR_1;
 struct bhnd_resource *VAR_2;


 VAR_1 = FUNC_2(FUNC_1(VAR_0));
 VAR_2 = VAR_1->core;

 return (FUNC_0(VAR_0, VAR_2));
}
