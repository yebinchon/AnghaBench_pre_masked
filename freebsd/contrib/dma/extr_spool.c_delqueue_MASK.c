
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qitem {int * mailf; int * queuef; int queuefn; int mailfn; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qitem*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct qitem *VAR_0)
{
 FUNC_2(VAR_0->mailfn);
 FUNC_2(VAR_0->queuefn);
 if (VAR_0->queuef != ((void*)0))
  FUNC_0(VAR_0->queuef);
 if (VAR_0->mailf != ((void*)0))
  FUNC_0(VAR_0->mailf);
 FUNC_1(VAR_0);
}
