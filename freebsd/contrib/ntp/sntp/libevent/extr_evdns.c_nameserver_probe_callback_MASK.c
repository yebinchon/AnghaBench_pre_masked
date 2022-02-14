
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameserver {int base; int * probe_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nameserver* const) ;
 int FUNC_3 (struct nameserver* const) ;

__attribute__((used)) static void
FUNC_4(int VAR_3, char VAR_4, int VAR_5, int VAR_6, void *VAR_7, void *VAR_8) {
 struct nameserver *const VAR_9 = (struct nameserver *) VAR_8;
 (void) VAR_4;
 (void) VAR_5;
 (void) VAR_6;
 (void) VAR_7;

 if (VAR_3 == VAR_0) {



  return;
 }

 FUNC_0(VAR_9->base);
 VAR_9->probe_request = ((void*)0);
 if (VAR_3 == VAR_1 || VAR_3 == VAR_2) {

  FUNC_3(VAR_9);
 } else {
  FUNC_2(VAR_9);
 }
 FUNC_1(VAR_9->base);
}
