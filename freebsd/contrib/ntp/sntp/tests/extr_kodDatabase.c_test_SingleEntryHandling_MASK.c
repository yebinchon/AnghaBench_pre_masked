
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kod_entry {int type; int hostname; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,struct kod_entry**) ;

void
FUNC_4(void) {
 const char VAR_0[] = "192.0.2.5";
 const char VAR_1[] = "DENY";

 FUNC_2(VAR_0, VAR_1);

 struct kod_entry* VAR_2;

 FUNC_0(1, FUNC_3(VAR_0, &VAR_2));
 FUNC_1(VAR_0, VAR_2->hostname);
 FUNC_1(VAR_1, VAR_2->type);
}
