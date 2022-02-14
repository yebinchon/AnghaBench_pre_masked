
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_short ;
typedef scalar_t__ u_int ;
struct parse {int dummy; } ;
struct TYPE_5__ {char* flagstr; int mask; scalar_t__ hits; int addr; } ;
typedef TYPE_1__ reslist_row ;
typedef int FILE ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (int*,TYPE_1__*,int *) ;
 int VAR_4 ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int ,int ,int,int const,char const*,int *,size_t*,char const**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (char*,char*,size_t) ;
 scalar_t__ FUNC_9 (size_t*,char const**,char**,char**) ;
 int FUNC_10 (char*,char const*,scalar_t__*) ;
 int VAR_5 ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (int *,scalar_t__,int*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_13(
 struct parse * VAR_6,
 FILE * VAR_7
 )
{
 const char VAR_8[] = "addr.%u";
 const char VAR_9[] = "mask.%u";
 const char VAR_10[] = "hits.%u";
 const char VAR_11[] = "flags.%u";
 const char VAR_12[] = "addr_restrictions";
 const int VAR_13 = FUNC_0(VAR_12) - 1;
 const char * VAR_14;
 int VAR_15;
 size_t VAR_16;
 u_short VAR_17;
 char * VAR_18;
 char * VAR_19;
 int VAR_20;
 u_int VAR_21;
 reslist_row VAR_22;
 int VAR_23;
 size_t VAR_24;

 VAR_15 = FUNC_5(VAR_0, 0, VAR_3, VAR_13,
         VAR_12, &VAR_17, &VAR_16, &VAR_14);
 if (VAR_15)
  return;

 FUNC_7(VAR_7,
  "   hits    addr/prefix or addr mask\n"
  "           restrictions\n"
  "==============================================================================\n");


 FUNC_2(VAR_22);
 VAR_20 = 0;
 VAR_21 = 0;
 while (FUNC_9(&VAR_16, &VAR_14, &VAR_18, &VAR_19)) {
  FUNC_1(VAR_18 && VAR_19);
  if (VAR_4 > 1)
   FUNC_7(&VAR_5, "nextvar gave: %s = %s\n", VAR_18, VAR_19);
  VAR_23 = VAR_1;
  switch(VAR_18[0]) {

  case 'a':
   if (1 == FUNC_10(VAR_18, VAR_8, &VAR_21) &&
       FUNC_4(VAR_19, &VAR_22.addr))
    VAR_23 = VAR_3;
   break;

  case 'f':
   if (1 == FUNC_10(VAR_18, VAR_11, &VAR_21)) {
    if (((void*)0) == VAR_19) {
     VAR_22.flagstr[0] = '\0';
     VAR_23 = VAR_3;
    } else if ((VAR_24 = FUNC_11(VAR_19)) < sizeof(VAR_22.flagstr)) {
     FUNC_8(VAR_22.flagstr, VAR_19, VAR_24);
     VAR_22.flagstr[VAR_24] = '\0';
     VAR_23 = VAR_3;
    } else {

     VAR_22.flagstr[0] = '\0';
    }
   }
   break;

  case 'h':
   if (1 == FUNC_10(VAR_18, VAR_10, &VAR_21) &&
       1 == FUNC_10(VAR_19, "%lu", &VAR_22.hits))
    VAR_23 = VAR_3;
   break;

  case 'm':
   if (1 == FUNC_10(VAR_18, VAR_9, &VAR_21) &&
       FUNC_4(VAR_19, &VAR_22.mask))
    VAR_23 = VAR_3;
   break;
  }

  if (VAR_23) {

   FUNC_12(VAR_7, VAR_21, &VAR_20, &VAR_22);

   FUNC_3(&VAR_20, &VAR_22, VAR_7);
  }
 }
 if (VAR_20 != VAR_2)
  FUNC_7(VAR_7, "Warning: incomplete row with %d (of %d) fields",
   VAR_20, VAR_2);

 FUNC_6(VAR_7);
}
