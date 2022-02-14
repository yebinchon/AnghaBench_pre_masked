
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mvs_channel {int r_mem; int curr_mode; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mvs_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_10)
{
 struct mvs_channel *VAR_11 = FUNC_2(VAR_10);
 uint32_t VAR_12;


 FUNC_1(VAR_11->r_mem, VAR_1, 0);

 VAR_11->curr_mode = VAR_4;
 FUNC_3(VAR_10, VAR_3);

 FUNC_1(VAR_11->r_mem, VAR_7, 0);
 VAR_12 = FUNC_0(VAR_11->r_mem, VAR_5);
 VAR_12 |= VAR_6;
 FUNC_1(VAR_11->r_mem, VAR_5, VAR_12);
 VAR_12 = FUNC_0(VAR_11->r_mem, VAR_8);
 VAR_12 |= VAR_6;
 FUNC_1(VAR_11->r_mem, VAR_5, VAR_12);

 FUNC_1(VAR_11->r_mem, VAR_9, 0xffffffff);

 FUNC_1(VAR_11->r_mem, VAR_0, 0);

 FUNC_1(VAR_11->r_mem, VAR_1, ~VAR_2);
 return (0);
}
