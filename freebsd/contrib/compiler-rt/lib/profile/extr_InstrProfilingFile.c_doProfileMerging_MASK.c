
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int __llvm_profile_header ;
typedef int FILE ;


 int FUNC_0 (int *,int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,long,int ) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *,int,int ,int,int ,int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(FILE *VAR_7, int *VAR_8) {
  uint64_t VAR_9;
  char *VAR_10;

  if (FUNC_7(VAR_7, 0L, VAR_4) == -1) {
    FUNC_1("Unable to merge profile data, unable to get size: %s\n",
             FUNC_11(VAR_6));
    return -1;
  }
  VAR_9 = FUNC_8(VAR_7);


  if (FUNC_7(VAR_7, 0L, VAR_5) == -1) {
    FUNC_1("Unable to merge profile data, unable to rewind: %s\n",
             FUNC_11(VAR_6));
    return -1;
  }


  if (VAR_9 < sizeof(__llvm_profile_header)) {
    if (VAR_9)
      FUNC_2("Unable to merge profile data: %s\n",
                "source profile file is too small.");
    return 0;
  }

  VAR_10 = FUNC_9(((void*)0), VAR_9, VAR_3, VAR_2 | VAR_1,
                       FUNC_6(VAR_7), 0);
  if (VAR_10 == VAR_0) {
    FUNC_1("Unable to merge profile data, mmap failed: %s\n",
             FUNC_11(VAR_6));
    return -1;
  }

  if (FUNC_3(VAR_10, VAR_9)) {
    (void)FUNC_10(VAR_10, VAR_9);
    FUNC_2("Unable to merge profile data: %s\n",
              "source profile file is not compatible.");
    return 0;
  }


  FUNC_5(VAR_10, VAR_9);



  FUNC_0(VAR_7, FUNC_4());

  (void)FUNC_10(VAR_10, VAR_9);
  *VAR_8 = 1;

  return 0;
}
