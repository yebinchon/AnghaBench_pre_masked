
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int ssize_t ;
typedef int recno_t ;
typedef int recno ;
typedef enum S { ____Placeholder_S } S ;
typedef int buf ;
struct TYPE_25__ {scalar_t__ (* close ) (TYPE_2__*) ;} ;
struct TYPE_24__ {size_t size; int * data; } ;
typedef TYPE_1__ DBT ;
typedef TYPE_2__ DB ;


 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int VAR_10 ;

 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 TYPE_2__* FUNC_7 (char*,int,int,scalar_t__,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int,int) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int,char*,int,...) ;
 char* FUNC_12 (char*,int,int ) ;
 int VAR_16 ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (char*,char*,int ) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_16 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (int,char**,char*) ;
 int * VAR_17 ;
 scalar_t__ FUNC_19 (unsigned char) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_20 (char*,int,int) ;
 int FUNC_21 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_22 (TYPE_2__*,TYPE_1__*) ;
 void* FUNC_23 (char*,size_t*) ;
 int FUNC_24 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_25 (char*) ;
 int * FUNC_26 (scalar_t__,char*) ;
 int FUNC_27 (char*,int,char*,char const*) ;
 int VAR_20 ;
 char* FUNC_28 (char*,char) ;
 scalar_t__ FUNC_29 (char*,char*) ;
 size_t FUNC_30 (char*) ;
 char* FUNC_31 (char*,char*) ;
 scalar_t__ FUNC_32 (TYPE_2__*) ;
 int FUNC_33 (TYPE_2__*) ;
 scalar_t__ VAR_21 ;
 int FUNC_34 (char*) ;
 int FUNC_35 (TYPE_2__*) ;
 int FUNC_36 () ;
 int FUNC_37 (scalar_t__,char*,int) ;
 void* FUNC_38 (char*,size_t) ;

int
FUNC_39(int VAR_22, char *VAR_23[])
{
 extern int VAR_24;
 extern char *VAR_25;
 enum S VAR_26 = VAR_0, VAR_27;
 DB *VAR_28;
 DBT VAR_29, VAR_30, VAR_31;
 size_t VAR_32;
 int VAR_33, VAR_34, VAR_35;
 char *VAR_36, *VAR_37, *VAR_38, *VAR_39, VAR_40[8 * 1024];
 bool VAR_41;

 VAR_37 = ((void*)0);
 VAR_36 = ((void*)0);
 VAR_41 = 0;
 VAR_34 = VAR_6 | VAR_7;
 VAR_35 = 0;
 while ((VAR_33 = FUNC_18(VAR_22, VAR_23, "f:i:lo:s")) != -1)
  switch (VAR_33) {
  case 'f':
   VAR_36 = VAR_25;
   break;
  case 'i':
   VAR_37 = VAR_25;
   break;
  case 'l':
   VAR_34 |= VAR_3;
   break;
  case 'o':
   if ((VAR_19 = FUNC_20(VAR_25,
       VAR_9|VAR_6|VAR_8, 0666)) < 0)
    FUNC_10(1, "Cannot create `%s'", VAR_25);
   break;
  case 's':
   VAR_35 = 1;
   break;
  case '?':
  default:
   FUNC_36();
  }
 VAR_22 -= VAR_24;
 VAR_23 += VAR_24;

 if (VAR_22 != 2)
  FUNC_36();


 VAR_21 = FUNC_8(*VAR_23++);


        if (FUNC_29(*VAR_23, "-") && FUNC_14(*VAR_23, "r", VAR_20) == ((void*)0))
     FUNC_10(1, "Cannot reopen `%s'", *VAR_23);


 if (VAR_37 == ((void*)0))
  VAR_17 = ((void*)0);
 else
  for (VAR_38 = FUNC_31(VAR_37, ",\t "); VAR_38 != ((void*)0);
      VAR_38 = FUNC_31(0, ",\t "))
   if (*VAR_38 != '\0')
    VAR_17 = FUNC_26(VAR_21, VAR_38);





 if (VAR_36 == ((void*)0)) {
  const char *VAR_42 = FUNC_17("TMPDIR");
  if (VAR_42 == ((void*)0))
   VAR_42 = "/var/tmp";
  (void)FUNC_27(VAR_40, sizeof(VAR_40), "%s/__dbtest", VAR_42);
  VAR_36 = VAR_40;
  (void)FUNC_34(VAR_40);
  VAR_41 = 1;
 } else if (!VAR_35)
  (void)FUNC_34(VAR_36);

 if ((VAR_28 = FUNC_7(VAR_36,
     VAR_34, VAR_12 | VAR_13, VAR_21, VAR_17)) == ((void*)0))
  FUNC_10(1, "Cannot dbopen `%s'", VAR_36);
 VAR_14 = VAR_28;
 if (VAR_41)
  (void)FUNC_34(VAR_36);

 VAR_27 = VAR_0;
 for (VAR_18 = 1;
     (VAR_38 = FUNC_12(VAR_40, sizeof(VAR_40), VAR_20)) != ((void*)0); ++VAR_18) {

  if (VAR_19 == VAR_11 && (VAR_39 = FUNC_28(VAR_38, '\n')) != ((void*)0))
   *VAR_39 = '\0';
  if ((VAR_32 = FUNC_30(VAR_40)) == 0 || FUNC_19((unsigned char)*VAR_38) ||
      *VAR_38 == '#')
   continue;


  if (VAR_15 == VAR_18)
   VAR_15 = 1;
  switch (*VAR_38) {
  case 'c':
   FUNC_2(VAR_27);
   VAR_27 = VAR_5;
   VAR_26 = 132;
   break;
  case 'e':
   FUNC_2(VAR_27);

   if (VAR_38[VAR_32 - 2] == '\r')
    --VAR_32;
   if (FUNC_37(VAR_19, VAR_38 + 1, VAR_32 - 1) != (ssize_t)VAR_32 - 1 ||
       FUNC_37(VAR_19, "\n", 1) != 1)
    FUNC_10(1, "write failed");
   break;
  case 'g':
   FUNC_2(VAR_27);
   VAR_27 = VAR_5;
   VAR_26 = 131;
   break;
  case 'p':
   FUNC_2(VAR_27);
   VAR_27 = VAR_5;
   VAR_26 = 130;
   break;
  case 'r':
   FUNC_2(VAR_27);
                        if (VAR_16 == VAR_10) {
    FUNC_22(VAR_28, &VAR_30);
    VAR_27 = VAR_0;
                        } else {
    VAR_27 = VAR_5;
    VAR_26 = 129;
   }
   break;
  case 'S':
   FUNC_2(VAR_27);
   FUNC_33(VAR_28);
   VAR_27 = VAR_0;
   break;
  case 's':
   FUNC_2(VAR_27);
   if (VAR_16 == VAR_10) {
    VAR_27 = VAR_5;
    VAR_26 = 128;
   } else
    FUNC_24(VAR_28, &VAR_30);
   break;
  case 'f':
   VAR_16 = FUNC_25(VAR_38 + 1);
   break;
  case 'D':
   FUNC_3(VAR_27);
   VAR_29.data = FUNC_23(VAR_38 + 1, &VAR_29.size);
   goto ldata;
  case 'd':
   FUNC_3(VAR_27);
   VAR_29.data = FUNC_38(VAR_38 + 1, VAR_32 - 1);
   VAR_29.size = VAR_32 - 1;
ldata: switch (VAR_26) {
   case 132:
    FUNC_6(&VAR_31, &VAR_29);
    break;
   case 130:
    FUNC_21(VAR_28, &VAR_30, &VAR_29);
    break;
   default:
    FUNC_11(1, "line %zu: command doesn't take data",
        VAR_18);
   }
   if (VAR_21 != VAR_4)
    FUNC_13(VAR_30.data);
   FUNC_13(VAR_29.data);
   VAR_27 = VAR_0;
   break;
  case 'K':
   FUNC_4(VAR_27);
   if (VAR_21 == VAR_4)
    FUNC_11(1, "line %zu: 'K' not available for recno",
        VAR_18);
   VAR_30.data = FUNC_23(VAR_38 + 1, &VAR_30.size);
   goto lkey;
  case 'k':
   FUNC_4(VAR_27);
   if (VAR_21 == VAR_4) {
    static recno_t VAR_43;
    VAR_43 = FUNC_1(VAR_38 + 1);
    VAR_30.data = &VAR_43;
    VAR_30.size = sizeof(VAR_43);
   } else {
    VAR_30.data = FUNC_38(VAR_38 + 1, VAR_32 - 1);
    VAR_30.size = VAR_32 - 1;
   }
lkey: switch (VAR_26) {
   case 132:
    FUNC_16(VAR_28, &VAR_30, &VAR_31);
    VAR_27 = VAR_1;
    break;
   case 131:
    FUNC_15(VAR_28, &VAR_30);
    if (VAR_21 != VAR_4)
     FUNC_13(VAR_30.data);
    VAR_27 = VAR_0;
    break;
   case 130:
    VAR_27 = VAR_1;
    break;
   case 129:
    FUNC_22(VAR_28, &VAR_30);
    if ((VAR_21 != VAR_4) && (VAR_16 != VAR_10))
     FUNC_13(VAR_30.data);
    VAR_27 = VAR_0;
    break;
   case 128:
    FUNC_24(VAR_28, &VAR_30);
    if ((VAR_21 != VAR_4) && (VAR_16 != VAR_10))
     FUNC_13(VAR_30.data);
    VAR_27 = VAR_0;
    break;
   default:
    FUNC_11(1, "line %zu: command doesn't take a key",
        VAR_18);
   }
   break;
  case 'o':
   FUNC_9(VAR_28, VAR_38[1] == 'r', 0);
   break;
  default:
   FUNC_11(1, "line %zu: %s: unknown command character",
       VAR_18, VAR_38);
  }
 }
 if ((*VAR_28->close)(VAR_28))
  FUNC_10(1, "db->close failed");
 (void)FUNC_5(VAR_19);
 return 0;
}
