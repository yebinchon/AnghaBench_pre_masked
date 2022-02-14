
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,unsigned long long) ;

void
FUNC_5(void)
{
 char VAR_1[1024];

 FUNC_2("conversion_convtime");
 FUNC_0(FUNC_3("0"), 0);
 FUNC_0(FUNC_3("1"), 1);
 FUNC_0(FUNC_3("1S"), 1);

 FUNC_0(FUNC_3("90m"), 5400);
 FUNC_0(FUNC_3("1h30m"), 5400);
 FUNC_0(FUNC_3("2d"), 172800);
 FUNC_0(FUNC_3("1w"), 604800);


 FUNC_0(FUNC_3("-7"), -1);
 FUNC_0(FUNC_3("-9d"), -1);


 FUNC_4(VAR_1, sizeof VAR_1, "%llu", (unsigned long long)VAR_0 + 1);
 FUNC_0(FUNC_3(VAR_1), -1);


 FUNC_4(VAR_1, sizeof VAR_1, "%lluM", (unsigned long long)VAR_0/60 + 1);
 FUNC_0(FUNC_3(VAR_1), -1);
 FUNC_0(FUNC_3("1000000000000000000000w"), -1);
 FUNC_1();
}
