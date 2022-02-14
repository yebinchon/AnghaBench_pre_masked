
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_size; } ;
typedef int rc_res_res_info ;
typedef int rc_res_id ;
struct TYPE_5__ {int length; int * data; } ;
struct TYPE_6__ {TYPE_1__ buffer; } ;
struct TYPE_7__ {TYPE_2__ u; int type; int * next; } ;
typedef TYPE_3__ rc_rcdata_item ;
typedef int bfd_byte ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int const*,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int *,int,char*) ;
 int * FUNC_6 (char const*,int ,char*,char**) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 int FUNC_9 (int ) ;

void
FUNC_10 (rc_res_id VAR_3, const rc_res_res_info *VAR_4,
      const char *VAR_5)
{
  rc_rcdata_item *VAR_6;
  FILE *VAR_7;
  char *VAR_8;
  struct stat VAR_9;
  bfd_byte *VAR_10;

  VAR_7 = FUNC_6 (VAR_5, VAR_0, "file", &VAR_8);


  if (FUNC_8 (VAR_8, &VAR_9) < 0)
    FUNC_2 (FUNC_0("stat failed on file `%s': %s"), VAR_8,
    FUNC_9 (VAR_2));

  VAR_10 = (bfd_byte *) FUNC_7 (VAR_9.st_size);

  FUNC_5 (VAR_7, VAR_10, VAR_9.st_size, VAR_8);

  FUNC_3 (VAR_7);
  FUNC_4 (VAR_8);

  VAR_6 = (rc_rcdata_item *) FUNC_7 (sizeof (rc_rcdata_item));
  VAR_6->next = ((void*)0);
  VAR_6->type = VAR_1;
  VAR_6->u.buffer.length = VAR_9.st_size;
  VAR_6->u.buffer.data = VAR_10;

  FUNC_1 (VAR_3, VAR_4, VAR_6);
}
