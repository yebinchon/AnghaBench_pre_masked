
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int echo; int * buf; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

int FUNC_5(int VAR_4)
{
 int VAR_5 = 0;

 FUNC_2(&VAR_3);
 if (VAR_1->buf) {
  FUNC_0(VAR_1->buf);
  VAR_1->buf = ((void*)0);
 }
 if (VAR_4) {
  if (VAR_4 < VAR_2)
   VAR_4 = VAR_2;
  VAR_5 = VAR_1->echo;
  FUNC_4(VAR_1, FUNC_1(VAR_4, VAR_0),
       VAR_4);
  VAR_1->echo = VAR_5;
  VAR_5 = !VAR_1->buf;
 }
 FUNC_3(&VAR_3);

 return VAR_5;
}
