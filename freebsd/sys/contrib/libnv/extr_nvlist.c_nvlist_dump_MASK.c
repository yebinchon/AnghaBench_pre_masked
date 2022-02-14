
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int intmax_t ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int const* const,int,int) ;
 int * FUNC_3 (int const*) ;
 int * FUNC_4 (int const*,void**) ;
 scalar_t__ FUNC_5 (int const*) ;
 int * FUNC_6 (int const*,int *) ;
 unsigned char* FUNC_7 (int *,size_t*) ;
 int FUNC_8 (int *) ;
 int* FUNC_9 (int *,size_t*) ;
 int FUNC_10 (int *) ;
 int* FUNC_11 (int *,size_t*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,size_t*) ;
 int * FUNC_14 (int *) ;
 int ** FUNC_15 (int *,size_t*) ;
 int FUNC_16 (int *) ;
 char** FUNC_17 (int *,size_t*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int) ;

void
FUNC_21(const nvlist_t *VAR_0, int VAR_1)
{
 const nvlist_t *VAR_2;
 nvpair_t *VAR_3, *VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_6 = 0;
 if (FUNC_2(VAR_0, VAR_1, VAR_6))
  return;

 VAR_3 = FUNC_3(VAR_0);
 while (VAR_3 != ((void*)0)) {
  FUNC_1(VAR_1, "%*s%s (%s):", VAR_6 * 4, "", FUNC_18(VAR_3),
      FUNC_20(FUNC_19(VAR_3)));
  switch (FUNC_19(VAR_3)) {
  case 134:
   FUNC_1(VAR_1, " null\n");
   break;
  case 138:
   FUNC_1(VAR_1, " %s\n", FUNC_8(VAR_3) ?
       "TRUE" : "FALSE");
   break;
  case 133:
   FUNC_1(VAR_1, " %ju (%jd) (0x%jx)\n",
       (uintmax_t)FUNC_12(VAR_3),
       (intmax_t)FUNC_12(VAR_3),
       (uintmax_t)FUNC_12(VAR_3));
   break;
  case 129:
   FUNC_1(VAR_1, " [%s]\n", FUNC_16(VAR_3));
   break;
  case 131:
   FUNC_1(VAR_1, "\n");
   VAR_2 = FUNC_14(VAR_3);
   if (FUNC_2(VAR_2, VAR_1, VAR_6 + 1))
    break;
   VAR_4 = FUNC_3(VAR_2);
   if (VAR_4 != ((void*)0)) {
    VAR_0 = VAR_2;
    VAR_3 = VAR_4;
    VAR_6++;
    continue;
   }
   break;
  case 136:
   FUNC_1(VAR_1, " %d\n", FUNC_10(VAR_3));
   break;
  case 139:
      {
   const unsigned char *VAR_7;
   unsigned int VAR_8;
   size_t VAR_9;

   VAR_7 = FUNC_7(VAR_3, &VAR_9);
   FUNC_1(VAR_1, " %zu ", VAR_9);
   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    FUNC_1(VAR_1, "%02hhx", VAR_7[VAR_8]);
   FUNC_1(VAR_1, "\n");
   break;
      }
  case 137:
      {
   const bool *VAR_10;
   unsigned int VAR_11;
   size_t VAR_12;

   VAR_10 = FUNC_9(VAR_3, &VAR_12);
   FUNC_1(VAR_1, " [ ");
   for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
    FUNC_1(VAR_1, "%s", VAR_10[VAR_11] ? "TRUE" : "FALSE");
    if (VAR_11 != VAR_12 - 1)
     FUNC_1(VAR_1, ", ");
   }
   FUNC_1(VAR_1, " ]\n");
   break;
      }
  case 128:
      {
   const char * const *VAR_13;
   unsigned int VAR_14;
   size_t VAR_15;

   VAR_13 = FUNC_17(VAR_3, &VAR_15);
   FUNC_1(VAR_1, " [ ");
   for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
    if (VAR_13[VAR_14] == ((void*)0))
     FUNC_1(VAR_1, "NULL");
    else
     FUNC_1(VAR_1, "\"%s\"", VAR_13[VAR_14]);
    if (VAR_14 != VAR_15 - 1)
     FUNC_1(VAR_1, ", ");
   }
   FUNC_1(VAR_1, " ]\n");
   break;
      }
  case 132:
      {
   const uint64_t *VAR_16;
   unsigned int VAR_17;
   size_t VAR_18;

   VAR_16 = FUNC_13(VAR_3, &VAR_18);
   FUNC_1(VAR_1, " [ ");
   for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
    FUNC_1(VAR_1, "%ju (%jd) (0x%jx)",
        VAR_16[VAR_17], VAR_16[VAR_17], VAR_16[VAR_17]);
    if (VAR_17 != VAR_18 - 1)
     FUNC_1(VAR_1, ", ");
   }
   FUNC_1(VAR_1, " ]\n");
   break;
      }
  case 135:
      {
   const int *VAR_19;
   unsigned int VAR_20;
   size_t VAR_21;

   VAR_19 = FUNC_11(VAR_3, &VAR_21);
   FUNC_1(VAR_1, " [ ");
   for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
    FUNC_1(VAR_1, "%d", VAR_19[VAR_20]);
    if (VAR_20 != VAR_21 - 1)
     FUNC_1(VAR_1, ", ");
   }
   FUNC_1(VAR_1, " ]\n");
   break;
      }
  case 130:
      {
   const nvlist_t * const *VAR_22;
   unsigned int VAR_23;
   size_t VAR_24;

   VAR_22 = FUNC_15(VAR_3, &VAR_24);
   FUNC_1(VAR_1, " %zu\n", VAR_24);
   VAR_2 = ((void*)0);
   VAR_4 = ((void*)0);
   for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
    if (FUNC_2(VAR_22[VAR_23], VAR_1,
        VAR_6 + 1)) {
     break;
    }

    if (VAR_2 == ((void*)0)) {
     VAR_4 = FUNC_3(VAR_22[VAR_23]);
     if (VAR_4 != ((void*)0)) {
      VAR_2 = VAR_22[VAR_23];
     } else {
      FUNC_1(VAR_1, "%*s,\n",
          (VAR_6 + 1) * 4, "");
     }
    }
   }
   if (VAR_4 != ((void*)0)) {
    VAR_0 = VAR_2;
    VAR_3 = VAR_4;
    VAR_6++;
    continue;
   }
   break;
      }
  default:
   FUNC_0("Unknown type: %d.", FUNC_19(VAR_3));
  }

  while ((VAR_3 = FUNC_6(VAR_0, VAR_3)) == ((void*)0)) {
   do {
    VAR_5 = ((void*)0);
    if (FUNC_5(VAR_0))
     FUNC_1(VAR_1, "%*s,\n", VAR_6 * 4, "");
    VAR_0 = FUNC_4(VAR_0, &VAR_5);
    if (VAR_0 == ((void*)0))
     return;
    if (FUNC_5(VAR_0) && VAR_5 == ((void*)0)) {
     VAR_3 = FUNC_3(VAR_0);
    } else {
     VAR_3 = VAR_5;
     VAR_6--;
    }
   } while (VAR_3 == ((void*)0));
   if (FUNC_5(VAR_0) && VAR_5 == ((void*)0))
    break;
  }
 }
}
