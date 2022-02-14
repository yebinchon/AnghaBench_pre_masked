
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int *,long) ;
 int FUNC_1 (char*,char const*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,long,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static FILE *FUNC_10(const char *VAR_2, int *VAR_3) {
  FILE *VAR_4 = ((void*)0);
  int VAR_5;

  VAR_4 = FUNC_6();
  if (VAR_4) {
    FUNC_7(VAR_4);
  } else {
    FUNC_2(VAR_2);
    VAR_4 = FUNC_8(VAR_2);
  }
  if (!VAR_4)
    return ((void*)0);

  VAR_5 = FUNC_3(VAR_4, VAR_3);
  if (VAR_5 || (!*VAR_3 && FUNC_0(VAR_4, 0L)) ||
      FUNC_5(VAR_4, 0L, VAR_0) == -1) {
    FUNC_1("Profile Merging of file %s failed: %s\n", VAR_2,
             FUNC_9(VAR_1));
    FUNC_4(VAR_4);
    return ((void*)0);
  }
  return VAR_4;
}
