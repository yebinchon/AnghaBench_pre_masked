
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {char* dt_errmsg; char* dt_filetag; char const* dt_errtag; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_5__ {int pcb_cflags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,...) ;
 size_t FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,size_t,char const*,int ) ;
 TYPE_2__* VAR_1 ;

void
FUNC_4(dtrace_hdl_t *VAR_2, const char *VAR_3, const char *VAR_4,
    const char *VAR_5, int VAR_6, const char *VAR_7, va_list VAR_8)
{
 size_t VAR_9, VAR_10;
 char *VAR_11, *VAR_12;

 VAR_12 = VAR_2->dt_errmsg;
 VAR_10 = sizeof (VAR_2->dt_errmsg);

 if (VAR_3 != ((void*)0) && (VAR_1->pcb_cflags & VAR_0))
  (void) FUNC_0(VAR_12, VAR_10, "[%s] ", VAR_3);
 else
  VAR_12[0] = '\0';

 VAR_9 = FUNC_1(VAR_2->dt_errmsg);
 VAR_12 = VAR_2->dt_errmsg + VAR_9;
 VAR_10 = sizeof (VAR_2->dt_errmsg) - VAR_9;

 if (VAR_5 == ((void*)0))
  VAR_5 = VAR_2->dt_filetag;

 if (VAR_5 != ((void*)0))
  (void) FUNC_0(VAR_12, VAR_10, "\"%s\", line %d: ", VAR_5, VAR_6);
 else if (VAR_6 != 0)
  (void) FUNC_0(VAR_12, VAR_10, "line %d: ", VAR_6);
 else if (VAR_4 != ((void*)0))
  (void) FUNC_0(VAR_12, VAR_10, "in %s: ", VAR_4);

 VAR_9 = FUNC_1(VAR_2->dt_errmsg);
 VAR_12 = VAR_2->dt_errmsg + VAR_9;
 VAR_10 = sizeof (VAR_2->dt_errmsg) - VAR_9;
 (void) FUNC_3(VAR_12, VAR_10, VAR_7, VAR_8);

 if ((VAR_11 = FUNC_2(VAR_2->dt_errmsg, '\n')) != ((void*)0))
  *VAR_11 = '\0';

 VAR_2->dt_errtag = VAR_3;
}
