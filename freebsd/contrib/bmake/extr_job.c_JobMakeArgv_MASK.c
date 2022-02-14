
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int args ;
struct TYPE_5__ {char* exit; char* echo; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ Job ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 TYPE_2__* VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*,int,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(Job *VAR_4, char **VAR_5)
{
    int VAR_6;
    static char VAR_7[10];

    VAR_5[0] = FUNC_0(VAR_3);
    VAR_6 = 1;

    if ((VAR_2->exit && (*VAR_2->exit != '-')) ||
 (VAR_2->echo && (*VAR_2->echo != '-')))
    {






 (void)FUNC_1(VAR_7, sizeof(VAR_7), "-%s%s",
        ((VAR_4->flags & VAR_0) ? "" :
         (VAR_2->exit ? VAR_2->exit : "")),
        ((VAR_4->flags & VAR_1) ? "" :
         (VAR_2->echo ? VAR_2->echo : "")));

 if (VAR_7[1]) {
     VAR_5[VAR_6] = VAR_7;
     VAR_6++;
 }
    } else {
 if (!(VAR_4->flags & VAR_0) && VAR_2->exit) {
     VAR_5[VAR_6] = FUNC_0(VAR_2->exit);
     VAR_6++;
 }
 if (!(VAR_4->flags & VAR_1) && VAR_2->echo) {
     VAR_5[VAR_6] = FUNC_0(VAR_2->echo);
     VAR_6++;
 }
    }
    VAR_5[VAR_6] = ((void*)0);
}
