
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_16__ {int member_0; } ;
struct TYPE_20__ {int textq; int flags; TYPE_1__ member_0; } ;
struct TYPE_18__ {int lno; scalar_t__ cno; } ;
struct TYPE_19__ {int lineno; TYPE_3__ addr2; TYPE_3__ addr1; } ;
struct TYPE_17__ {int lno; scalar_t__ cno; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ MARK ;
typedef TYPE_4__ EXCMD ;
typedef TYPE_5__ CB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int ,int ,TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_5__*,int *,TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_4 (int ) ;

int
FUNC_5(SCR *VAR_2, EXCMD *VAR_3)
{
 CB VAR_4 = { 0 };
 MARK VAR_5, VAR_6, VAR_7, VAR_8;
 recno_t VAR_9;
 int VAR_10;

 VAR_10 = 0;

 FUNC_0(VAR_2, VAR_3);






 VAR_5 = VAR_3->addr1;
 VAR_6 = VAR_3->addr2;
 FUNC_1(VAR_4.textq);
 for (VAR_9 = VAR_5; VAR_9 <= VAR_6; ++VAR_9)
  if (FUNC_2(VAR_2, VAR_9, 0, VAR_1, &VAR_4)) {
   VAR_10 = 1;
   goto err;
  }
 VAR_4.flags |= VAR_0;


 VAR_8.lno = VAR_3->lineno;
 VAR_8.cno = 0;
 if (FUNC_3(VAR_2, &VAR_4, ((void*)0), &VAR_8, &VAR_7, 1))
  VAR_10 = 1;
 else {





  VAR_9 = (VAR_6 - VAR_5) + 1;
  VAR_2->lno = VAR_7.lno + (VAR_9 - 1);
  VAR_2->cno = 0;
 }
err: FUNC_4(VAR_4.textq);
 return (VAR_10);
}
