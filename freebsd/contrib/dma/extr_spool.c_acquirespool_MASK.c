
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qitem {int * mailf; int mailfn; int * queuef; int queuefn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int,char*) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;

int
FUNC_4(struct qitem *VAR_5)
{
 int VAR_6;

 if (VAR_5->queuef == ((void*)0)) {
  VAR_6 = FUNC_2(VAR_5->queuefn, VAR_3|VAR_2);
  if (VAR_6 < 0)
   goto fail;
  VAR_5->queuef = FUNC_0(VAR_6, "r+");
  if (VAR_5->queuef == ((void*)0))
   goto fail;
 }

 if (VAR_5->mailf == ((void*)0)) {
  VAR_5->mailf = FUNC_1(VAR_5->mailfn, "r");
  if (VAR_5->mailf == ((void*)0))
   goto fail;
 }

 return (0);

fail:
 if (VAR_4 == VAR_0)
  return (1);
 FUNC_3(VAR_1, "could not acquire queue file: %m");
 return (-1);
}
