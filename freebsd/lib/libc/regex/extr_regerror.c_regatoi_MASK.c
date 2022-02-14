
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rerr {scalar_t__ code; int name; } ;
struct TYPE_3__ {int re_endp; } ;
typedef TYPE_1__ regex_t ;


 struct rerr* VAR_0 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static const char *
FUNC_2(const regex_t *VAR_1, char *VAR_2)
{
 struct rerr *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->code != 0; VAR_3++)
  if (FUNC_1(VAR_3->name, VAR_1->re_endp) == 0)
   break;
 if (VAR_3->code == 0)
  return("0");

 FUNC_0(VAR_2, "%d", VAR_3->code);
 return(VAR_2);
}
