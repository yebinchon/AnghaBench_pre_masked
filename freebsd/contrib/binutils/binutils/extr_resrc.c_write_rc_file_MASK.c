
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rc_uint_type ;
typedef int rc_res_id ;
typedef int rc_res_directory ;
typedef scalar_t__ bfd_signed_vma ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,int ) ;
 int * FUNC_2 (char const*,int ) ;
 int * VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int const*,int const*,int const*,scalar_t__*,int) ;

void
FUNC_5 (const char *VAR_3, const rc_res_directory *VAR_4)
{
  FILE *VAR_5;
  rc_uint_type VAR_6;

  if (VAR_3 == ((void*)0))
    VAR_5 = VAR_2;
  else
    {
      VAR_5 = FUNC_2 (VAR_3, VAR_0);
      if (VAR_5 == ((void*)0))
 FUNC_1 (FUNC_0("can't open `%s' for output: %s"), VAR_3, FUNC_3 (VAR_1));
    }

  VAR_6 = (rc_uint_type) ((bfd_signed_vma) -1);
  FUNC_4 (VAR_5, VAR_4, (const rc_res_id *) ((void*)0),
        (const rc_res_id *) ((void*)0), &VAR_6, 1);
}
