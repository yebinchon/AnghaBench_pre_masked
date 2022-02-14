
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
struct TYPE_12__ {TYPE_8__* dialog; } ;
struct TYPE_13__ {TYPE_3__ u; int type; } ;
typedef TYPE_4__ rc_res_resource ;
struct TYPE_10__ {int length; int const* data; } ;
struct TYPE_11__ {TYPE_1__ buffer; } ;
struct TYPE_14__ {TYPE_2__ u; int type; int * next; } ;
typedef TYPE_5__ rc_rcdata_item ;
struct TYPE_15__ {int charset; void* italic; void* weight; void* help; } ;
typedef TYPE_6__ rc_dialog_ex ;
struct TYPE_16__ {struct TYPE_16__* next; TYPE_5__* data; int text; int class; void* id; void* height; void* width; void* y; void* x; void* style; void* exstyle; void* help; } ;
typedef TYPE_7__ rc_dialog_control ;
struct TYPE_17__ {int style; TYPE_6__* ex; TYPE_7__* controls; int * font; void* pointsize; int * caption; int class; int menu; void* height; void* width; void* y; void* x; void* exstyle; } ;
typedef TYPE_8__ rc_dialog ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *,int const*,int) ;
 void* FUNC_3 (int *,int const*,int,int*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int *,int const*,int) ;
 void* FUNC_7 (int *,int const*,int) ;
 void* FUNC_8 (int *,int const*,int) ;

__attribute__((used)) static rc_res_resource *
FUNC_9 (windres_bfd *VAR_3, const bfd_byte *VAR_4, rc_uint_type VAR_5)
{
  rc_uint_type VAR_6;
  rc_dialog *VAR_7;
  rc_uint_type VAR_8, VAR_9, VAR_10;
  rc_uint_type VAR_11;
  rc_dialog_control **VAR_12;
  rc_res_resource *VAR_13;

  if (VAR_5 < 18)
    FUNC_5 (FUNC_0("dialog header"));

  VAR_7 = (rc_dialog *) FUNC_4 (sizeof (rc_dialog));

  VAR_6 = FUNC_6 (VAR_3, VAR_4 + 2, 2);
  if (VAR_6 != 0xffff)
    {
      VAR_7->ex = ((void*)0);
      VAR_7->style = FUNC_7 (VAR_3, VAR_4, 4);
      VAR_7->exstyle = FUNC_7 (VAR_3, VAR_4 + 4, 4);
      VAR_11 = 8;
    }
  else
    {
      int VAR_14;

      VAR_14 = FUNC_6 (VAR_3, VAR_4, 2);
      if (VAR_14 != 1)
 FUNC_1 (FUNC_0("unexpected DIALOGEX version %d"), VAR_14);

      VAR_7->ex = (rc_dialog_ex *) FUNC_4 (sizeof (rc_dialog_ex));
      VAR_7->ex->help = FUNC_7 (VAR_3, VAR_4 + 4, 4);
      VAR_7->exstyle = FUNC_7 (VAR_3, VAR_4 + 8, 4);
      VAR_7->style = FUNC_7 (VAR_3, VAR_4 + 12, 4);
      VAR_11 = 16;
    }

  if (VAR_5 < VAR_11 + 10)
    FUNC_5 (FUNC_0("dialog header"));

  VAR_8 = FUNC_6 (VAR_3, VAR_4 + VAR_11, 2);
  VAR_7->x = FUNC_6 (VAR_3, VAR_4 + VAR_11 + 2, 2);
  VAR_7->y = FUNC_6 (VAR_3, VAR_4 + VAR_11 + 4, 2);
  VAR_7->width = FUNC_6 (VAR_3, VAR_4 + VAR_11 + 6, 2);
  VAR_7->height = FUNC_6 (VAR_3, VAR_4 + VAR_11 + 8, 2);

  VAR_11 += 10;

  VAR_9 = FUNC_2 (VAR_3, &VAR_7->menu, VAR_4 + VAR_11, VAR_5 - VAR_11);
  VAR_11 += VAR_9;

  VAR_9 = FUNC_2 (VAR_3, &VAR_7->class, VAR_4 + VAR_11, VAR_5 - VAR_11);
  VAR_11 += VAR_9;

  VAR_7->caption = FUNC_3 (VAR_3, VAR_4 + VAR_11, VAR_5 - VAR_11, &VAR_9);
  VAR_11 += VAR_9 * 2 + 2;
  if (VAR_9 == 0)
    VAR_7->caption = ((void*)0);

  if ((VAR_7->style & VAR_0) == 0)
    {
      VAR_7->pointsize = 0;
      VAR_7->font = ((void*)0);
      if (VAR_7->ex != ((void*)0))
 {
   VAR_7->ex->weight = 0;
   VAR_7->ex->italic = 0;
   VAR_7->ex->charset = 1;
 }
    }
  else
    {
      if (VAR_5 < VAR_11 + 2)
 FUNC_5 (FUNC_0("dialog font point size"));

      VAR_7->pointsize = FUNC_6 (VAR_3, VAR_4 + VAR_11, 2);
      VAR_11 += 2;

      if (VAR_7->ex != ((void*)0))
 {
   if (VAR_5 < VAR_11 + 4)
     FUNC_5 (FUNC_0("dialogex font information"));
   VAR_7->ex->weight = FUNC_6 (VAR_3, VAR_4 + VAR_11, 2);
   VAR_7->ex->italic = FUNC_8 (VAR_3, VAR_4 + VAR_11 + 2, 1);
   VAR_7->ex->charset = FUNC_8 (VAR_3, VAR_4 + VAR_11 + 3, 1);
   VAR_11 += 4;
 }

      VAR_7->font = FUNC_3 (VAR_3, VAR_4 + VAR_11, VAR_5 - VAR_11, &VAR_9);
      VAR_11 += VAR_9 * 2 + 2;
    }

  VAR_7->controls = ((void*)0);
  VAR_12 = &VAR_7->controls;

  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
    {
      rc_dialog_control *VAR_15;
      int VAR_16;

      VAR_11 = (VAR_11 + 3) &~ 3;

      VAR_15 = (rc_dialog_control *) FUNC_4 (sizeof (rc_dialog_control));

      if (VAR_7->ex == ((void*)0))
 {
   if (VAR_5 < VAR_11 + 8)
     FUNC_5 (FUNC_0("dialog control"));

   VAR_15->style = FUNC_7 (VAR_3, VAR_4 + VAR_11, 4);
   VAR_15->exstyle = FUNC_7 (VAR_3, VAR_4 + VAR_11 + 4, 4);
   VAR_15->help = 0;
   VAR_11 += 8;
 }
      else
 {
   if (VAR_5 < VAR_11 + 12)
     FUNC_5 (FUNC_0("dialogex control"));
   VAR_15->help = FUNC_7 (VAR_3, VAR_4 + VAR_11, 4);
   VAR_15->exstyle = FUNC_7 (VAR_3, VAR_4 + VAR_11 + 4, 4);
   VAR_15->style = FUNC_7 (VAR_3, VAR_4 + VAR_11 + 8, 4);
   VAR_11 += 12;
 }

      if (VAR_5 < VAR_11 + (VAR_7->ex != ((void*)0) ? 2 : 0) + 10)
 FUNC_5 (FUNC_0("dialog control"));

      VAR_15->x = FUNC_6 (VAR_3, VAR_4 + VAR_11, 2);
      VAR_15->y = FUNC_6 (VAR_3, VAR_4 + VAR_11 + 2, 2);
      VAR_15->width = FUNC_6 (VAR_3, VAR_4 + VAR_11 + 4, 2);
      VAR_15->height = FUNC_6 (VAR_3, VAR_4 + VAR_11 + 6, 2);

      if (VAR_7->ex != ((void*)0))
 VAR_15->id = FUNC_7 (VAR_3, VAR_4 + VAR_11 + 8, 4);
      else
 VAR_15->id = FUNC_6 (VAR_3, VAR_4 + VAR_11 + 8, 2);

      VAR_11 += 10 + (VAR_7->ex != ((void*)0) ? 2 : 0);

      VAR_9 = FUNC_2 (VAR_3, &VAR_15->class, VAR_4 + VAR_11, VAR_5 - VAR_11);
      VAR_11 += VAR_9;

      VAR_9 = FUNC_2 (VAR_3, &VAR_15->text, VAR_4 + VAR_11, VAR_5 - VAR_11);
      VAR_11 += VAR_9;

      if (VAR_5 < VAR_11 + 2)
 FUNC_5 (FUNC_0("dialog control end"));

      VAR_16 = FUNC_6 (VAR_3, VAR_4 + VAR_11, 2);
      VAR_11 += 2;

      if (VAR_16 == 0)
 VAR_15->data = ((void*)0);
      else
 {
   VAR_11 = (VAR_11 + 3) &~ 3;

   if (VAR_5 < VAR_11 + VAR_16)
     FUNC_5 (FUNC_0("dialog control data"));

   VAR_15->data = ((rc_rcdata_item *)
        FUNC_4 (sizeof (rc_rcdata_item)));
   VAR_15->data->next = ((void*)0);
   VAR_15->data->type = VAR_1;
   VAR_15->data->u.buffer.length = VAR_16;
   VAR_15->data->u.buffer.data = VAR_4 + VAR_11;

   VAR_11 += VAR_16;
 }

      VAR_15->next = ((void*)0);
      *VAR_12 = VAR_15;
      VAR_12 = &VAR_15->next;
    }

  VAR_13 = (rc_res_resource *) FUNC_4 (sizeof *VAR_13);
  VAR_13->type = VAR_2;
  VAR_13->u.dialog = VAR_7;

  return VAR_13;
}
