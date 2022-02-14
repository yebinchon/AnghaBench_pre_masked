
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const** t_c; } ;
struct TYPE_6__ {TYPE_1__ el_tty; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* VAR_3 ;
 char* FUNC_0 (TYPE_2__*,int*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int * VAR_4 ;
 char* FUNC_2 (char const*) ;
 void FUNC_3 (char const*) ;

void
FUNC_4(void)
{
 int VAR_5 = 0, VAR_6 = 0;
 const char *VAR_7 = FUNC_0(VAR_3, &VAR_5);
 char *VAR_8;

 if (VAR_7 == ((void*)0) || VAR_5-- <= 0)
  return;
 if (VAR_5 == 0 && VAR_7[0] == VAR_3->el_tty.t_c[VAR_2][VAR_0])
  VAR_6 = 1;
 if (VAR_7[VAR_5] == '\n' || VAR_7[VAR_5] == '\r')
  VAR_6 = 2;

 if (VAR_6 && VAR_4 != ((void*)0)) {
  FUNC_1(VAR_3, VAR_1, 0);
  if (VAR_6 == 2) {
   if ((VAR_8 = FUNC_2(VAR_7)) != ((void*)0))
    VAR_8[VAR_5] = '\0';
  } else
   VAR_8 = ((void*)0);
  (*(void (*)(const char *))VAR_4)(VAR_8);
  FUNC_1(VAR_3, VAR_1, 1);
 }
}
