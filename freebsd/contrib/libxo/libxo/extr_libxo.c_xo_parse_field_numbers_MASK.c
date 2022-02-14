
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xo_handle_t ;
struct TYPE_3__ {unsigned int xfi_fnum; } ;
typedef TYPE_1__ xo_field_info_t ;
typedef unsigned int uint64_t ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_1 (xo_handle_t *VAR_0, const char *VAR_1,
   xo_field_info_t *VAR_2, unsigned VAR_3)
{
    xo_field_info_t *VAR_4;
    unsigned VAR_5, VAR_6;
    uint64_t VAR_7 = 0;
    const uint64_t VAR_8 = 1;

    for (VAR_4 = VAR_2, VAR_5 = 0; VAR_5 < VAR_3; VAR_4++, VAR_5++) {

 if (VAR_4->xfi_fnum == 0)
     VAR_4->xfi_fnum = VAR_5 + 1;
 else if (VAR_4->xfi_fnum > VAR_3) {
     FUNC_0(VAR_0, "field number exceeds number of fields: '%s'", VAR_1);
     return -1;
 }

 VAR_6 = VAR_4->xfi_fnum - 1;
 if (VAR_6 < 64) {
     if (VAR_7 & (VAR_8 << VAR_6)) {
  FUNC_0(VAR_0, "field number %u reused: '%s'",
      VAR_4->xfi_fnum, VAR_1);
  return -1;
     }
     VAR_7 |= VAR_8 << VAR_6;
 }
    }

    return 0;
}
