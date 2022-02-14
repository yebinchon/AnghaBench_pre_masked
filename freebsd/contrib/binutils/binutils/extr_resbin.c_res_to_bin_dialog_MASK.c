
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_dialogfont {struct bin_dialogfont* off; struct bin_dialogfont* id; struct bin_dialogfont* height; struct bin_dialogfont* width; struct bin_dialogfont* y; struct bin_dialogfont* x; struct bin_dialogfont* style; struct bin_dialogfont* exstyle; struct bin_dialogfont* help; int charset; int italic; struct bin_dialogfont* weight; struct bin_dialogfont* pointsize; struct bin_dialogfont* sig2; struct bin_dialogfont* sig1; } ;
struct bin_dialogexfont {struct bin_dialogexfont* off; struct bin_dialogexfont* id; struct bin_dialogexfont* height; struct bin_dialogexfont* width; struct bin_dialogexfont* y; struct bin_dialogexfont* x; struct bin_dialogexfont* style; struct bin_dialogexfont* exstyle; struct bin_dialogexfont* help; int charset; int italic; struct bin_dialogexfont* weight; struct bin_dialogexfont* pointsize; struct bin_dialogexfont* sig2; struct bin_dialogexfont* sig1; } ;
struct bin_dialogex_control {struct bin_dialogex_control* off; struct bin_dialogex_control* id; struct bin_dialogex_control* height; struct bin_dialogex_control* width; struct bin_dialogex_control* y; struct bin_dialogex_control* x; struct bin_dialogex_control* style; struct bin_dialogex_control* exstyle; struct bin_dialogex_control* help; int charset; int italic; struct bin_dialogex_control* weight; struct bin_dialogex_control* pointsize; struct bin_dialogex_control* sig2; struct bin_dialogex_control* sig1; } ;
struct bin_dialogex {struct bin_dialogex* off; struct bin_dialogex* id; struct bin_dialogex* height; struct bin_dialogex* width; struct bin_dialogex* y; struct bin_dialogex* x; struct bin_dialogex* style; struct bin_dialogex* exstyle; struct bin_dialogex* help; int charset; int italic; struct bin_dialogex* weight; struct bin_dialogex* pointsize; struct bin_dialogex* sig2; struct bin_dialogex* sig1; } ;
struct bin_dialog_control {struct bin_dialog_control* off; struct bin_dialog_control* id; struct bin_dialog_control* height; struct bin_dialog_control* width; struct bin_dialog_control* y; struct bin_dialog_control* x; struct bin_dialog_control* style; struct bin_dialog_control* exstyle; struct bin_dialog_control* help; int charset; int italic; struct bin_dialog_control* weight; struct bin_dialog_control* pointsize; struct bin_dialog_control* sig2; struct bin_dialog_control* sig1; } ;
struct bin_dialog {struct bin_dialog* off; struct bin_dialog* id; struct bin_dialog* height; struct bin_dialog* width; struct bin_dialog* y; struct bin_dialog* x; struct bin_dialog* style; struct bin_dialog* exstyle; struct bin_dialog* help; int charset; int italic; struct bin_dialog* weight; struct bin_dialog* pointsize; struct bin_dialog* sig2; struct bin_dialog* sig1; } ;
typedef int rc_uint_type ;
struct TYPE_7__ {int style; int exstyle; int x; int y; int width; int height; int id; int help; int * data; int text; int class; struct TYPE_7__* next; } ;
typedef TYPE_2__ rc_dialog_control ;
struct TYPE_8__ {int style; int exstyle; int x; int y; int width; int height; int pointsize; TYPE_2__* controls; int font; TYPE_1__* ex; int caption; int class; int menu; } ;
typedef TYPE_3__ rc_dialog ;
typedef struct bin_dialogfont bfd_byte ;
struct TYPE_6__ {int help; int weight; int italic; int charset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,struct bin_dialogfont*,int,int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,struct bin_dialogfont*,int) ;
 int FUNC_6 (int *,struct bin_dialogfont*,int) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static rc_uint_type
FUNC_8 (windres_bfd *VAR_7, rc_uint_type VAR_8, const rc_dialog *VAR_9)
{
  rc_uint_type VAR_10;
  rc_uint_type VAR_11, VAR_12;
  int VAR_13;
  int VAR_14;
  rc_dialog_control *VAR_15;
  struct bin_dialogex VAR_16;
  struct bin_dialog VAR_17;

  VAR_10 = VAR_8;
  VAR_11 = VAR_8;
  VAR_13 = FUNC_0 (VAR_9);

  if (VAR_7)
    {
  if (! VAR_13)
    {
   FUNC_6 (VAR_7, VAR_17.style, VAR_9->style);
   FUNC_6 (VAR_7, VAR_17.exstyle, VAR_9->exstyle);
   FUNC_5 (VAR_7, VAR_17.x, VAR_9->x);
   FUNC_5 (VAR_7, VAR_17.y, VAR_9->y);
   FUNC_5 (VAR_7, VAR_17.width, VAR_9->width);
   FUNC_5 (VAR_7, VAR_17.height, VAR_9->height);
    }
  else
    {
   FUNC_5 (VAR_7, VAR_16.sig1, 1);
   FUNC_5 (VAR_7, VAR_16.sig2, 0xffff);
   FUNC_6 (VAR_7, VAR_16.help, (VAR_9->ex ? VAR_9->ex->help : 0));
   FUNC_6 (VAR_7, VAR_16.exstyle, VAR_9->exstyle);
   FUNC_6 (VAR_7, VAR_16.style, VAR_9->style);
   FUNC_5 (VAR_7, VAR_16.x, VAR_9->x);
   FUNC_5 (VAR_7, VAR_16.y, VAR_9->y);
   FUNC_5 (VAR_7, VAR_16.width, VAR_9->width);
   FUNC_5 (VAR_7, VAR_16.height, VAR_9->height);
 }
    }

  VAR_8 += (VAR_13 != 0 ? VAR_2 : VAR_5);

  VAR_8 = FUNC_2 (VAR_7, VAR_8, VAR_9->menu);
  VAR_8 = FUNC_2 (VAR_7, VAR_8, VAR_9->class);
  VAR_8 = FUNC_4 (VAR_7, VAR_8, VAR_9->caption);

  if ((VAR_9->style & VAR_6) != 0)
    {
      if (VAR_7)
 {
   if (! VAR_13)
     {
       struct bin_dialogfont VAR_18;
       FUNC_5 (VAR_7, VAR_18.pointsize, VAR_9->pointsize);
       FUNC_3 (VAR_7, &VAR_18, VAR_8, VAR_3);
     }
   else
     {
       struct bin_dialogexfont VAR_19;
       FUNC_5 (VAR_7, VAR_19.pointsize, VAR_9->pointsize);
       FUNC_5 (VAR_7, VAR_19.weight, (VAR_9->ex == ((void*)0) ? 0 : VAR_9->ex->weight));
       FUNC_7 (VAR_7, VAR_19.italic, (VAR_9->ex == ((void*)0) ? 0 : VAR_9->ex->italic));
       FUNC_7 (VAR_7, VAR_19.charset, (VAR_9->ex == ((void*)0) ? 1 : VAR_9->ex->charset));
       FUNC_3 (VAR_7, &VAR_19, VAR_8, VAR_0);
     }
 }
      VAR_8 += (VAR_13 ? VAR_0 : VAR_3);
      VAR_8 = FUNC_4 (VAR_7, VAR_8, VAR_9->font);
    }
  for (VAR_14 = 0, VAR_15 = VAR_9->controls; VAR_15 != ((void*)0); VAR_15 = VAR_15->next, VAR_14++)
    {
      bfd_byte VAR_20[2];

      VAR_8 += (4 - ((VAR_8 - VAR_10) & 3)) & 3;
      if (VAR_7)
 {
      if (! VAR_13)
 {
       struct bin_dialog_control VAR_21;

       FUNC_6 (VAR_7, VAR_21.style, VAR_15->style);
       FUNC_6 (VAR_7, VAR_21.exstyle, VAR_15->exstyle);
       FUNC_5 (VAR_7, VAR_21.x, VAR_15->x);
       FUNC_5 (VAR_7, VAR_21.y, VAR_15->y);
       FUNC_5 (VAR_7, VAR_21.width, VAR_15->width);
       FUNC_5 (VAR_7, VAR_21.height, VAR_15->height);
       FUNC_5 (VAR_7, VAR_21.id, VAR_15->id);
       FUNC_3 (VAR_7, &VAR_21, VAR_8, VAR_4);
 }
      else
 {
       struct bin_dialogex_control VAR_22;

       FUNC_6 (VAR_7, VAR_22.help, VAR_15->help);
       FUNC_6 (VAR_7, VAR_22.exstyle, VAR_15->exstyle);
       FUNC_6 (VAR_7, VAR_22.style, VAR_15->style);
       FUNC_5 (VAR_7, VAR_22.x, VAR_15->x);
       FUNC_5 (VAR_7, VAR_22.y, VAR_15->y);
       FUNC_5 (VAR_7, VAR_22.width, VAR_15->width);
       FUNC_5 (VAR_7, VAR_22.height, VAR_15->height);
       FUNC_6 (VAR_7, VAR_22.id, VAR_15->id);
       FUNC_3 (VAR_7, &VAR_22, VAR_8, VAR_1);
     }
 }
      VAR_8 += (VAR_13 != 0 ? VAR_1 : VAR_4);

      VAR_8 = FUNC_2 (VAR_7, VAR_8, VAR_15->class);
      VAR_8 = FUNC_2 (VAR_7, VAR_8, VAR_15->text);

      VAR_12 = VAR_8;
      VAR_8 += 2;

      if (VAR_15->data == ((void*)0))
        {
   if (VAR_7)
     FUNC_5 (VAR_7, VAR_20, 0);
 }
      else
 {
   rc_uint_type VAR_23 = VAR_8;
   rc_uint_type VAR_24;
   VAR_8 += (4 - ((VAR_8 - VAR_10) & 3)) & 3;

   VAR_24 = VAR_8;
   VAR_8 = FUNC_1 (VAR_7, VAR_8, VAR_15->data);
   if ((VAR_8 - VAR_24) == 0)
     VAR_24 = VAR_8 = VAR_23;
   if (VAR_7)
     FUNC_5 (VAR_7, VAR_20, VAR_8 - VAR_24);
     }
      if (VAR_7)
 FUNC_3 (VAR_7, VAR_20, VAR_12, 2);
 }

  if (VAR_7)
    {
      FUNC_5 (VAR_7, (VAR_13 != 0 ? VAR_16.off : VAR_17.off), VAR_14);
      if (! VAR_13)
 FUNC_3 (VAR_7, &VAR_17, VAR_11, VAR_5);
      else
 FUNC_3 (VAR_7, &VAR_16, VAR_11, VAR_2);
    }

  return VAR_8;
}
