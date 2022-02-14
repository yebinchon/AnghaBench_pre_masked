
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct bwlimit {size_t buflen; int bwend; int bwstart; scalar_t__ lamt; int rate; int thresh; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct bwlimit *VAR_0, u_int64_t VAR_1, size_t VAR_2)
{
 VAR_0->buflen = VAR_2;
 VAR_0->rate = VAR_1;
 VAR_0->thresh = VAR_0->rate;
 VAR_0->lamt = 0;
 FUNC_0(&VAR_0->bwstart);
 FUNC_0(&VAR_0->bwend);
}
