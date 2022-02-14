
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (void*,char*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,void**,char*) ;
 int FUNC_7 (void**,void**,int ) ;
 int FUNC_8 (void*,char*,char*,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (void**) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*,char*,char*) ;
 int FUNC_13 (void*,char*) ;
 int FUNC_14 (void*,char*) ;
 int FUNC_15 (void*,char*,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (int ,char*,int ,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_17 (int ,int,int,int,int,int ) ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_18(void) {
  void *VAR_14 = 0;
  void *VAR_15 = 0;
  FUNC_7(&VAR_14, &VAR_15, VAR_13);
  VAR_8 = VAR_15;


  VAR_7 = FUNC_17(VAR_11, 16384, VAR_4 | VAR_5,
              VAR_3 | VAR_2 | VAR_0, -1, 0);
  if (VAR_7 == VAR_1) {
    FUNC_16(VAR_12, "failed to allocate Go-like heap at %d; errno %d\n",
            VAR_11, VAR_9);
    return 1;
  }
  char *VAR_16 = (char*)((unsigned long)VAR_7 + (64<<10) - 1 & ~((64<<10) - 1));
  FUNC_9(VAR_16, 4096);
  FUNC_8(VAR_14, (char*)&VAR_6 + 1, VAR_16, 10);
  FUNC_2(VAR_16, 10);
  FUNC_3(VAR_14, (char*)&FUNC_18 + 1);
  FUNC_8(VAR_14, (char*)&VAR_6 + 1, VAR_16, 10);
  FUNC_13(VAR_14, VAR_16);
  FUNC_14(VAR_14, VAR_16);
  void *VAR_17 = 0;
  FUNC_6(VAR_14, &VAR_17, (char*)&VAR_6 + 1);
  void *VAR_18 = 0;
  FUNC_6(VAR_14, &VAR_18, (char*)&VAR_6 + 1);
  FUNC_4(VAR_14);
  FUNC_3(VAR_17, (char*)&VAR_10 + 1);
  FUNC_3(VAR_17, (char*)&VAR_10 + 1);
  FUNC_15(VAR_17, VAR_16, (char*)&VAR_6 + 1);
  FUNC_0(VAR_17, VAR_16);
  FUNC_4(VAR_17);
  FUNC_4(VAR_17);
  FUNC_5(VAR_17);
  void *VAR_19 = 0;
  FUNC_10(&VAR_19);
  VAR_8 = VAR_19;
  FUNC_3(VAR_18, (char*)&VAR_10 + 1);
  FUNC_12(VAR_18, VAR_16, (char*)&VAR_6 + 1);
  FUNC_2(VAR_16, 10);
  FUNC_4(VAR_18);
  FUNC_5(VAR_18);
  FUNC_11(VAR_19);
  VAR_8 = VAR_15;
  FUNC_1();
  return 0;
}
