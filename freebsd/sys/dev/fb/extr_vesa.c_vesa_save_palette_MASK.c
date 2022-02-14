
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int va_flags; int va_mode; } ;
typedef TYPE_1__ video_adapter_t ;
typedef int u_char ;
struct TYPE_7__ {int (* save_palette ) (TYPE_1__*,int *) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (int ,int,int *,int) ;

__attribute__((used)) static int
FUNC_3(video_adapter_t *VAR_3, u_char *VAR_4)
{
 int VAR_5;

 if (VAR_3 == VAR_2 && FUNC_0(VAR_3->va_mode)) {
  VAR_5 = (VAR_3->va_flags & VAR_0) != 0 ? 8 : 6;
  if (FUNC_2(0, 256, VAR_4, VAR_5) == 0)
   return (0);
 }

 return ((*VAR_1->save_palette)(VAR_3, VAR_4));
}
