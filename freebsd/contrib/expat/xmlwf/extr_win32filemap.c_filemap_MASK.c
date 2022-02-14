
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,int ,int ,int *,int ,int ,int *) ;
 int * FUNC_2 (int *,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 int * VAR_4 ;
 void* FUNC_4 (int *,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (void*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int const*) ;

int
FUNC_7(const TCHAR *VAR_8,
        void (*VAR_9)(const void *, size_t, const TCHAR *, void *VAR_10),
        void *VAR_11)
{
  HANDLE VAR_12;
  HANDLE VAR_13;
  DWORD VAR_14;
  DWORD VAR_15;
  void *VAR_16;

  VAR_12 = FUNC_1(VAR_8, VAR_3, VAR_2, ((void*)0), VAR_5,
                          VAR_0, ((void*)0));
  if (VAR_12 == VAR_4) {
    FUNC_6(VAR_8);
    return 0;
  }
  VAR_14 = FUNC_3(VAR_12, &VAR_15);
  if (VAR_14 == (DWORD)-1) {
    FUNC_6(VAR_8);
    FUNC_0(VAR_12);
    return 0;
  }
  if (VAR_15 || (VAR_14 > VAR_7)) {
    FUNC_0(VAR_12);
    return 2;
  }

  if (VAR_14 == 0) {
    static const char VAR_17 = '\0';
    VAR_9(&VAR_17, 0, VAR_8, VAR_11);
    FUNC_0(VAR_12);
    return 1;
  }
  VAR_13 = FUNC_2(VAR_12, ((void*)0), VAR_6, 0, 0, ((void*)0));
  if (VAR_13 == ((void*)0)) {
    FUNC_6(VAR_8);
    FUNC_0(VAR_12);
    return 0;
  }
  VAR_16 = FUNC_4(VAR_13, VAR_1, 0, 0, 0);
  if (VAR_16 == ((void*)0)) {
    FUNC_6(VAR_8);
    FUNC_0(VAR_13);
    FUNC_0(VAR_12);
    return 0;
  }
  VAR_9(VAR_16, VAR_14, VAR_8, VAR_11);
  FUNC_5(VAR_16);
  FUNC_0(VAR_13);
  FUNC_0(VAR_12);
  return 1;
}
