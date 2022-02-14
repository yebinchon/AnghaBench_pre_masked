
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__** t_c; } ;
struct TYPE_5__ {TYPE_1__ el_tty; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;

void
FUNC_1(void)
{
 char VAR_3[2];
 VAR_3[0] = (char)VAR_2->el_tty.t_c[VAR_1][VAR_0];
 VAR_3[1] = '\0';
 FUNC_0(VAR_2, VAR_3);
}
