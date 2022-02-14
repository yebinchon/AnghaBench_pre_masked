
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zb_object; scalar_t__ zb_level; scalar_t__ zb_blkid; } ;
typedef TYPE_1__ zbookmark_phys_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_1(uint16_t VAR_4, uint8_t VAR_5, uint16_t VAR_6, uint8_t VAR_7,
    const zbookmark_phys_t *VAR_8, const zbookmark_phys_t *VAR_9)
{





 uint64_t VAR_10, VAR_11;
 uint64_t VAR_12, VAR_13;
 uint64_t VAR_14, VAR_15;

 if (VAR_8->zb_object == VAR_9->zb_object &&
     VAR_8->zb_level == VAR_9->zb_level &&
     VAR_8->zb_blkid == VAR_9->zb_blkid)
  return (0);




 VAR_12 = (VAR_8->zb_blkid) * FUNC_0(VAR_5, VAR_8->zb_level);
 VAR_13 = (VAR_9->zb_blkid) * FUNC_0(VAR_7, VAR_9->zb_level);

 if (VAR_8->zb_object == VAR_1) {
  VAR_10 = VAR_12 * (VAR_4 << (VAR_3 - VAR_2));
  VAR_12 = 0;
  VAR_14 = VAR_8->zb_level + VAR_0;
 } else {
  VAR_10 = VAR_8->zb_object;
  VAR_14 = VAR_8->zb_level;
 }

 if (VAR_9->zb_object == VAR_1) {
  VAR_11 = VAR_13 * (VAR_6 << (VAR_3 - VAR_2));
  VAR_13 = 0;
  VAR_15 = VAR_9->zb_level + VAR_0;
 } else {
  VAR_11 = VAR_9->zb_object;
  VAR_15 = VAR_9->zb_level;
 }


 if (VAR_10 != VAR_11)
  return (VAR_10 < VAR_11 ? -1 : 1);
 else if (VAR_12 != VAR_13)
  return (VAR_12 < VAR_13 ? -1 : 1);
 else if (VAR_14 != VAR_15)
  return (VAR_14 > VAR_15 ? -1 : 1);





 return (0);
}
