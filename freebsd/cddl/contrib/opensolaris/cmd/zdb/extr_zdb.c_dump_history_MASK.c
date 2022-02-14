
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef unsigned int uint_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ time_t ;
typedef int tbuf ;
struct tm {int dummy; } ;
typedef int spa_t ;
typedef int nvlist_t ;
typedef int internalstr ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int) ;
 int* VAR_11 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__*,struct tm*) ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ,char**) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int,char*,char*,int ,char*) ;
 int FUNC_9 (int *,scalar_t__*,scalar_t__*,char*) ;
 int VAR_12 ;
 int FUNC_10 (char*,int,char*,struct tm*) ;
 int FUNC_11 (int) ;
 char** VAR_13 ;
 scalar_t__ FUNC_12 (char*,scalar_t__,scalar_t__*,int ***,unsigned int*) ;

__attribute__((used)) static void
FUNC_13(spa_t *VAR_14)
{
 nvlist_t **VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 uint64_t VAR_17 = VAR_2;
 uint64_t VAR_18, VAR_19, VAR_20 = 0;
 uint_t VAR_21 = 0;
 int VAR_22;
 time_t VAR_23;
 struct tm VAR_24;
 char VAR_25[30];
 char VAR_26[VAR_4];

 if ((VAR_16 = FUNC_4(VAR_17)) == ((void*)0))
  (void) FUNC_1(VAR_12, "Unable to read history: "
      "out of memory\n");
 do {
  VAR_19 = VAR_17;

  if ((VAR_22 = FUNC_9(VAR_14, &VAR_20, &VAR_19, VAR_16)) != 0) {
   (void) FUNC_1(VAR_12, "Unable to read history: "
       "error %d\n", VAR_22);
   return;
  }

  if (FUNC_12(VAR_16, VAR_19, &VAR_18, &VAR_15, &VAR_21) != 0)
   break;
  VAR_20 -= VAR_18;





  if (VAR_18 == VAR_19) {
   FUNC_2(VAR_16);
   VAR_16 = ((void*)0);

   VAR_17 <<= 1;
   if ((VAR_17 >= VAR_3) ||
       ((VAR_16 = FUNC_4(VAR_17)) == ((void*)0))) {
    (void) FUNC_1(VAR_12, "Unable to read history: "
        "out of memory\n");
    return;
   }
  }
 } while (VAR_19 != 0);
 FUNC_2(VAR_16);

 (void) FUNC_7("\nHistory:\n");
 for (unsigned VAR_27 = 0; VAR_27 < VAR_21; VAR_27++) {
  uint64_t VAR_28, VAR_29, VAR_30;
  char *VAR_31, *VAR_32;
  boolean_t VAR_33 = VAR_0;

  if (FUNC_6(VAR_15[VAR_27], VAR_9,
      &VAR_28) != 0)
   goto next;
  if (FUNC_5(VAR_15[VAR_27], VAR_6,
      &VAR_31) != 0) {
   if (FUNC_6(VAR_15[VAR_27],
       VAR_7, &VAR_30) != 0)
    goto next;
   FUNC_11(FUNC_6(VAR_15[VAR_27],
       VAR_10, &VAR_29) == 0);
   FUNC_11(FUNC_5(VAR_15[VAR_27],
       VAR_8, &VAR_32) == 0);
   if (VAR_30 >= VAR_5)
    goto next;

   (void) FUNC_8(VAR_26,
       sizeof (VAR_26),
       "[internal %s txg:%ju] %s",
       VAR_13[VAR_30], (uintmax_t)VAR_29,
       VAR_32);
   VAR_31 = VAR_26;
  }
  VAR_23 = VAR_28;
  (void) FUNC_3(&VAR_23, &VAR_24);
  (void) FUNC_10(VAR_25, sizeof (VAR_25), "%F.%T", &VAR_24);
  (void) FUNC_7("%s %s\n", VAR_25, VAR_31);
  VAR_33 = VAR_1;

next:
  if (VAR_11['h'] > 1) {
   if (!VAR_33)
    (void) FUNC_7("unrecognized record:\n");
   FUNC_0(VAR_15[VAR_27], 2);
  }
 }
}
