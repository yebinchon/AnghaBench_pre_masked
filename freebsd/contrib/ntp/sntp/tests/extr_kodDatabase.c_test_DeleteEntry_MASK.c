
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kod_entry {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (struct kod_entry*) ;
 int FUNC_4 (char const*,struct kod_entry**) ;

void
FUNC_5(void) {
 const char VAR_0[] = "192.0.2.1";
 const char VAR_1[] = "192.0.2.2";
 const char VAR_2[] = "192.0.2.3";
 const char VAR_3[] = "DENY";

 FUNC_1(VAR_0, VAR_3);
 FUNC_1(VAR_1, VAR_3);
 FUNC_1(VAR_2, VAR_3);

 struct kod_entry* VAR_4;

 FUNC_0(1, FUNC_4(VAR_1, &VAR_4));
 FUNC_3(VAR_4);

 FUNC_2(VAR_1, VAR_3);

 FUNC_0(0, FUNC_4(VAR_1, &VAR_4));


 FUNC_0(1, FUNC_4(VAR_0, &VAR_4));
 FUNC_3(VAR_4);
}
