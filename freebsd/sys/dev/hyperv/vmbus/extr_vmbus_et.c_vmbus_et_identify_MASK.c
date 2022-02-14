
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int * FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_3(driver_t *VAR_4, device_t VAR_5)
{
 if (FUNC_2(VAR_5) != 0 ||
     FUNC_1(VAR_5, VAR_1, -1) != ((void*)0) ||
     (VAR_2 & VAR_0) != VAR_0 ||
     VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_5, VAR_1, -1);
}
