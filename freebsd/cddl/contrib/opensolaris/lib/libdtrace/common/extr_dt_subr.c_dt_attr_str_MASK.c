
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stability ;
struct TYPE_3__ {int dtat_name; int dtat_data; int dtat_class; } ;
typedef TYPE_1__ dtrace_attribute_t ;
typedef int class ;


 int FUNC_0 (char*,size_t,char*,char const,char const,char const) ;

char *
FUNC_1(dtrace_attribute_t VAR_0, char *VAR_1, size_t VAR_2)
{
 static const char VAR_3[] = "ipoxuesS";
 static const char VAR_4[] = "uCpgIc";

 if (VAR_0.dtat_name < sizeof (VAR_3) &&
     VAR_0.dtat_data < sizeof (VAR_3) && VAR_0.dtat_class < sizeof (VAR_4)) {
  (void) FUNC_0(VAR_1, VAR_2, "[%c/%c/%c]", VAR_3[VAR_0.dtat_name],
      VAR_3[VAR_0.dtat_data], VAR_4[VAR_0.dtat_class]);
 } else {
  (void) FUNC_0(VAR_1, VAR_2, "[%u/%u/%u]",
      VAR_0.dtat_name, VAR_0.dtat_data, VAR_0.dtat_class);
 }

 return (VAR_1);
}
