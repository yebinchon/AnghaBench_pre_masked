
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_10__ {int language; } ;
struct TYPE_7__ {int * data; int length; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
struct TYPE_9__ {TYPE_4__ res_info; TYPE_2__ u; int type; } ;
typedef TYPE_3__ rc_res_resource ;
typedef TYPE_4__ rc_res_res_info ;
typedef int rc_res_id ;
typedef int bfd_byte ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int *,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *,int ,char*) ;
 int * FUNC_6 (char const*,int ,char*,char**) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 int FUNC_9 (int ) ;

void
FUNC_10 (rc_res_id VAR_5, const rc_res_res_info *VAR_6,
       const char *VAR_7)
{
  FILE *VAR_8;
  char *VAR_9;
  struct stat VAR_10;
  bfd_byte *VAR_11;
  rc_res_resource *VAR_12;

  VAR_8 = FUNC_6 (VAR_7, VAR_0, "messagetable file",
   &VAR_9);

  if (FUNC_8 (VAR_9, &VAR_10) < 0)
    FUNC_2 (FUNC_0("stat failed on bitmap file `%s': %s"), VAR_9,
    FUNC_9 (VAR_3));

  VAR_11 = (bfd_byte *) FUNC_7 (VAR_10.st_size);

  FUNC_5 (VAR_8, VAR_11, VAR_10.st_size, VAR_9);

  FUNC_3 (VAR_8);
  FUNC_4 (VAR_9);

  VAR_12 = FUNC_1 (&VAR_4, VAR_2, VAR_5,
    VAR_6->language, 0);

  VAR_12->type = VAR_1;
  VAR_12->u.data.length = VAR_10.st_size;
  VAR_12->u.data.data = VAR_11;
  VAR_12->res_info = *VAR_6;
}
