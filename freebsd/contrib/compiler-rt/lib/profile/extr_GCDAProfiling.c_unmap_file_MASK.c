
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 char* FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_4 (int ,char*,char*,char*) ;
 int * VAR_4 ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int VAR_5 ;
 char* FUNC_7 (int) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_8() {
  if (FUNC_5(VAR_6, VAR_2, VAR_0) == -1) {
    int VAR_7 = VAR_1;
    FUNC_4(VAR_5, "profiling: %s: cannot msync: %s\n", VAR_3,
            FUNC_7(VAR_7));
  }




  (void)FUNC_6(VAR_6, VAR_2);


  VAR_6 = ((void*)0);
  VAR_2 = 0;
}
