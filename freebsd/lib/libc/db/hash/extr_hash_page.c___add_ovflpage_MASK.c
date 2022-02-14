
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_11__ {int addr; struct TYPE_11__* ovfl; int flags; scalar_t__ page; } ;
struct TYPE_10__ {int FFACTOR; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ BUFHEAD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int VAR_2 ;
 int FUNC_1 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int,TYPE_2__*,int) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_6 ;

BUFHEAD *
FUNC_5(HTAB *VAR_7, BUFHEAD *VAR_8)
{
 u_int16_t *VAR_9, VAR_10, VAR_11;



 VAR_9 = (u_int16_t *)VAR_8->page;


 if (VAR_7->FFACTOR == VAR_1) {
  VAR_7->FFACTOR = VAR_9[0] >> 1;
  if (VAR_7->FFACTOR < VAR_2)
   VAR_7->FFACTOR = VAR_2;
 }
 VAR_8->flags |= VAR_0;
 VAR_11 = FUNC_4(VAR_7);




 if (!VAR_11 || !(VAR_8->ovfl = FUNC_2(VAR_7, VAR_11, VAR_8, 1)))
  return (((void*)0));
 VAR_8->ovfl->flags |= VAR_0;




 VAR_10 = VAR_9[0];





 VAR_9[VAR_10 + 4] = FUNC_1(VAR_9);
 VAR_9[VAR_10 + 3] = FUNC_0(VAR_9) - VAR_4;
 VAR_9[VAR_10 + 1] = VAR_11;
 VAR_9[VAR_10 + 2] = VAR_3;
 VAR_9[0] = VAR_10 + 2;



 return (VAR_8->ovfl);
}
