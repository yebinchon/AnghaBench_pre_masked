
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kod_entry {int timestamp; int hostname; int type; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,struct kod_entry**) ;

void
FUNC_5(void) {
 FUNC_3(FUNC_0("kod-test-correct", VAR_0), VAR_1);

 FUNC_1(2, VAR_2);

 struct kod_entry* VAR_3;

 FUNC_1(1, FUNC_4("192.0.2.5", &VAR_3));
 FUNC_2("DENY", VAR_3->type);
 FUNC_2("192.0.2.5", VAR_3->hostname);
 FUNC_1(0x12345678, VAR_3->timestamp);

 FUNC_1(1, FUNC_4("192.0.2.100", &VAR_3));
 FUNC_2("RSTR", VAR_3->type);
 FUNC_2("192.0.2.100", VAR_3->hostname);
 FUNC_1(0xfff, VAR_3->timestamp);
}
