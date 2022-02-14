
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,int) ;
 int * FUNC_2 (char const*,void const*,size_t) ;
 int * FUNC_3 (char const*,int ) ;
 int * FUNC_4 (char const*,void const*,size_t) ;
 int * FUNC_5 (char const*,int ) ;
 int * FUNC_6 (char const*,void const*,size_t) ;
 int * FUNC_7 (char const*) ;
 int * FUNC_8 (char const*,int ) ;
 int * FUNC_9 (char const*,void const*,size_t) ;
 int * FUNC_10 (char const*,int ) ;
 int * FUNC_11 (char const*,void const*,size_t) ;
 int * FUNC_12 (char const*,int ) ;
 int * FUNC_13 (char const*,void const*,size_t) ;
 void* FUNC_14 (int const*,size_t*) ;
 int FUNC_15 (int const*) ;
 void* FUNC_16 (int const*,size_t*) ;
 int FUNC_17 (int const*) ;
 void* FUNC_18 (int const*,size_t*) ;
 int FUNC_19 (int const*) ;
 void* FUNC_20 (int const*,size_t*) ;
 int FUNC_21 (int const*) ;
 void* FUNC_22 (int const*,size_t*) ;
 int FUNC_23 (int const*) ;
 void* FUNC_24 (int const*,size_t*) ;
 char* FUNC_25 (int const*) ;
 int FUNC_26 (int const*) ;

nvpair_t *
FUNC_27(const nvpair_t *VAR_0)
{
 nvpair_t *VAR_1;
 const char *VAR_2;
 const void *VAR_3;
 size_t VAR_4;

 FUNC_0(VAR_0);

 VAR_2 = FUNC_25(VAR_0);

 switch (FUNC_26(VAR_0)) {
 case 134:
  VAR_1 = FUNC_7(VAR_2);
  break;
 case 138:
  VAR_1 = FUNC_3(VAR_2, FUNC_15(VAR_0));
  break;
 case 133:
  VAR_1 = FUNC_8(VAR_2, FUNC_19(VAR_0));
  break;
 case 129:
  VAR_1 = FUNC_12(VAR_2, FUNC_23(VAR_0));
  break;
 case 131:
  VAR_1 = FUNC_10(VAR_2, FUNC_21(VAR_0));
  break;
 case 139:
  VAR_3 = FUNC_14(VAR_0, &VAR_4);
  VAR_1 = FUNC_2(VAR_2, VAR_3, VAR_4);
  break;
 case 137:
  VAR_3 = FUNC_16(VAR_0, &VAR_4);
  VAR_1 = FUNC_4(VAR_2, VAR_3, VAR_4);
  break;
 case 132:
  VAR_3 = FUNC_20(VAR_0, &VAR_4);
  VAR_1 = FUNC_9(VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  VAR_3 = FUNC_24(VAR_0, &VAR_4);
  VAR_1 = FUNC_13(VAR_2, VAR_3, VAR_4);
  break;
 case 130:
  VAR_3 = FUNC_22(VAR_0, &VAR_4);
  VAR_1 = FUNC_11(VAR_2, VAR_3, VAR_4);
  break;

 case 136:
  VAR_1 = FUNC_5(VAR_2,
      FUNC_17(VAR_0));
  break;
 case 135:
  VAR_3 = FUNC_18(VAR_0, &VAR_4);
  VAR_1 = FUNC_6(VAR_2, VAR_3, VAR_4);
  break;

 default:
  FUNC_1("Unknown type: %d.", FUNC_26(VAR_0));
 }

 return (VAR_1);
}
