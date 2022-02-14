
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qitem {char* queueid; char* sender; char* addr; int * queuef; int queuefn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int * FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*,char*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static int
FUNC_7(struct qitem *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(VAR_3->queuefn, VAR_0|VAR_1|VAR_2, 0660);
 if (VAR_5 == -1)
  return (-1);
 if (FUNC_0(VAR_5, 0660) < 0)
  return (-1);
 VAR_3->queuef = FUNC_1(VAR_5, "w+");
 if (VAR_3->queuef == ((void*)0))
  return (-1);

 VAR_4 = FUNC_4(VAR_3->queuef,
   "ID: %s\n"
   "Sender: %s\n"
   "Recipient: %s\n",
    VAR_3->queueid,
    VAR_3->sender,
    VAR_3->addr);

 if (VAR_4 <= 0)
  return (-1);

 if (FUNC_2(VAR_3->queuef) != 0 || FUNC_5(FUNC_3(VAR_3->queuef)) != 0)
  return (-1);

 return (0);
}
