
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {int db_vec_count; } ;
typedef int device_t ;


 struct ntb_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0)
{
 struct ntb_softc *VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->db_vec_count);
}
