
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* locale_t ;
struct TYPE_4__ {int using_messages_locale; int using_time_locale; int using_numeric_locale; int using_monetary_locale; } ;



__attribute__((used)) static void
FUNC_0(locale_t VAR_0, locale_t VAR_1)
{
 VAR_0->using_monetary_locale = VAR_1->using_monetary_locale;
 VAR_0->using_numeric_locale = VAR_1->using_numeric_locale;
 VAR_0->using_time_locale = VAR_1->using_time_locale;
 VAR_0->using_messages_locale = VAR_1->using_messages_locale;
}
