
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {TYPE_1__* mb; } ;
struct TYPE_3__ {char const* tplname; scalar_t__ tplhash; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int ) ;
 TYPE_2__** VAR_3 ;

int
FUNC_4(const char *VAR_4, uint32_t VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = -VAR_0;

 FUNC_0();
 for (VAR_6 = VAR_2 - 1; VAR_6 >= 0; VAR_6--) {
  if (VAR_4 != ((void*)0)) {
   if (FUNC_2(VAR_4) == FUNC_2(VAR_3[VAR_6]->mb->tplname) &&
       FUNC_3(VAR_4, VAR_3[VAR_6]->mb->tplname,
       VAR_1) == 0 && (!VAR_5 || VAR_5 ==
       VAR_3[VAR_6]->mb->tplhash)) {
    VAR_7 = VAR_6;
    break;
   }
  } else if (VAR_5 == VAR_3[VAR_6]->mb->tplhash) {
   VAR_7 = VAR_6;
   break;
  }
 }
 FUNC_1();

 return (VAR_7);
}
