
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_17__ {int SGSIZE; int SSHIFT; int new_file; TYPE_1__*** dir; } ;
struct TYPE_16__ {int addr; int page; struct TYPE_16__* ovfl; } ;
typedef TYPE_1__** SEGMENT ;
typedef TYPE_2__ HTAB ;
typedef TYPE_1__ BUFHEAD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int,int,int,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int,TYPE_1__*) ;

BUFHEAD *
FUNC_7(HTAB *VAR_1, u_int32_t VAR_2,
    BUFHEAD *VAR_3,
    int VAR_4)
{
 BUFHEAD *VAR_5;
 u_int32_t VAR_6;
 int VAR_7, VAR_8;
 SEGMENT VAR_9;

 VAR_7 = 0;
 VAR_6 = 0;
 if (VAR_3) {
  VAR_5 = VAR_3->ovfl;
  if (!VAR_5 || (VAR_5->addr != VAR_2))
   VAR_5 = ((void*)0);
  if (!VAR_4)
   VAR_7 = VAR_0;
 } else {

  VAR_8 = VAR_2 & (VAR_1->SGSIZE - 1);


  VAR_9 = VAR_1->dir[VAR_2 >> VAR_1->SSHIFT];



  VAR_5 = FUNC_3(VAR_9[VAR_8]);
  VAR_6 = FUNC_1(VAR_9[VAR_8]);
  VAR_7 = VAR_6 || !VAR_1->new_file;
 }

 if (!VAR_5) {
  VAR_5 = FUNC_6(VAR_1, VAR_2, VAR_3);
  if (!VAR_5 ||
      FUNC_4(VAR_1, VAR_5->page, VAR_2, !VAR_3, VAR_7, 0))
   return (((void*)0));
  if (!VAR_3)
   VAR_9[VAR_8] =
       (BUFHEAD *)((intptr_t)VAR_5 | VAR_6);
 } else {
  FUNC_0(VAR_5);
  FUNC_2(VAR_5);
 }
 return (VAR_5);
}
