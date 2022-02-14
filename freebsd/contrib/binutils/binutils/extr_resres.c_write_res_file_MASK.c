
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int sign ;
typedef int rc_uint_type ;
typedef int rc_res_id ;
typedef int rc_res_directory ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_6__ {struct TYPE_6__* output_section; } ;
typedef TYPE_1__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (int *,TYPE_1__*,unsigned long) ;
 int FUNC_5 (char*,long,long) ;
 char const* VAR_6 ;
 int FUNC_6 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_7 (int *,int const*,unsigned long,int) ;
 scalar_t__ VAR_7 ;
 int * FUNC_8 (char const*,int ) ;
 unsigned long FUNC_9 (int *,int,int const*,int const*,int const*,int*,int) ;

void
FUNC_10 (const char *VAR_8,const rc_res_directory *VAR_9)
{
  asection *VAR_10;
  rc_uint_type VAR_11;
  bfd *VAR_12;
  windres_bfd VAR_13;
  unsigned long VAR_14 = 0,VAR_15;
  static const bfd_byte VAR_16[] =
  {0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
   0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

  VAR_6 = VAR_8;

  VAR_12 = FUNC_8 (VAR_6, 0);
  VAR_10 = FUNC_2 (VAR_12, ".data");
  if (VAR_10 == ((void*)0))
    FUNC_1 ("bfd_make_section");
  if (! FUNC_3 (VAR_12, VAR_10,
          (VAR_2 | VAR_0
           | VAR_3 | VAR_1)))
    FUNC_1 ("bfd_set_section_flags");

  VAR_10->output_section = VAR_10;

  FUNC_6 (&VAR_13, VAR_12, VAR_10,
     (VAR_7 ? VAR_4
     : VAR_5));

  VAR_11 = -1;
  VAR_14 = FUNC_9 ((windres_bfd *) ((void*)0), 0x20UL, VAR_9,
        (const rc_res_id *) ((void*)0),
        (const rc_res_id *) ((void*)0), &VAR_11, 1);
  if (! FUNC_4 (VAR_12, VAR_10, (VAR_14 + 3) & ~3))
    FUNC_1 ("bfd_set_section_size");
  if ((VAR_14 & 3) != 0)
    FUNC_7 (&VAR_13, VAR_16, VAR_14, 4-(VAR_14 & 3));
  FUNC_7 (&VAR_13, VAR_16, 0, sizeof (VAR_16));
  VAR_11 = -1;
  VAR_15 = FUNC_9 (&VAR_13, 0x20UL, VAR_9,
       (const rc_res_id *) ((void*)0),
       (const rc_res_id *) ((void*)0),
       &VAR_11, 1);
  if (VAR_14 != VAR_15)
    FUNC_5 ("res write failed with different sizes (%lu/%lu).", (long) VAR_14,
        (long) VAR_15);

  FUNC_0 (VAR_12);
  return;
}
