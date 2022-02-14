
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ nl_catd ;
struct TYPE_5__ {scalar_t__ catd; } ;
struct TYPE_4__ {TYPE_2__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ GS ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (scalar_t__,int,int,char const*) ;
 scalar_t__ FUNC_2 (char const) ;
 size_t FUNC_3 (char const*) ;

const char *
FUNC_4(
 SCR *VAR_0,
 const char *VAR_1,
 size_t *VAR_2)
{
 GS *VAR_3;
 char *VAR_4;
 int VAR_5;





 if (FUNC_2(VAR_1[0]) &&
     FUNC_2(VAR_1[1]) && FUNC_2(VAR_1[2]) && VAR_1[3] == '|') {
  VAR_5 = FUNC_0(VAR_1);
  VAR_1 = &VAR_1[4];

  VAR_3 = VAR_0 == ((void*)0) ? ((void*)0) : VAR_0->gp;
  if (VAR_3 != ((void*)0) && VAR_3->catd != (nl_catd)-1 &&
      (VAR_4 = FUNC_1(VAR_3->catd, 1, VAR_5, VAR_1)) != ((void*)0)) {
   if (VAR_2 != ((void*)0))
    *VAR_2 = FUNC_3(VAR_4);
   return (VAR_4);
  }
 }
 if (VAR_2 != ((void*)0))
  *VAR_2 = FUNC_3(VAR_1);
 return (VAR_1);
}
