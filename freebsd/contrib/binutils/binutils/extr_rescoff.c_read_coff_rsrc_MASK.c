
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct coff_file_info {char const* filename; scalar_t__ secaddr; int * data_end; int * data; } ;
typedef int rc_res_id ;
typedef int rc_res_directory ;
typedef int bfd_size_type ;
typedef int bfd_byte ;
typedef int bfd ;
typedef int asection ;
struct TYPE_3__ {scalar_t__ ImageBase; } ;
struct TYPE_4__ {TYPE_1__ pe_opthdr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,char***) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int * FUNC_9 (char const*,char const*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,...) ;
 int FUNC_12 (int *,int *,int ,int) ;
 int FUNC_13 (char**) ;
 TYPE_2__* FUNC_14 (int *) ;
 int * FUNC_15 (int *,int *,struct coff_file_info*,int const*,int ) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *,int *,int *,int ) ;
 int FUNC_18 (int) ;

rc_res_directory *
FUNC_19 (const char *VAR_3, const char *VAR_4)
{
  rc_res_directory *VAR_5;
  bfd *VAR_6;
  windres_bfd VAR_7;
  char **VAR_8;
  asection *VAR_9;
  bfd_size_type VAR_10;
  bfd_byte *VAR_11;
  struct coff_file_info VAR_12;

  if (VAR_3 == ((void*)0))
    FUNC_11 (FUNC_0("filename required for COFF input"));

  VAR_6 = FUNC_9 (VAR_3, VAR_4);
  if (VAR_6 == ((void*)0))
    FUNC_3 (VAR_3);

  if (! FUNC_1 (VAR_6, VAR_2, &VAR_8))
    {
      FUNC_8 (FUNC_5 (VAR_6));
      if (FUNC_4 () == VAR_1)
 FUNC_13 (VAR_8);
      FUNC_18 (1);
    }

  VAR_9 = FUNC_6 (VAR_6, ".rsrc");
  if (VAR_9 == ((void*)0))
    {
      FUNC_11 (FUNC_0("%s: no resource section"), VAR_3);
    }

  FUNC_17 (&VAR_7, VAR_6, VAR_9, VAR_0);
  VAR_10 = FUNC_10 (VAR_6, VAR_9);
  VAR_11 = (bfd_byte *) FUNC_16 (VAR_10);

  FUNC_12 (&VAR_7, VAR_11, 0, VAR_10);

  VAR_12.filename = VAR_3;
  VAR_12.data = VAR_11;
  VAR_12.data_end = VAR_11 + VAR_10;
  VAR_12.secaddr = (FUNC_7 (VAR_6, VAR_9)
     - FUNC_14 (VAR_6)->pe_opthdr.ImageBase);






  VAR_5 = FUNC_15 (&VAR_7, VAR_11, &VAR_12, (const rc_res_id *) ((void*)0), 0);

  FUNC_2 (VAR_6);

  return VAR_5;
}
