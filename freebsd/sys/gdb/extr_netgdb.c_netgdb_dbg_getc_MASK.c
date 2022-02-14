
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* gdb_getc ) () ;} ;
struct TYPE_5__ {int* s_buf; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 TYPE_4__* VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 size_t FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(void)
{
 int VAR_4;

 while (1) {

  if (VAR_2 < FUNC_4(&VAR_3)) {
   VAR_4 = VAR_3.s_buf[VAR_2];
   VAR_2++;
   break;
  }


  FUNC_3(&VAR_3);
  VAR_2 = 0;


  if (VAR_1 != ((void*)0)) {
   VAR_4 = VAR_1->gdb_getc();
   if (VAR_4 == FUNC_0('C'))
    break;
  }

  FUNC_1(VAR_0);
 }

 if (VAR_4 == FUNC_0('C')) {
  FUNC_2();

 }
 return (VAR_4);
}
