
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_char ;
struct TYPE_4__ {size_t* dbp; size_t dbrcnt; scalar_t__ dbcnt; } ;
struct TYPE_3__ {size_t* dbp; scalar_t__ dbcnt; scalar_t__ dbsz; } ;


 size_t* VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void
FUNC_1(void)
{
 u_char *VAR_3;
 const u_char *VAR_4;
 size_t VAR_5;

 if ((VAR_4 = VAR_0) != ((void*)0))
  for (VAR_3 = VAR_1.dbp - (VAR_5 = VAR_1.dbrcnt); VAR_5--; ++VAR_3)
   *VAR_3 = VAR_4[*VAR_3];


 VAR_2.dbp = VAR_1.dbp;
 VAR_2.dbcnt = VAR_1.dbcnt;

 if (VAR_1.dbcnt >= VAR_2.dbsz) {

  FUNC_0(0);






  VAR_1.dbp = VAR_2.dbp;
  VAR_1.dbcnt = VAR_2.dbcnt;
 }
}
