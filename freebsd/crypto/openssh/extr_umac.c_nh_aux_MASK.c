
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UINT64 ;
typedef int UINT32 ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, const void *VAR_1, void *VAR_2, UINT32 VAR_3)



{
  UINT64 VAR_4,VAR_5;
  UWORD VAR_6 = VAR_3 / 32;
  UINT32 *VAR_7 = (UINT32 *)VAR_0;
  const UINT32 *VAR_8 = (const UINT32 *)VAR_1;
  UINT32 VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16;
  UINT32 VAR_17,VAR_18,VAR_19,VAR_20,VAR_21,VAR_22,VAR_23,VAR_24,
        VAR_25,VAR_26,VAR_27,VAR_28;

  VAR_4 = *((UINT64 *)VAR_2);
  VAR_5 = *((UINT64 *)VAR_2 + 1);
  VAR_17 = *(VAR_7+0); VAR_18 = *(VAR_7+1); VAR_19 = *(VAR_7+2); VAR_20 = *(VAR_7+3);
  do {
    VAR_9 = FUNC_0(VAR_8+0); VAR_10 = FUNC_0(VAR_8+1);
    VAR_11 = FUNC_0(VAR_8+2); VAR_12 = FUNC_0(VAR_8+3);
    VAR_13 = FUNC_0(VAR_8+4); VAR_14 = FUNC_0(VAR_8+5);
    VAR_15 = FUNC_0(VAR_8+6); VAR_16 = FUNC_0(VAR_8+7);
    VAR_21 = *(VAR_7+4); VAR_22 = *(VAR_7+5); VAR_23 = *(VAR_7+6); VAR_24 = *(VAR_7+7);
    VAR_25 = *(VAR_7+8); VAR_26 = *(VAR_7+9); VAR_27 = *(VAR_7+10); VAR_28 = *(VAR_7+11);

    VAR_4 += FUNC_1((VAR_17 + VAR_9), (VAR_21 + VAR_13));
    VAR_5 += FUNC_1((VAR_21 + VAR_9), (VAR_25 + VAR_13));

    VAR_4 += FUNC_1((VAR_18 + VAR_10), (VAR_22 + VAR_14));
    VAR_5 += FUNC_1((VAR_22 + VAR_10), (VAR_26 + VAR_14));

    VAR_4 += FUNC_1((VAR_19 + VAR_11), (VAR_23 + VAR_15));
    VAR_5 += FUNC_1((VAR_23 + VAR_11), (VAR_27 + VAR_15));

    VAR_4 += FUNC_1((VAR_20 + VAR_12), (VAR_24 + VAR_16));
    VAR_5 += FUNC_1((VAR_24 + VAR_12), (VAR_28 + VAR_16));

    VAR_17 = VAR_25; VAR_18 = VAR_26; VAR_19 = VAR_27; VAR_20 = VAR_28;

    VAR_8 += 8;
    VAR_7 += 8;
  } while (--VAR_6);
  ((UINT64 *)VAR_2)[0] = VAR_4;
  ((UINT64 *)VAR_2)[1] = VAR_5;
}
