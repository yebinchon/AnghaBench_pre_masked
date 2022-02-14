
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ib_slvl_table_t ;
typedef int ib_portid_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (scalar_t__,int *,int ,int,int ,int ) ;
 int VAR_3 ;

int FUNC_4(ib_portid_t* VAR_4, int VAR_5)
{
 ib_slvl_table_t * VAR_6;
 int VAR_7;
 int VAR_8;


 VAR_7 = (1 << 8) | VAR_5;


 if (!FUNC_3(VAR_1, VAR_4, VAR_0, VAR_7, 0, VAR_3))
  FUNC_0("slvl query failed");

 VAR_6 = (ib_slvl_table_t *) VAR_1;
 VAR_8 = FUNC_1(VAR_6, VAR_2);
 FUNC_2("mirror_sl %d, mirror_vl %d\n", VAR_2, VAR_8);
 return VAR_8;
}
