
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ rc_uint_type ;
struct TYPE_10__ {int language; } ;
struct TYPE_7__ {int * data; scalar_t__ length; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
struct TYPE_9__ {TYPE_4__ res_info; TYPE_2__ u; int type; } ;
typedef TYPE_3__ rc_res_resource ;
typedef TYPE_4__ rc_res_res_info ;
typedef int rc_res_id ;
typedef int bfd_byte ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int *,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *,scalar_t__,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,int ,char*,char**) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (int ) ;

void
FUNC_11 (rc_res_id VAR_6, const rc_res_res_info *VAR_7,
        const char *VAR_8)
{
  FILE *VAR_9;
  char *VAR_10;
  struct stat VAR_11;
  bfd_byte *VAR_12;
  rc_uint_type VAR_13;
  rc_res_resource *VAR_14;

  VAR_9 = FUNC_7 (VAR_8, VAR_1, "bitmap file", &VAR_10);

  if (FUNC_9 (VAR_10, &VAR_11) < 0)
    FUNC_2 (FUNC_0("stat failed on bitmap file `%s': %s"), VAR_10,
    FUNC_10 (VAR_4));

  VAR_12 = (bfd_byte *) FUNC_8 (VAR_11.st_size - VAR_0);

  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++)
    FUNC_6 (VAR_9);

  FUNC_5 (VAR_9, VAR_12, VAR_11.st_size - VAR_0, VAR_10);

  FUNC_3 (VAR_9);
  FUNC_4 (VAR_10);

  VAR_14 = FUNC_1 (&VAR_5, VAR_3, VAR_6,
    VAR_7->language, 0);

  VAR_14->type = VAR_2;
  VAR_14->u.data.length = VAR_11.st_size - VAR_0;
  VAR_14->u.data.data = VAR_12;
  VAR_14->res_info = *VAR_7;
}
