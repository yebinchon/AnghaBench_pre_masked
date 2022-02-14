
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* Filename; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*,char*,char*) ;

void
FUNC_1 (
    char *VAR_3)
{

    FUNC_0 (VAR_1, "\n#line: New filename %s (old %s)\n",
         VAR_3, VAR_2[VAR_0].Filename);



    VAR_2[VAR_0].Filename = VAR_3;
}
