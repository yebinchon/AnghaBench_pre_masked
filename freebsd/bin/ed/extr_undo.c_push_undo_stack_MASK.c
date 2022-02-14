
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; void* h; void* t; } ;
typedef TYPE_1__ undo_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (long) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;
 int VAR_3 ;
 char* FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

undo_t *
FUNC_7(int VAR_7, long VAR_8, long VAR_9)
{
 undo_t *VAR_10;
 VAR_10 = VAR_6;
 if (VAR_4 < VAR_5 ||
     (VAR_10 = (undo_t *) FUNC_5(VAR_6, (VAR_5 += VAR_0) * sizeof(undo_t))) != ((void*)0)) {
  VAR_6 = VAR_10;
  VAR_6[VAR_4].type = VAR_7;
  VAR_6[VAR_4].t = FUNC_3(VAR_9);
  VAR_6[VAR_4].h = FUNC_3(VAR_8);
  return VAR_6 + VAR_4++;
 }

 FUNC_1(VAR_3, "%s\n", FUNC_6(VAR_2));
 VAR_1 = "out of memory";
 FUNC_0();
 FUNC_2(VAR_6);
 VAR_6 = ((void*)0);
 VAR_5 = 0;
 return ((void*)0);
}
