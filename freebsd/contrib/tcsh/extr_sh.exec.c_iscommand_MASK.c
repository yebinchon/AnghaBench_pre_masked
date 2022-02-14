
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {scalar_t__** vec; } ;
typedef scalar_t__ Char ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_1 (int ,scalar_t__*) ;
 struct varent* FUNC_2 (int ) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (scalar_t__*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__** VAR_5 ;
 int FUNC_10 (scalar_t__*) ;
 int FUNC_11 (scalar_t__*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_12(Char *VAR_7)
{
    Char **VAR_8, **VAR_9;
    Char *VAR_10;
    struct varent *VAR_11;
    int VAR_12 = FUNC_3(FUNC_10(VAR_7), '/');
    int VAR_13, VAR_14, VAR_15;

    VAR_11 = FUNC_2(VAR_2);
    if (VAR_11 == ((void*)0) || VAR_11->vec == ((void*)0) || VAR_11->vec[0] == ((void*)0) || VAR_12)
 VAR_8 = VAR_5;
    else
 VAR_8 = VAR_11->vec;
    VAR_10 = FUNC_1(VAR_3, VAR_7);
    VAR_13 = VAR_4 ? FUNC_9(VAR_7) : 0;

    VAR_14 = 0;
retry:
    VAR_9 = VAR_8;
    VAR_15 = 0;
    do {
 if (!VAR_12 && FUNC_0(VAR_9[0]) && VAR_4) {




     int VAR_16 = FUNC_8(VAR_13, VAR_15);
     if (!FUNC_4(VAR_6, VAR_16))
  goto cont;

 }
 if (VAR_9[0][0] == 0 || FUNC_6(VAR_9[0], VAR_1)) {
     if (FUNC_7(((void*)0), VAR_7, 0)) {
  FUNC_11(VAR_10);
  return VAR_15 + 1;
     }
 }
 else {
     if (FUNC_7(*VAR_9, VAR_10, 0)) {
  FUNC_11(VAR_10);
  return VAR_15 + 1;
     }
 }
cont:
 VAR_9++;
 VAR_15++;
    } while (*VAR_9);
    if (FUNC_2(VAR_0) && !VAR_14 && VAR_4 && VAR_8 != VAR_5) {
 FUNC_5(((void*)0), ((void*)0));
 VAR_14 = 1;
 goto retry;
    }
    FUNC_11(VAR_10);
    return 0;
}
