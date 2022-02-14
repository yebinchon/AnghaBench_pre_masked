
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timestamp; } ;
typedef int FILE ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int ,char*) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int FUNC_9 () ;

void
FUNC_10(void) {
 VAR_2 = FUNC_7("kod-output-single");
 FUNC_6("host1", "DENY");




 VAR_1[0]->timestamp = 1;

 FUNC_9();


 FILE * VAR_3 = FUNC_8(VAR_2, "rb");
 FILE * VAR_4 = FUNC_8(FUNC_1("kod-expected-single", VAR_0),"rb");

 FUNC_4(VAR_3);
 FUNC_4(VAR_4);

 FUNC_3(FUNC_2(VAR_4), FUNC_2(VAR_3));

 FUNC_5(FUNC_0(VAR_4, VAR_3));
}
