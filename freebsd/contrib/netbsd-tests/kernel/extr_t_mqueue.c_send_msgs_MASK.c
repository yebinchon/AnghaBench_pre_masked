
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef int mqd_t ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(mqd_t VAR_2)
{
 char VAR_3[2];

 VAR_3[1] = '\0';

 VAR_3[0] = 'a';
 FUNC_0(FUNC_1(VAR_2, VAR_3, sizeof(VAR_3), VAR_0) != -1,
     "mq_send 1 failed: %d", VAR_1);

 VAR_3[0] = 'b';
 FUNC_0(FUNC_1(VAR_2, VAR_3, sizeof(VAR_3), VAR_0 + 1) != -1,
     "mq_send 2 failed: %d", VAR_1);

 VAR_3[0] = 'c';
 FUNC_0(FUNC_1(VAR_2, VAR_3, sizeof(VAR_3), VAR_0) != -1,
     "mq_send 3 failed: %d", VAR_1);

 VAR_3[0] = 'd';
 FUNC_0(FUNC_1(VAR_2, VAR_3, sizeof(VAR_3), VAR_0 - 1) != -1,
     "mq_send 4 failed: %d", VAR_1);

 VAR_3[0] = 'e';
 FUNC_0(FUNC_1(VAR_2, VAR_3, sizeof(VAR_3), 0) != -1,
     "mq_send 5 failed: %d", VAR_1);

 VAR_3[0] = 'f';
 FUNC_0(FUNC_1(VAR_2, VAR_3, sizeof(VAR_3), VAR_0 + 1) != -1,
     "mq_send 6 failed: %d", VAR_1);
}
