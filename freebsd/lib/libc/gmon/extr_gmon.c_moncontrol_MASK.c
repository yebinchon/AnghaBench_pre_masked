
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmonparam {int state; int lowpc; int kcountsize; scalar_t__ kcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gmonparam VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_3 ;

void
FUNC_1(int VAR_4)
{
 struct gmonparam *VAR_5 = &VAR_2;

 if (VAR_4) {

  FUNC_0((char *)VAR_5->kcount, VAR_5->kcountsize, VAR_5->lowpc, VAR_3);
  VAR_5->state = VAR_1;
 } else {

  FUNC_0((char *)0, 0, 0, 0);
  VAR_5->state = VAR_0;
 }
}
