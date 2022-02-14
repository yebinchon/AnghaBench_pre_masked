
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t zc_nvlist_dst_size; } ;
typedef TYPE_1__ zfs_cmd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;





 int VAR_13 ;

 int VAR_14 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int,TYPE_1__*,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;

int
FUNC_3(int VAR_17, int VAR_18, zfs_cmd_t *VAR_19)
{
 size_t VAR_20;
 int VAR_21, VAR_22 = VAR_8;

 if (VAR_15 == VAR_13)
  VAR_15 = FUNC_0();

 if (VAR_15 >= 133) {
  switch (VAR_15) {
  case 131:
   VAR_22 = VAR_6;
   break;
  case 129:
   VAR_22 = VAR_9;
   break;
  case 132:
   VAR_22 = VAR_5;
   break;
  case 128:
   VAR_22 = VAR_12;
   break;
  case 130:
   VAR_22 = VAR_7;
   break;
  case 133:
   VAR_22 = VAR_4;
   break;
  }
 } else {




  VAR_22 = VAR_11;

  if (VAR_16 < 0)
   VAR_16 = FUNC_1();

  if (VAR_16 == VAR_3 ||
      VAR_16 == VAR_2 ||
      VAR_16 == VAR_1)
   VAR_22 = VAR_10;
 }

 VAR_20 = VAR_19->zc_nvlist_dst_size;
 VAR_21 = FUNC_2(VAR_17, VAR_18, VAR_19, VAR_22);

 if (VAR_21 == 0 && VAR_20 < VAR_19->zc_nvlist_dst_size) {
  VAR_21 = -1;
  VAR_14 = VAR_0;
 }

 return (VAR_21);
}
