
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kod_entry {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,struct kod_entry**) ;

void
FUNC_4(void) {
 const char VAR_0[] = "192.0.2.6";
 const char VAR_1[] = "192.0.6.1";
 const char VAR_2[] = "DENY";

 FUNC_2(VAR_0, VAR_2);

 struct kod_entry* VAR_3;

 FUNC_0(0, FUNC_3(VAR_1, &VAR_3));
 FUNC_1(VAR_3 == ((void*)0));
}
