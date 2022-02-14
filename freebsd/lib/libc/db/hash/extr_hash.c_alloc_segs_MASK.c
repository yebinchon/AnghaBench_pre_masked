
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int DSIZE; int nsegs; int SSHIFT; int ** dir; } ;
typedef int * SEGMENT ;
typedef TYPE_1__ HTAB ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(HTAB *VAR_1, int VAR_2)
{
 int VAR_3;
 SEGMENT VAR_4;

 int VAR_5;

 if ((VAR_1->dir =
     FUNC_0(VAR_1->DSIZE, sizeof(SEGMENT *))) == ((void*)0)) {
  VAR_5 = VAR_0;
  (void)FUNC_1(VAR_1);
  VAR_0 = VAR_5;
  return (-1);
 }
 VAR_1->nsegs = VAR_2;
 if (VAR_2 == 0)
  return (0);

 if ((VAR_4 = FUNC_0(VAR_2 << VAR_1->SSHIFT, sizeof(SEGMENT))) == ((void*)0)) {
  VAR_5 = VAR_0;
  (void)FUNC_1(VAR_1);
  VAR_0 = VAR_5;
  return (-1);
 }
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_1->dir[VAR_3] = &VAR_4[VAR_3 << VAR_1->SSHIFT];
 return (0);
}
