
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_13__ {int language; } ;
struct TYPE_10__ {int length; int* data; } ;
struct TYPE_11__ {TYPE_1__ data; } ;
struct TYPE_12__ {TYPE_4__ res_info; TYPE_2__ u; int type; } ;
typedef TYPE_3__ rc_res_resource ;
typedef TYPE_4__ rc_res_res_info ;
typedef int rc_res_id ;
struct TYPE_14__ {long length; int* data; struct TYPE_14__* next; scalar_t__ index; } ;
typedef TYPE_5__ rc_fontdir ;
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
 TYPE_5__* VAR_4 ;
 TYPE_4__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int*,int,char*) ;
 int FUNC_6 (int*,int*,int) ;
 int * FUNC_7 (char const*,int ,char*,char**) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (int ) ;
 long FUNC_12 (char const*) ;

void
FUNC_13 (rc_res_id VAR_8, const rc_res_res_info *VAR_9,
      const char *VAR_10)
{
  FILE *VAR_11;
  char *VAR_12;
  struct stat VAR_13;
  bfd_byte *VAR_14;
  rc_res_resource *VAR_15;
  long VAR_16;
  long VAR_17;
  bfd_byte *VAR_18;
  rc_fontdir *VAR_19;
  const char *VAR_20, *VAR_21;
  rc_fontdir **VAR_22;

  VAR_11 = FUNC_7 (VAR_10, VAR_0, "font file", &VAR_12);

  if (FUNC_9 (VAR_12, &VAR_13) < 0)
    FUNC_2 (FUNC_0("stat failed on font file `%s': %s"), VAR_12,
    FUNC_11 (VAR_3));

  VAR_14 = (bfd_byte *) FUNC_8 (VAR_13.st_size);

  FUNC_5 (VAR_11, VAR_14, VAR_13.st_size, VAR_12);

  FUNC_3 (VAR_11);
  FUNC_4 (VAR_12);

  VAR_15 = FUNC_1 (&VAR_7, VAR_2, VAR_8,
    VAR_9->language, 0);

  VAR_15->type = VAR_1;
  VAR_15->u.data.length = VAR_13.st_size;
  VAR_15->u.data.data = VAR_14;
  VAR_15->res_info = *VAR_9;






  VAR_16 = ((((((VAR_14[47] << 8)
  | VAR_14[46]) << 8)
       | VAR_14[45]) << 8)
     | VAR_14[44]);
  if (VAR_16 > 0 && VAR_16 < VAR_13.st_size)
    VAR_20 = (char *) VAR_14 + VAR_16;
  else
    VAR_20 = "";

  VAR_16 = ((((((VAR_14[51] << 8)
  | VAR_14[50]) << 8)
       | VAR_14[49]) << 8)
     | VAR_14[48]);
  if (VAR_16 > 0 && VAR_16 < VAR_13.st_size)
    VAR_21 = (char *) VAR_14 + VAR_16;
  else
    VAR_21 = "";

  ++VAR_6;

  VAR_17 = 58 + FUNC_12 (VAR_20) + FUNC_12 (VAR_21);
  VAR_18 = (bfd_byte *) FUNC_8 (VAR_17);
  FUNC_6 (VAR_18, VAR_14, 56);
  FUNC_10 ((char *) VAR_18 + 56, VAR_20);
  FUNC_10 ((char *) VAR_18 + 57 + FUNC_12 (VAR_20), VAR_21);

  VAR_19 = (rc_fontdir *) FUNC_8 (sizeof (rc_fontdir));
  VAR_19->next = ((void*)0);
  VAR_19->index = VAR_6;
  VAR_19->length = VAR_17;
  VAR_19->data = VAR_18;

  for (VAR_22 = &VAR_4; *VAR_22 != ((void*)0); VAR_22 = &(*VAR_22)->next)
    ;
  *VAR_22 = VAR_19;



  VAR_5 = *VAR_9;
}
