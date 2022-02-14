
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zi_objset; scalar_t__ zi_object; scalar_t__ zi_type; scalar_t__ zi_freq; scalar_t__ zi_level; scalar_t__ zi_start; scalar_t__ zi_end; int zi_error; } ;
typedef TYPE_1__ zinject_record_t ;
struct TYPE_6__ {scalar_t__ zb_objset; scalar_t__ zb_object; scalar_t__ zb_level; scalar_t__ zb_blkid; } ;
typedef TYPE_2__ zbookmark_phys_t ;
typedef scalar_t__ uint64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static boolean_t
FUNC_1(zbookmark_phys_t *VAR_4, uint64_t VAR_5,
    zinject_record_t *VAR_6, int VAR_7)
{



 if (VAR_4->zb_objset == VAR_2 &&
     VAR_6->zi_objset == VAR_2 &&
     VAR_6->zi_object == VAR_1) {
  if (VAR_6->zi_type == VAR_3 ||
      VAR_5 == VAR_6->zi_type)
   return (VAR_6->zi_freq == 0 ||
       FUNC_0(100) < VAR_6->zi_freq);
  else
   return (VAR_0);
 }




 if (VAR_4->zb_objset == VAR_6->zi_objset &&
     VAR_4->zb_object == VAR_6->zi_object &&
     VAR_4->zb_level == VAR_6->zi_level &&
     VAR_4->zb_blkid >= VAR_6->zi_start &&
     VAR_4->zb_blkid <= VAR_6->zi_end &&
     VAR_7 == VAR_6->zi_error)
  return (VAR_6->zi_freq == 0 ||
      FUNC_0(100) < VAR_6->zi_freq);

 return (VAR_0);
}
