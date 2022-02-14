
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct re_guts {scalar_t__ magic; char* must; int * setbits; int * sets; int * stripdata; int * strip; } ;
struct TYPE_3__ {scalar_t__ re_magic; struct re_guts* re_g; } ;
typedef TYPE_1__ regex_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;

void
FUNC_1(regex_t *VAR_2)
{
 struct re_guts *VAR_3;

 if (VAR_2->re_magic != VAR_0)
  return;

 VAR_3 = VAR_2->re_g;
 if (VAR_3 == ((void*)0) || VAR_3->magic != VAR_1)
  return;
 VAR_2->re_magic = 0;
 VAR_3->magic = 0;

 if (VAR_3->strip != ((void*)0))
  FUNC_0((char *)VAR_3->strip);
 if (VAR_3->stripdata != ((void*)0))
  FUNC_0((char *)VAR_3->stripdata);
 if (VAR_3->sets != ((void*)0))
  FUNC_0((char *)VAR_3->sets);
 if (VAR_3->setbits != ((void*)0))
  FUNC_0((char *)VAR_3->setbits);
 if (VAR_3->must != ((void*)0))
  FUNC_0(VAR_3->must);
 FUNC_0((char *)VAR_3);
}
