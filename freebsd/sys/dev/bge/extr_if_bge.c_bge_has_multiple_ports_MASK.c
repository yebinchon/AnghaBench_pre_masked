
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct bge_softc {int bge_dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct bge_softc *VAR_1)
{
 device_t VAR_2 = VAR_1->bge_dev;
 u_int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_2(VAR_2);
 VAR_3 = FUNC_1(VAR_2);
 VAR_7 = FUNC_4(VAR_2);
 VAR_5 = FUNC_3(VAR_2);
 for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++)
  if (VAR_6 != VAR_5 && FUNC_0(VAR_4, VAR_3, VAR_7, VAR_6) != ((void*)0))
   return (1);
 return (0);
}
