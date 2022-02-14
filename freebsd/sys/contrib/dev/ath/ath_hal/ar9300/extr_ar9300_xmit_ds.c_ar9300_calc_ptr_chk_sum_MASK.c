
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_int ;
struct ar9300_txc {int ds_info; int ds_link; int ds_data0; int ds_ctl3; int ds_data1; int ds_ctl5; int ds_data2; int ds_ctl7; int ds_data3; int ds_ctl9; } ;


 int VAR_0 ;

__attribute__((used)) static inline u_int16_t
FUNC_0(struct ar9300_txc *VAR_1)
{
    u_int VAR_2;
    u_int16_t VAR_3;


    VAR_2 = VAR_1->ds_info + VAR_1->ds_link
                + VAR_1->ds_data0 + VAR_1->ds_ctl3
                + VAR_1->ds_data1 + VAR_1->ds_ctl5
                + VAR_1->ds_data2 + VAR_1->ds_ctl7
                + VAR_1->ds_data3 + VAR_1->ds_ctl9;

    VAR_3 = ((VAR_2 & 0xffff) + (VAR_2 >> 16)) & VAR_0;
    return VAR_3;
}
