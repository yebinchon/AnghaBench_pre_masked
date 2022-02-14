
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_9__ {int language; } ;
struct TYPE_7__ {TYPE_4__* group_cursor; } ;
struct TYPE_8__ {TYPE_3__ res_info; TYPE_1__ u; int type; } ;
typedef TYPE_2__ rc_res_resource ;
typedef TYPE_3__ rc_res_res_info ;
typedef int rc_res_id ;
typedef int rc_rcdata_item ;
struct TYPE_10__ {struct TYPE_10__* next; void* index; int bytes; void* bits; void* planes; void* height; void* width; } ;
typedef TYPE_4__ rc_group_cursor ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_2 ;
 void* FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7 (rc_res_id VAR_4, const rc_res_res_info *VAR_5,
       rc_rcdata_item *VAR_6)
{
  rc_res_resource *VAR_7;
  rc_group_cursor *VAR_8, *VAR_9, *VAR_10;
  rc_uint_type VAR_11;
  bfd_byte *VAR_12;

  VAR_12 = FUNC_3 (VAR_6, &VAR_11);

  VAR_9 = VAR_10 = ((void*)0);

  while (VAR_11 >= 6)
    {
      int VAR_13, VAR_14;
      unsigned short VAR_15;
      VAR_15 = FUNC_5 (&VAR_3, VAR_12 + 2, VAR_11 - 2);
      if (VAR_15 != 2)
 FUNC_2 (FUNC_0("unexpected group cursor type %d"), VAR_15);
      VAR_13 = FUNC_5 (&VAR_3, VAR_12 + 4, VAR_11 - 4);
      VAR_11 -= 6;
      VAR_12 += 6;

      for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
 {
   if (VAR_11 < 14)
     FUNC_2 ("too small group icon rcdata");
   VAR_8 = (rc_group_cursor *) FUNC_4 (sizeof (rc_group_cursor));
   VAR_8->next = ((void*)0);
   VAR_8->width = FUNC_5 (&VAR_3, VAR_12, VAR_11);
   VAR_8->height = FUNC_5 (&VAR_3, VAR_12 + 2, VAR_11 - 2);
   VAR_8->planes = FUNC_5 (&VAR_3, VAR_12 + 4, VAR_11 - 4);
   VAR_8->bits = FUNC_5 (&VAR_3, VAR_12 + 6, VAR_11 - 6);
   VAR_8->bytes = FUNC_6 (&VAR_3, VAR_12 + 8, VAR_11 - 8);
   VAR_8->index = FUNC_5 (&VAR_3, VAR_12 + 12, VAR_11 - 12);
   if (! VAR_9)
     VAR_9 = VAR_8;
   else
     VAR_10->next = VAR_8;
   VAR_10 = VAR_8;
   VAR_12 += 14;
   VAR_11 -= 14;
 }
    }

  VAR_7 = FUNC_1 (&VAR_2, VAR_1, VAR_4,
    VAR_5->language, 0);
  VAR_7->type = VAR_0;
  VAR_7->u.group_cursor = VAR_9;
  VAR_7->res_info = *VAR_5;
}
