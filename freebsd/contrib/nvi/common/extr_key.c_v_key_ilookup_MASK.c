
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UCHAR_T ;
struct TYPE_8__ {TYPE_1__* cname; } ;
struct TYPE_7__ {size_t clen; TYPE_3__* gp; } ;
struct TYPE_6__ {char* name; size_t len; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ GS ;


 size_t VAR_0 ;
 char* FUNC_0 (TYPE_2__*,size_t) ;

void
FUNC_1(SCR *VAR_1)
{
 UCHAR_T VAR_2;
 char *VAR_3, *VAR_4;
 GS *VAR_5;
 size_t VAR_6;

 for (VAR_5 = VAR_1->gp, VAR_2 = 0;; ++VAR_2) {
  for (VAR_3 = VAR_5->cname[VAR_2].name, VAR_4 = FUNC_0(VAR_1, VAR_2),
      VAR_6 = VAR_5->cname[VAR_2].len = VAR_1->clen; VAR_6--;)
   *VAR_3++ = *VAR_4++;
  if (VAR_2 == VAR_0)
   break;
 }
}
