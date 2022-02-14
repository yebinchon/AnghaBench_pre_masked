
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
struct TYPE_3__ {scalar_t__ data_size; int header_size; } ;
typedef TYPE_1__ res_hdr ;
typedef int rc_uint_type ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*,char*,char*) ;
 char* VAR_2 ;
 int FUNC_1 (int *,int*,int,TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (windres_bfd *VAR_5, rc_uint_type *VAR_6, rc_uint_type VAR_7)
{
  res_hdr VAR_8;
  FUNC_1 (VAR_5, VAR_6, VAR_7, &VAR_8);
  if (VAR_8.data_size != 0)
    goto skip_err;
  if ((VAR_8.header_size != 0x20 && ! VAR_4)
    || (VAR_8.header_size != 0x20000000 && VAR_4))
    goto skip_err;


  VAR_6[0] += 0x20 - VAR_0;
  if (VAR_6[0] >= VAR_7)
    goto skip_err;

  return;

skip_err:
  FUNC_0 (VAR_3, "%s: %s: Not a valid WIN32 resource file\n", VAR_2,
    VAR_1);
  FUNC_2 (1);
}
