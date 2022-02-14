
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VARENT ;
struct TYPE_3__ {char* ki_args; } ;
typedef TYPE_1__ KINFO ;


 size_t VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int) ;
 int VAR_4 ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int,char*) ;

char *
FUNC_5(KINFO *VAR_5, VARENT *VAR_6)
{
 char *VAR_7;

 if ((VAR_7 = FUNC_1(FUNC_2(VAR_5->ki_args) * 4 + 1)) == ((void*)0))
  FUNC_4(1, "malloc failed");
 FUNC_3(VAR_7, VAR_5->ki_args, VAR_3 | VAR_1 | VAR_2);

 if (FUNC_0(VAR_6, VAR_4) != ((void*)0) && FUNC_2(VAR_7) > VAR_0)
  VAR_7[VAR_0] = '\0';

 return (VAR_7);
}
