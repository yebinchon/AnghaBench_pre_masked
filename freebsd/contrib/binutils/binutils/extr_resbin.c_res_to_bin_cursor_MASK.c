
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_cursor {int yhotspot; int xhotspot; } ;
typedef scalar_t__ rc_uint_type ;
struct TYPE_3__ {scalar_t__ length; struct bin_cursor* data; int yhotspot; int xhotspot; } ;
typedef TYPE_1__ rc_cursor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct bin_cursor*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static rc_uint_type
FUNC_2 (windres_bfd *VAR_1, rc_uint_type VAR_2, const rc_cursor *VAR_3)
{
  if (VAR_1)
    {
      struct bin_cursor VAR_4;

      FUNC_1 (VAR_1, VAR_4.xhotspot, VAR_3->xhotspot);
      FUNC_1 (VAR_1, VAR_4.yhotspot, VAR_3->yhotspot);
      FUNC_0 (VAR_1, &VAR_4, VAR_2, VAR_0);
      if (VAR_3->length)
 FUNC_0 (VAR_1, VAR_3->data, VAR_2 + VAR_0, VAR_3->length);
    }
  VAR_2 = (VAR_2 + VAR_0 + (rc_uint_type) VAR_3->length);
  return VAR_2;
}
