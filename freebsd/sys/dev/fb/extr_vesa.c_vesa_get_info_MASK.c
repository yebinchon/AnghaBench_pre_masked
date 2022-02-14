
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int vi_mode; } ;
typedef TYPE_1__ video_info_t ;
struct TYPE_11__ {int va_flags; int va_type; } ;
typedef TYPE_2__ video_adapter_t ;
struct TYPE_12__ {scalar_t__ (* get_info ) (TYPE_2__*,int,TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_9__* VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,TYPE_1__*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int ,int,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_6, int VAR_7, video_info_t *VAR_8)
{
 int VAR_9;

 if ((*VAR_3->get_info)(VAR_6, VAR_7, VAR_8) == 0)
  return (0);

 if (VAR_6 != VAR_4)
  return (1);

 VAR_7 = FUNC_1(VAR_4->va_type,
         VAR_4->va_flags & VAR_2, VAR_7);
 for (VAR_9 = 0; VAR_5[VAR_9].vi_mode != VAR_0; ++VAR_9) {
  if (VAR_5[VAR_9].vi_mode == VAR_1)
   continue;
  if (VAR_5[VAR_9].vi_mode == VAR_7) {
   *VAR_8 = VAR_5[VAR_9];
   return (0);
  }
 }
 return (1);
}
