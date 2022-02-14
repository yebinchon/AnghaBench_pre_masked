
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int,char const*) ;
 int FUNC_2 (int *,size_t const) ;
 char** FUNC_3 (char const**,unsigned int,char**,unsigned int*,int const) ;
 int FUNC_4 (char const**,char*) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,char*) ;
 int FUNC_9 (int ,char*,char const*) ;
 size_t FUNC_10 (int *,int,size_t const,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (size_t const) ;
 int VAR_0 ;

int FUNC_13(int VAR_1, char const **VAR_2) {
  size_t const VAR_3 = (size_t)1 << 27;
  int const VAR_4 = 1;
  char *VAR_5 = ((void*)0);
  char const **VAR_6 = VAR_2 + 1;
  unsigned VAR_7 = VAR_1 - 1;
  uint8_t *VAR_8 = ((void*)0);
  size_t VAR_9 = 0;
  unsigned VAR_10;
  int VAR_11;







  if (VAR_7 == 0)
    FUNC_9(VAR_0, "WARNING: No files passed to %s\n", VAR_2[0]);
  for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
    char const *VAR_12 = VAR_6[VAR_10];
    FUNC_0(3, "Running %s", VAR_12);
    size_t const VAR_13 = FUNC_5(VAR_12);
    size_t VAR_14;
    FILE *VAR_15;





    if (!FUNC_6(VAR_12)) {
      continue;
    }
    FUNC_1(VAR_13 <= VAR_3, VAR_12);

    if (VAR_13 > VAR_9) {
      FUNC_11(VAR_8);
      VAR_8 = (uint8_t *)FUNC_12(VAR_13);
      FUNC_1(*VAR_8, VAR_12);
      VAR_9 = VAR_13;
    }

    VAR_15 = FUNC_8(VAR_12, "rb");
    FUNC_1(*VAR_15, VAR_12);

    VAR_14 = FUNC_10(VAR_8, 1, VAR_13, VAR_15);
    FUNC_1(VAR_14 == VAR_13, VAR_12);

    FUNC_7(VAR_15);

    FUNC_2(VAR_8, VAR_13);
  }

  VAR_11 = 0;
  FUNC_11(VAR_8);



  return VAR_11;
}
