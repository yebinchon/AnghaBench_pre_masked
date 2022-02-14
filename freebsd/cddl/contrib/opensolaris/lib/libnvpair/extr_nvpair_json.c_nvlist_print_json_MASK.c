
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int uchar_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int int8_t ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef scalar_t__ hrtime_t ;
typedef int data_type_t ;
typedef scalar_t__ boolean_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,char*) ;
 char* FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,scalar_t__**,size_t*) ;
 int FUNC_19 (int *,int **,size_t*) ;
 int FUNC_20 (int *,double*) ;
 int FUNC_21 (int *,scalar_t__*) ;
 int FUNC_22 (int *,int **,size_t*) ;
 int FUNC_23 (int *,int **,size_t*) ;
 int FUNC_24 (int *,scalar_t__**,size_t*) ;
 int FUNC_25 (int *,int **,size_t*) ;
 int FUNC_26 (int *,int ***,size_t*) ;
 int FUNC_27 (int *,char***,size_t*) ;
 int FUNC_28 (int *,int **,size_t*) ;
 int FUNC_29 (int *,int **,size_t*) ;
 int FUNC_30 (int *,scalar_t__**,size_t*) ;
 int FUNC_31 (int *,int **,size_t*) ;

int
FUNC_32(FILE *VAR_2, nvlist_t *VAR_3)
{
 nvpair_t *VAR_4;
 boolean_t VAR_5 = VAR_1;

 FUNC_0(VAR_2, "{");

 for (VAR_4 = FUNC_14(VAR_3, ((void*)0)); VAR_4;
     VAR_4 = FUNC_14(VAR_3, VAR_4)) {
  data_type_t VAR_6 = FUNC_17(VAR_4);

  if (!VAR_5)
   FUNC_0(VAR_2, ",");
  else
   VAR_5 = VAR_0;

  if (FUNC_15(VAR_2, FUNC_16(VAR_4)) == -1)
   return (-1);
  FUNC_0(VAR_2, ":");

  switch (VAR_6) {
  case 138: {
   char *VAR_7 = FUNC_9(VAR_4);
   if (FUNC_15(VAR_2, VAR_7) == -1)
    return (-1);
   break;
  }

  case 156: {
   FUNC_0(VAR_2, "true");
   break;
  }

  case 154: {
   FUNC_0(VAR_2, "%s", FUNC_2(VAR_4) ==
       VAR_1 ? "true" : "false");
   break;
  }

  case 153: {
   FUNC_0(VAR_2, "%hhu", FUNC_3(VAR_4));
   break;
  }

  case 142: {
   FUNC_0(VAR_2, "%hhd", FUNC_7(VAR_4));
   break;
  }

  case 130: {
   FUNC_0(VAR_2, "%hhu", FUNC_13(VAR_4));
   break;
  }

  case 148: {
   FUNC_0(VAR_2, "%hd", FUNC_4(VAR_4));
   break;
  }

  case 136: {
   FUNC_0(VAR_2, "%hu", FUNC_10(VAR_4));
   break;
  }

  case 146: {
   FUNC_0(VAR_2, "%d", FUNC_5(VAR_4));
   break;
  }

  case 134: {
   FUNC_0(VAR_2, "%u", FUNC_11(VAR_4));
   break;
  }

  case 144: {
   FUNC_0(VAR_2, "%lld",
       (long long)FUNC_6(VAR_4));
   break;
  }

  case 132: {
   FUNC_0(VAR_2, "%llu",
       (unsigned long long)FUNC_12(VAR_4));
   break;
  }

  case 149: {
   hrtime_t VAR_8;
   FUNC_1(FUNC_21(VAR_4, &VAR_8));
   FUNC_0(VAR_2, "%llu", (unsigned long long)VAR_8);
   break;
  }

  case 150: {
   double VAR_9;
   FUNC_1(FUNC_20(VAR_4, &VAR_9));
   FUNC_0(VAR_2, "%f", VAR_9);
   break;
  }

  case 140: {
   if (FUNC_32(VAR_2,
       FUNC_8(VAR_4)) == -1)
    return (-1);
   break;
  }

  case 137: {
   char **VAR_10;
   uint_t VAR_11, VAR_12;
   FUNC_1(FUNC_27(VAR_4, &VAR_10, &VAR_11));
   FUNC_0(VAR_2, "[");
   for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
    if (VAR_12 > 0)
     FUNC_0(VAR_2, ",");
    if (FUNC_15(VAR_2, VAR_10[VAR_12]) == -1)
     return (-1);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 139: {
   nvlist_t **VAR_13;
   uint_t VAR_14, VAR_15;
   FUNC_1(FUNC_26(VAR_4, &VAR_13, &VAR_14));
   FUNC_0(VAR_2, "[");
   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
    if (VAR_15 > 0)
     FUNC_0(VAR_2, ",");
    if (FUNC_32(VAR_2, VAR_13[VAR_15]) == -1)
     return (-1);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 155: {
   boolean_t *VAR_16;
   uint_t VAR_17, VAR_18;
   FUNC_1(FUNC_18(VAR_4, &VAR_16, &VAR_17));
   FUNC_0(VAR_2, "[");
   for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
    if (VAR_18 > 0)
     FUNC_0(VAR_2, ",");
    FUNC_0(VAR_2, VAR_16[VAR_18] == VAR_1 ?
        "true" : "false");
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 152: {
   uchar_t *VAR_19;
   uint_t VAR_20, VAR_21;
   FUNC_1(FUNC_19(VAR_4, &VAR_19, &VAR_20));
   FUNC_0(VAR_2, "[");
   for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
    if (VAR_21 > 0)
     FUNC_0(VAR_2, ",");
    FUNC_0(VAR_2, "%hhu", VAR_19[VAR_21]);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 129: {
   uint8_t *VAR_22;
   uint_t VAR_23, VAR_24;
   FUNC_1(FUNC_31(VAR_4, &VAR_22, &VAR_23));
   FUNC_0(VAR_2, "[");
   for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
    if (VAR_24 > 0)
     FUNC_0(VAR_2, ",");
    FUNC_0(VAR_2, "%hhu", VAR_22[VAR_24]);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 141: {
   int8_t *VAR_25;
   uint_t VAR_26, VAR_27;
   FUNC_1(FUNC_25(VAR_4, &VAR_25, &VAR_26));
   FUNC_0(VAR_2, "[");
   for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++) {
    if (VAR_27 > 0)
     FUNC_0(VAR_2, ",");
    FUNC_0(VAR_2, "%hhd", VAR_25[VAR_27]);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 135: {
   uint16_t *VAR_28;
   uint_t VAR_29, VAR_30;
   FUNC_1(FUNC_28(VAR_4, &VAR_28, &VAR_29));
   FUNC_0(VAR_2, "[");
   for (VAR_30 = 0; VAR_30 < VAR_29; VAR_30++) {
    if (VAR_30 > 0)
     FUNC_0(VAR_2, ",");
    FUNC_0(VAR_2, "%hu", VAR_28[VAR_30]);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 147: {
   int16_t *VAR_31;
   uint_t VAR_32, VAR_33;
   FUNC_1(FUNC_22(VAR_4, &VAR_31, &VAR_32));
   FUNC_0(VAR_2, "[");
   for (VAR_33 = 0; VAR_33 < VAR_32; VAR_33++) {
    if (VAR_33 > 0)
     FUNC_0(VAR_2, ",");
    FUNC_0(VAR_2, "%hd", VAR_31[VAR_33]);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 133: {
   uint32_t *VAR_34;
   uint_t VAR_35, VAR_36;
   FUNC_1(FUNC_29(VAR_4, &VAR_34, &VAR_35));
   FUNC_0(VAR_2, "[");
   for (VAR_36 = 0; VAR_36 < VAR_35; VAR_36++) {
    if (VAR_36 > 0)
     FUNC_0(VAR_2, ",");
    FUNC_0(VAR_2, "%u", VAR_34[VAR_36]);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 145: {
   int32_t *VAR_37;
   uint_t VAR_38, VAR_39;
   FUNC_1(FUNC_23(VAR_4, &VAR_37, &VAR_38));
   FUNC_0(VAR_2, "[");
   for (VAR_39 = 0; VAR_39 < VAR_38; VAR_39++) {
    if (VAR_39 > 0)
     FUNC_0(VAR_2, ",");
    FUNC_0(VAR_2, "%d", VAR_37[VAR_39]);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 131: {
   uint64_t *VAR_40;
   uint_t VAR_41, VAR_42;
   FUNC_1(FUNC_30(VAR_4, &VAR_40, &VAR_41));
   FUNC_0(VAR_2, "[");
   for (VAR_42 = 0; VAR_42 < VAR_41; VAR_42++) {
    if (VAR_42 > 0)
     FUNC_0(VAR_2, ",");
    FUNC_0(VAR_2, "%llu",
        (unsigned long long)VAR_40[VAR_42]);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 143: {
   int64_t *VAR_43;
   uint_t VAR_44, VAR_45;
   FUNC_1(FUNC_24(VAR_4, &VAR_43, &VAR_44));
   FUNC_0(VAR_2, "[");
   for (VAR_45 = 0; VAR_45 < VAR_44; VAR_45++) {
    if (VAR_45 > 0)
     FUNC_0(VAR_2, ",");
    FUNC_0(VAR_2, "%lld", (long long)VAR_43[VAR_45]);
   }
   FUNC_0(VAR_2, "]");
   break;
  }

  case 128:
  case 151:
   return (-1);
  }

 }

 FUNC_0(VAR_2, "}");
 return (0);
}
