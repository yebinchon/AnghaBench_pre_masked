
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_devinfo {int resources; } ;
typedef int device_t ;


 int VAR_0 ;
 struct bhndb_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct bhndb_devinfo*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1, device_t VAR_2)
{
 struct bhndb_devinfo *VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_3(&VAR_3->resources);
  FUNC_2(VAR_3, VAR_0);
 }

 FUNC_1(VAR_2, ((void*)0));
}
