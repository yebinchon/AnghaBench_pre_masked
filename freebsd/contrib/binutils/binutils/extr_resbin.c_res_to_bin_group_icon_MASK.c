
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_group_icon_item {int count; int sig2; int sig1; int index; int bytes; int bits; int planes; int pad; int colors; int height; int width; } ;
struct bin_group_icon {int count; int sig2; int sig1; int index; int bytes; int bits; int planes; int pad; int colors; int height; int width; } ;
typedef int rc_uint_type ;
struct TYPE_3__ {int planes; int bits; int index; int bytes; int colors; int height; int width; struct TYPE_3__* next; } ;
typedef TYPE_1__ rc_group_icon ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct bin_group_icon_item*,int ,scalar_t__) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static rc_uint_type
FUNC_4 (windres_bfd *VAR_2, rc_uint_type VAR_3, const rc_group_icon *VAR_4)
{
  rc_uint_type VAR_5;
  struct bin_group_icon VAR_6;
  int VAR_7;
  const rc_group_icon *VAR_8;

  VAR_5 = VAR_3;
  VAR_3 += VAR_1;

  for (VAR_7 = 0, VAR_8 = VAR_4; VAR_8 != ((void*)0); VAR_8 = VAR_8->next, VAR_7++)
    {
      struct bin_group_icon_item VAR_9;

      if (VAR_2)
 {
   FUNC_3 (VAR_2, VAR_9.width, VAR_8->width);
   FUNC_3 (VAR_2, VAR_9.height, VAR_8->height);
   FUNC_3 (VAR_2, VAR_9.colors, VAR_8->colors);
   FUNC_3 (VAR_2, VAR_9.pad, 0);
   FUNC_1 (VAR_2, VAR_9.planes, VAR_8->planes);
   FUNC_1 (VAR_2, VAR_9.bits, VAR_8->bits);
   FUNC_2 (VAR_2, VAR_9.bytes, VAR_8->bytes);
   FUNC_1 (VAR_2, VAR_9.index, VAR_8->index);
   FUNC_0 (VAR_2, &VAR_9, VAR_3, VAR_0);
 }
      VAR_3 += VAR_0;
    }

  if (VAR_2)
    {
      FUNC_1 (VAR_2, VAR_6.sig1, 0);
      FUNC_1 (VAR_2, VAR_6.sig2, 1);
      FUNC_1 (VAR_2, VAR_6.count, VAR_7);
      FUNC_0 (VAR_2, &VAR_6, VAR_5, VAR_1);
    }
  return VAR_3;
}
