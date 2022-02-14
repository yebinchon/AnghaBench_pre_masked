
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* dt_errmsg; scalar_t__ dt_ctferr; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_5__ {int err; char const* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;

const char *
FUNC_2(dtrace_hdl_t *VAR_5, int VAR_6)
{
 const char *VAR_7;
 int VAR_8;

 if (VAR_6 == VAR_1 && VAR_5 != ((void*)0) && VAR_5->dt_errmsg[0] != '\0')
  VAR_7 = VAR_5->dt_errmsg;
 else if (VAR_6 == VAR_2 && VAR_5 != ((void*)0) && VAR_5->dt_ctferr != 0)
  VAR_7 = FUNC_0(VAR_5->dt_ctferr);
 else if (VAR_6 >= VAR_0 && (VAR_6 - VAR_0) < VAR_4) {
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   if (VAR_3[VAR_8].err == VAR_6)
    return (VAR_3[VAR_8].msg);
  }
  VAR_7 = ((void*)0);
 } else
  VAR_7 = FUNC_1(VAR_6);

 return (VAR_7 ? VAR_7 : "Unknown error");
}
