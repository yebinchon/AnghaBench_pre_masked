
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ocs_softc {int dbg_lock; } ;
typedef int ocs_hw_t ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_t *VAR_0, int32_t VAR_1, uint8_t *VAR_2, void *VAR_3)
{
 struct ocs_softc *VAR_4 = VAR_3;


 FUNC_0(&VAR_4->dbg_lock);

 FUNC_1(&VAR_4->dbg_lock);

 FUNC_2(VAR_3);

 return 0;
}
