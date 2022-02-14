
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int idx; } ;
typedef TYPE_1__ reslist_row ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(
 FILE * VAR_2,
 u_int VAR_3,
 int * VAR_4,
 reslist_row * VAR_5
 )
{
 if (VAR_5->idx == VAR_3)
  return;
 if (VAR_5->idx + 1 == VAR_3) {
  if (*VAR_4 < VAR_0)
   FUNC_1(*VAR_2, "Warning: incomplete row with %d (of %d) fields",
    *VAR_4, VAR_0);
  *VAR_4 = 0;
  VAR_5->idx = VAR_3;
  return;
 }
 FUNC_1(VAR_1,
  "received reslist index %u, have %d of %d fields for index %u, aborting.\n",
  VAR_3, *VAR_4, VAR_0, VAR_5->idx);
 FUNC_0(1);
}
