
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_group_cursor_item {int nitems; int sig2; int sig1; int index; int bytes; int bits; int planes; int height; int width; } ;
struct bin_group_cursor {int nitems; int sig2; int sig1; int index; int bytes; int bits; int planes; int height; int width; } ;
typedef int rc_uint_type ;
struct TYPE_3__ {int width; int height; int planes; int bits; int index; int bytes; struct TYPE_3__* next; } ;
typedef TYPE_1__ rc_group_cursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct bin_group_cursor_item*,int ,scalar_t__) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static rc_uint_type
FUNC_3 (windres_bfd *VAR_2, rc_uint_type VAR_3,
    const rc_group_cursor *VAR_4)
{
  int VAR_5 = 0;
  const rc_group_cursor *VAR_6;
  struct bin_group_cursor VAR_7;
  struct bin_group_cursor_item VAR_8;
  rc_uint_type VAR_9 = VAR_3;

  VAR_3 += VAR_1;

  for (VAR_5 = 0, VAR_6 = VAR_4; VAR_6 != ((void*)0); VAR_6 = VAR_6->next, VAR_5++)
    {
      if (VAR_2)
 {
   FUNC_1 (VAR_2, VAR_8.width, VAR_6->width);
   FUNC_1 (VAR_2, VAR_8.height, VAR_6->height);
   FUNC_1 (VAR_2, VAR_8.planes, VAR_6->planes);
   FUNC_1 (VAR_2, VAR_8.bits, VAR_6->bits);
   FUNC_2 (VAR_2, VAR_8.bytes, VAR_6->bytes);
   FUNC_1 (VAR_2, VAR_8.index, VAR_6->index);
   FUNC_0 (VAR_2, &VAR_8, VAR_3, VAR_0);
    }

      VAR_3 += VAR_0;
    }
  if (VAR_2)
    {
      FUNC_1 (VAR_2, VAR_7.sig1, 0);
      FUNC_1 (VAR_2, VAR_7.sig2, 2);
      FUNC_1 (VAR_2, VAR_7.nitems, VAR_5);
      FUNC_0 (VAR_2, &VAR_7, VAR_9, VAR_1);
    }
  return VAR_3;
}
