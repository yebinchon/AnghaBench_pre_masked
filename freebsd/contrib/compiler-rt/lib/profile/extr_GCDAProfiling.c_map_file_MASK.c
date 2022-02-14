
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int *,int ,int ,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 char* FUNC_4 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_5 (int *,int ,int ,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;
 int FUNC_7 (int ,char*,char*,char*) ;
 int FUNC_8 (int ,long,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 void* FUNC_10 (int ,scalar_t__,int,int,int,int ) ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_11 (int) ;
 void* VAR_15 ;

__attribute__((used)) static int FUNC_12() {
  FUNC_8(VAR_13, 0L, VAR_7);
  VAR_10 = FUNC_9(VAR_13);



  if (VAR_10 == 0)
    return -1;
  VAR_15 = FUNC_10(0, VAR_10, VAR_5 | VAR_6,
                      VAR_2 | VAR_3, VAR_9, 0);
  if (VAR_15 == (void *)-1) {
    int VAR_16 = VAR_8;
    FUNC_7(VAR_14, "profiling: %s: cannot map: %s\n", VAR_11,
            FUNC_11(VAR_16));
    return -1;
  }


  return 0;
}
