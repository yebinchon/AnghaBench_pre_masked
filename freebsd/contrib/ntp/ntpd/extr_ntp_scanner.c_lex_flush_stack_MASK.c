
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int st_next; scalar_t__ force_eof; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;

int
FUNC_1()
{
 int VAR_3 = VAR_0;

 if (((void*)0) != VAR_2) {
  VAR_3 = !VAR_2->force_eof;
  VAR_2->force_eof = VAR_1;
  VAR_2->st_next = FUNC_0(
     VAR_2->st_next);
 }
 return VAR_3;
}
