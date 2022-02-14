
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kod_entry {scalar_t__ timestamp; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (struct kod_entry*) ;
 int FUNC_4 (char const*,struct kod_entry**) ;
 int FUNC_5 (int) ;

void
FUNC_6(void) {
 const char VAR_0[] = "192.0.2.3";
 const char VAR_1[] = "RATE";
 const char VAR_2[] = "DENY";

 FUNC_2(VAR_0, VAR_1);
 struct kod_entry* VAR_3;
 FUNC_0(1, FUNC_4(VAR_0, &VAR_3));





 FUNC_5(2);

 FUNC_2(VAR_0, VAR_2);
 struct kod_entry* VAR_4;
 FUNC_0(1, FUNC_4(VAR_0, &VAR_4));

 FUNC_1(VAR_3->timestamp == VAR_4->timestamp);

 FUNC_3(VAR_3);
 FUNC_3(VAR_4);
}
