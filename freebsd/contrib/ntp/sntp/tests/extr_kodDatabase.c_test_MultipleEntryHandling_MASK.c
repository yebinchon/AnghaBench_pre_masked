
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kod_entry {int type; int hostname; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (struct kod_entry*) ;
 int FUNC_4 (char const*,struct kod_entry**) ;

void
FUNC_5(void) {
 const char VAR_0[] = "192.0.2.3";
 const char VAR_1[] = "DENY";

 const char VAR_2[] = "192.0.5.5";
 const char VAR_3[] = "RATE";

 const char VAR_4[] = "192.0.10.1";
 const char VAR_5[] = "DENY";

 FUNC_2(VAR_0, VAR_1);
 FUNC_2(VAR_2, VAR_3);
 FUNC_2(VAR_4, VAR_5);

 struct kod_entry* VAR_6;

 FUNC_0(1, FUNC_4(VAR_0, &VAR_6));
 FUNC_1(VAR_0, VAR_6->hostname);
 FUNC_1(VAR_1, VAR_6->type);

 FUNC_0(1, FUNC_4(VAR_2, &VAR_6));
 FUNC_1(VAR_2, VAR_6->hostname);
 FUNC_1(VAR_3, VAR_6->type);

 FUNC_0(1, FUNC_4(VAR_4, &VAR_6));
 FUNC_1(VAR_4, VAR_6->hostname);
 FUNC_1(VAR_5, VAR_6->type);

 FUNC_3(VAR_6);
}
