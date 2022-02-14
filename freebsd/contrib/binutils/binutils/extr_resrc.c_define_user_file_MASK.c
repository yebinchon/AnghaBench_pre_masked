
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_19__ {int language; } ;
struct TYPE_17__ {TYPE_8__* userdata; } ;
struct TYPE_18__ {TYPE_6__ res_info; TYPE_4__ u; int type; } ;
typedef TYPE_5__ rc_res_resource ;
typedef TYPE_6__ rc_res_res_info ;
struct TYPE_14__ {int id; } ;
struct TYPE_20__ {TYPE_1__ u; scalar_t__ named; } ;
typedef TYPE_7__ rc_res_id ;
struct TYPE_15__ {int length; int * data; } ;
struct TYPE_16__ {TYPE_2__ buffer; } ;
struct TYPE_21__ {TYPE_3__ u; int type; int * next; } ;
typedef TYPE_8__ rc_rcdata_item ;
typedef int bfd_byte ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_5__* FUNC_1 (int *,int,TYPE_7__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *,int,char*) ;
 int * FUNC_6 (char const*,int ,char*,char**) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 int FUNC_9 (int ) ;

void
FUNC_10 (rc_res_id VAR_5, rc_res_id VAR_6,
    const rc_res_res_info *VAR_7, const char *VAR_8)
{
  FILE *VAR_9;
  char *VAR_10;
  struct stat VAR_11;
  bfd_byte *VAR_12;
  rc_res_id VAR_13[3];
  rc_res_resource *VAR_14;

  VAR_9 = FUNC_6 (VAR_8, VAR_0, "file", &VAR_10);

  if (FUNC_8 (VAR_10, &VAR_11) < 0)
    FUNC_2 (FUNC_0("stat failed on file `%s': %s"), VAR_10,
    FUNC_9 (VAR_3));

  VAR_12 = (bfd_byte *) FUNC_7 (VAR_11.st_size);

  FUNC_5 (VAR_9, VAR_12, VAR_11.st_size, VAR_10);

  FUNC_3 (VAR_9);
  FUNC_4 (VAR_10);

  VAR_13[0] = VAR_6;
  VAR_13[1] = VAR_5;
  VAR_13[2].named = 0;
  VAR_13[2].u.id = VAR_7->language;

  VAR_14 = FUNC_1 (&VAR_4, 3, VAR_13, 0);
  VAR_14->type = VAR_2;
  VAR_14->u.userdata = ((rc_rcdata_item *)
     FUNC_7 (sizeof (rc_rcdata_item)));
  VAR_14->u.userdata->next = ((void*)0);
  VAR_14->u.userdata->type = VAR_1;
  VAR_14->u.userdata->u.buffer.length = VAR_11.st_size;
  VAR_14->u.userdata->u.buffer.data = VAR_12;
  VAR_14->res_info = *VAR_7;
}
