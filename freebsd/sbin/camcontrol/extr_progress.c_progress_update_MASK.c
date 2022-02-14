
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int done; int percent; int size; int now; int elapsed; int start; int eta; } ;
typedef TYPE_1__ progress_t ;


 int FUNC_0 (int *) ;

int
FUNC_1(progress_t *VAR_0, uint64_t VAR_1)
{
 VAR_0->done = VAR_1;
 VAR_0->percent = (VAR_0->done * 100) / VAR_0->size;
 VAR_0->now = FUNC_0(((void*)0));
 VAR_0->elapsed = VAR_0->now - VAR_0->start;
 if (VAR_1 == 0 || VAR_0->elapsed == 0 || VAR_0->done / VAR_0->elapsed == 0) {
  VAR_0->eta = 0;
 } else {
  VAR_0->eta = VAR_0->size / (VAR_0->done / VAR_0->elapsed) - VAR_0->elapsed;
 }
 return 1;
}
