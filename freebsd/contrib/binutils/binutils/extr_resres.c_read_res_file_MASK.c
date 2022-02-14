
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int windres_bfd ;
typedef scalar_t__ rc_uint_type ;
typedef int rc_res_directory ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char const*) ;
 char const* VAR_2 ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,scalar_t__*,scalar_t__) ;
 int * VAR_3 ;
 int FUNC_7 (int *,int *,int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int * FUNC_10 (char const*,int) ;

rc_res_directory *
FUNC_11 (const char *VAR_5)
{
  rc_uint_type VAR_6, VAR_7;
  windres_bfd VAR_8;
  bfd *VAR_9;
  asection *VAR_10;
  VAR_2 = VAR_5;

  VAR_7 = (rc_uint_type) FUNC_4 (VAR_2);
  if (! VAR_7)
    FUNC_3 ("can't open '%s' for input.", VAR_2);
  VAR_9 = FUNC_10 (VAR_2, 1);
  VAR_10 = FUNC_2 (VAR_9, ".data");
  if (VAR_10 == ((void*)0))
    FUNC_1 ("bfd_get_section_by_name");
  FUNC_7 (&VAR_8, VAR_9, VAR_10,
     (VAR_4 ? VAR_0
     : VAR_1));
  VAR_6 = 0;

  if (! FUNC_5 (&VAR_8, VAR_7))
    FUNC_8 (&VAR_8, ! VAR_4);

  FUNC_9 (&VAR_8, &VAR_6, VAR_7);

  while (FUNC_6 (&VAR_8, &VAR_6, VAR_7))
    ;

  FUNC_0 (VAR_9);

  return VAR_3;
}
