
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int value; } ;
typedef TYPE_1__ br_config_option ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,char*,int ) ;

int
FUNC_2(int VAR_0, char *VAR_1[])
{
 const br_config_option *VAR_2;

 (void)VAR_0;
 (void)VAR_1;

 for (VAR_2 = FUNC_0(); VAR_2->name != ((void*)0); VAR_2 ++) {
  FUNC_1("%-25s %8ld\n", VAR_2->name, VAR_2->value);
 }

 return 0;
}
