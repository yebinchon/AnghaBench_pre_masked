
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mq_attr {int mq_msgsize; } ;
typedef int mqd_t ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 char* FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct mq_attr*) ;
 int FUNC_3 (int ,char*,int,unsigned int*) ;

__attribute__((used)) static void
FUNC_4(mqd_t VAR_2)
{
 struct mq_attr VAR_3;
 char *VAR_4;
 unsigned VAR_5;
 int VAR_6;

 FUNC_0(FUNC_2(VAR_2, &VAR_3) != -1, "mq_getattr failed %d",
     VAR_1);

 VAR_6 = VAR_3.mq_msgsize;
 VAR_4 = FUNC_1(1, VAR_6);
 FUNC_0(VAR_4 != ((void*)0), "calloc failed");

 FUNC_0(FUNC_3(VAR_2, VAR_4, VAR_6, &VAR_5) != -1,
     "mq_receive 1 failed: %d", VAR_1);
 FUNC_0(VAR_5 == (VAR_0 + 1) && VAR_4[0] == 'b',
     "mq_receive 1 prio/data mismatch");

 FUNC_0(FUNC_3(VAR_2, VAR_4, VAR_6, &VAR_5) != -1,
     "mq_receive 2 failed: %d", VAR_1);
 FUNC_0(VAR_5 == (VAR_0 + 1) && VAR_4[0] == 'f',
     "mq_receive 2 prio/data mismatch");

 FUNC_0(FUNC_3(VAR_2, VAR_4, VAR_6, &VAR_5) != -1,
     "mq_receive 3 failed: %d", VAR_1);
 FUNC_0(VAR_5 == VAR_0 && VAR_4[0] == 'a',
     "mq_receive 3 prio/data mismatch");

 FUNC_0(FUNC_3(VAR_2, VAR_4, VAR_6, &VAR_5) != -1,
     "mq_receive 4 failed: %d", VAR_1);
 FUNC_0(VAR_5 == VAR_0 && VAR_4[0] == 'c',
     "mq_receive 4 prio/data mismatch");

 FUNC_0(FUNC_3(VAR_2, VAR_4, VAR_6, &VAR_5) != -1,
     "mq_receive 5 failed: %d", VAR_1);
 FUNC_0(VAR_5 == (VAR_0 - 1) && VAR_4[0] == 'd',
     "mq_receive 5 prio/data mismatch");

 FUNC_0(FUNC_3(VAR_2, VAR_4, VAR_6, &VAR_5) != -1,
     "mq_receive 6 failed: %d", VAR_1);
 FUNC_0(VAR_5 == 0 && VAR_4[0] == 'e',
     "mq_receive 6 prio/data mismatch");
}
