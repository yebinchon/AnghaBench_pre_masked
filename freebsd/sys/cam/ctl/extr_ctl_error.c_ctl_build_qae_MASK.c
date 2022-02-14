
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
struct ctl_lun {int** pending_ua; int lun_lock; } ;
typedef int ctl_ua_type ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ctl_lun*,int,int*,int*,int*,int**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;

ctl_ua_type
FUNC_3(struct ctl_lun *VAR_5, uint32_t VAR_6, uint8_t *VAR_7)
{
 ctl_ua_type VAR_8;
 ctl_ua_type VAR_9, VAR_10;
 uint8_t *VAR_11;
 int VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15;

 FUNC_2(&VAR_5->lun_lock, VAR_3);
 VAR_14 = VAR_6 / VAR_0;
 VAR_15 = VAR_6 % VAR_0;
 if (VAR_5->pending_ua[VAR_14] == ((void*)0))
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_5->pending_ua[VAR_14][VAR_15];
 if (VAR_8 == VAR_1)
  return (VAR_1);

 VAR_9 = (1 << (FUNC_1(VAR_8) - 1));
 VAR_10 = VAR_9;
 VAR_11 = ((void*)0);
 FUNC_0(VAR_5, VAR_9, &VAR_12, &VAR_13, &VAR_10, &VAR_11);

 VAR_7[0] = VAR_4;
 if (VAR_9 == VAR_8)
  VAR_7[0] |= 0x10;
 else
  VAR_7[0] |= 0x20;
 VAR_7[1] = VAR_12;
 VAR_7[2] = VAR_13;
 return (VAR_9);
}
