
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {TYPE_1__* mb; } ;
struct TYPE_3__ {int tplname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t VAR_2 ;
 int FUNC_2 (char*,int ,size_t) ;
 size_t FUNC_3 (int ) ;
 TYPE_2__** VAR_3 ;

int
FUNC_4(uint32_t VAR_4, char *VAR_5, size_t VAR_6)
{
 int VAR_7;

 VAR_7 = 0;

 FUNC_0();
 if (VAR_4 < VAR_2) {
  if (VAR_5 != ((void*)0) && VAR_6 > FUNC_3(VAR_3[VAR_4]->mb->tplname))
   FUNC_2(VAR_5, VAR_3[VAR_4]->mb->tplname, VAR_6);
  else
   VAR_7 = VAR_1;
 } else
  VAR_7 = VAR_0;
 FUNC_1();

 return (VAR_7);
}
