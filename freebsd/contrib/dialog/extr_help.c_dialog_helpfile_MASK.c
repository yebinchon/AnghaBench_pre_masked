
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ in_helpfile; void* nook; void* extra_button; void* help_button; int * ok_label; int * no_label; } ;
typedef int DIALOG_VARS ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,char const*,int,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(const char *VAR_4,
  const char *VAR_5,
  int VAR_6,
  int VAR_7)
{
    int VAR_8 = VAR_0;
    DIALOG_VARS VAR_9;

    if (!VAR_3.in_helpfile && VAR_5 != 0 && *VAR_5 != '\0') {
 FUNC_2(&VAR_9);

 VAR_3.no_label = ((void*)0);
 VAR_3.ok_label = ((void*)0);
 VAR_3.help_button = VAR_1;
 VAR_3.extra_button = VAR_1;
 VAR_3.nook = VAR_1;

 VAR_3.in_helpfile = VAR_2;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_1(&VAR_9);
    }
    return (VAR_8);
}
