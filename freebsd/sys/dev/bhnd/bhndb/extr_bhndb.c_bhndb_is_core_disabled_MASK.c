
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_softc {int bridge_core; int parent_dev; } ;
struct bhnd_core_info {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ,struct bhnd_core_info*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bhnd_core_info*) ;
 int FUNC_3 (struct bhnd_core_info*,int *) ;
 struct bhndb_softc* FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(device_t VAR_0, device_t VAR_1,
    struct bhnd_core_info *VAR_2)
{
 struct bhndb_softc *VAR_3;

 VAR_3 = FUNC_4(VAR_0);


 if (FUNC_0(VAR_3->parent_dev, VAR_0, VAR_2))
  return (1);



 if (FUNC_1(FUNC_2(VAR_2)))
  return (!FUNC_3(VAR_2, &VAR_3->bridge_core));


 return (0);
}
