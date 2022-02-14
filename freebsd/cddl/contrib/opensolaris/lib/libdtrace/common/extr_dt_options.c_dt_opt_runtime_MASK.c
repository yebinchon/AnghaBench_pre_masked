
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_optval_t ;
struct TYPE_4__ {int* dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_3, const char *VAR_4, uintptr_t VAR_5)
{
 char *VAR_6;
 dtrace_optval_t VAR_7 = 0;
 int VAR_8;

 const struct {
  char *positive;
  char *negative;
 } VAR_9[] = {
  { "yes", "no" },
  { "enable", "disable" },
  { "enabled", "disabled" },
  { "true", "false" },
  { "on", "off" },
  { "set", "unset" },
  { ((void*)0) }
 };

 if (VAR_4 != ((void*)0)) {
  if (VAR_4[0] == '\0') {
   VAR_7 = VAR_0;
   goto out;
  }

  for (VAR_8 = 0; VAR_9[VAR_8].positive != ((void*)0); VAR_8++) {
   if (FUNC_1(VAR_9[VAR_8].positive, VAR_4) == 0) {
    VAR_7 = 1;
    goto out;
   }

   if (FUNC_1(VAR_9[VAR_8].negative, VAR_4) == 0) {
    VAR_7 = VAR_0;
    goto out;
   }
  }

  VAR_2 = 0;
  VAR_7 = FUNC_2(VAR_4, &VAR_6, 0);

  if (*VAR_6 != '\0' || VAR_2 != 0 || VAR_7 < 0)
   return (FUNC_0(VAR_3, VAR_1));
 }

out:
 VAR_3->dt_options[VAR_5] = VAR_7;
 return (0);
}
