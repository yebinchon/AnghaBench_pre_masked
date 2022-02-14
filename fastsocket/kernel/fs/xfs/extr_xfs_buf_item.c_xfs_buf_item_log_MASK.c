
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t* blf_data_map; } ;
struct TYPE_6__ {TYPE_1__ bli_format; int bli_flags; } ;
typedef TYPE_2__ xfs_buf_log_item_t ;
typedef size_t uint ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,size_t,size_t) ;

void
FUNC_2(
 xfs_buf_log_item_t *VAR_4,
 uint VAR_5,
 uint VAR_6)
{
 uint VAR_7;
 uint VAR_8;
 uint VAR_9;
 uint VAR_10;
 uint VAR_11;
 uint *VAR_12;
 uint VAR_13;
 uint VAR_14;
 uint VAR_15;





 VAR_4->bli_flags |= VAR_3;




 VAR_7 = VAR_5 >> VAR_2;
 VAR_8 = VAR_6 >> VAR_2;




 VAR_9 = VAR_8 - VAR_7 + 1;





 VAR_11 = VAR_7 >> VAR_0;
 VAR_12 = &(VAR_4->bli_format.blf_data_map[VAR_11]);




 VAR_13 = VAR_7 & (uint)(VAR_1 - 1);
 if (VAR_13) {
  VAR_14 = FUNC_0(VAR_13 + VAR_9, (uint)VAR_1);
  VAR_15 = ((1 << (VAR_14 - VAR_13)) - 1) << VAR_13;
  *VAR_12 |= VAR_15;
  VAR_12++;
  VAR_10 = VAR_14 - VAR_13;
 } else {
  VAR_10 = 0;
 }





 while ((VAR_9 - VAR_10) >= VAR_1) {
  *VAR_12 |= 0xffffffff;
  VAR_10 += VAR_1;
  VAR_12++;
 }




 VAR_14 = VAR_9 - VAR_10;
 if (VAR_14) {
  VAR_15 = (1 << VAR_14) - 1;
  *VAR_12 |= VAR_15;
 }

 FUNC_1(VAR_4, VAR_5, VAR_6);
}
