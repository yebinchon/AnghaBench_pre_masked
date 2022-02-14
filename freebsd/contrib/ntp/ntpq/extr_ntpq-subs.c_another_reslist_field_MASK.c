
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {char* hits; int idx; int flagstr; int mask; int addr; } ;
typedef TYPE_1__ reslist_row ;
typedef int addrmaskstr ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int *,char*,char*,char*,int ) ;
 int FUNC_2 (char*,int,char*,char*,...) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(
 int * VAR_1,
 reslist_row * VAR_2,
 FILE * VAR_3
 )
{
 char VAR_4[128];
 int VAR_5;
 u_int VAR_6;

 (*VAR_1)++;

 if (VAR_0 > *VAR_1)
  return;

 VAR_5 = FUNC_3(&VAR_2->mask);
 if (VAR_5 >= 0)
  FUNC_2(VAR_4, sizeof(VAR_4), "%s/%d",
    FUNC_4(&VAR_2->addr), VAR_5);
 else
  FUNC_2(VAR_4, sizeof(VAR_4), "%s %s",
    FUNC_4(&VAR_2->addr), FUNC_4(&VAR_2->mask));






 FUNC_1(VAR_3,
  "%10lu %s\n"
  "           %s\n",
  VAR_2->hits, VAR_4, VAR_2->flagstr);
 VAR_6 = VAR_2->idx;
 FUNC_0(*VAR_2);
 VAR_2->idx = VAR_6;
}
