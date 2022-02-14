
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u_int ;
struct recvbuf {int dummy; } ;
struct pollfd {int dummy; } ;
struct TYPE_10__ {size_t ni_namelist_len; char** ni_namelist_val; } ;
typedef TYPE_1__ ni_namelist ;
struct TYPE_11__ {int l_uf; int l_ui; } ;
typedef TYPE_2__ l_fp ;
typedef void* fd_set ;
struct TYPE_12__ {int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 () ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_4 () ;
 int VAR_23 ;
 int FUNC_5 (char*) ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (char*,TYPE_2__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_14 (int) ;
 int VAR_30 ;
 void* VAR_31 ;
 int FUNC_15 (int ,char*,char*,...) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (struct recvbuf*) ;
 int FUNC_18 () ;
 struct recvbuf* FUNC_19 () ;
 TYPE_1__* FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 scalar_t__ VAR_32 ;
 int FUNC_25 () ;
 int VAR_33 ;
 char* VAR_34 ;
 char* VAR_35 ;
 int FUNC_26 (int,int ) ;
 int VAR_36 ;
 int FUNC_27 (int ,char*,...) ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int,char**,char*) ;
 char* VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_31 (char*,int,...) ;
 int FUNC_32 (void*,unsigned int,int) ;
 char* VAR_42 ;
 int FUNC_33 (struct recvbuf*) ;
 int FUNC_34 (int ,void**,int *,int *,TYPE_3__*) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int ,int ,int ) ;
 int FUNC_38 (int ,char*,int ,int) ;
 int VAR_43 ;
 int FUNC_39 () ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 void* VAR_52 ;
 int VAR_53 ;
 int FUNC_40 () ;
 int FUNC_41 (int ,int ) ;
 TYPE_3__ VAR_54 ;
 int FUNC_42 () ;
 int FUNC_43 (int ) ;
 int VAR_55 ;
 int VAR_56 ;

int
FUNC_44 (
 int VAR_57,
 char *VAR_58[]
 )
{
 int VAR_59;
 int VAR_60;
 struct recvbuf *VAR_61;
 l_fp VAR_62;
 int VAR_63;
 int VAR_64;
 int VAR_65;
 FUNC_24();


 if (!VAR_33)
  VAR_24 = VAR_0;

 VAR_63 = 0;
 VAR_42 = VAR_58[0];
 VAR_53 = 0;




 while ((VAR_64 = FUNC_30(VAR_57, VAR_58, "46a:bBde:k:o:p:qst:uv")) != VAR_5)
  switch (VAR_64)
  {
  case '4':
   VAR_24 = VAR_0;
   break;
  case '6':
   VAR_24 = VAR_1;
   break;
  case 'a':
   VAR_64 = FUNC_6(VAR_39);
   VAR_47 = 1;
   VAR_48 = VAR_64;
   break;
  case 'b':
   VAR_26++;
   VAR_38 = 0;
   break;
  case 'B':
   VAR_38++;
   VAR_26 = 0;
   break;
  case 'd':
   ++VAR_28;
   break;
  case 'e':
   if (!FUNC_7(VAR_39, &VAR_62)
   || VAR_62.l_ui != 0) {
    (void) FUNC_15(VAR_44,
        "%s: encryption delay %s is unlikely\n",
        VAR_42, VAR_39);
    VAR_63++;
   } else {
    VAR_46 = VAR_62.l_uf;
   }
   break;
  case 'k':
   VAR_34 = VAR_39;
   break;
  case 'o':
   VAR_52 = FUNC_6(VAR_39);
   break;
  case 'p':
   VAR_64 = FUNC_6(VAR_39);
   if (VAR_64 <= 0 || VAR_64 > VAR_17) {
    (void) FUNC_15(VAR_44,
        "%s: number of samples (%d) is invalid\n",
        VAR_42, VAR_64);
    VAR_63++;
   } else {
    VAR_50 = VAR_64;
   }
   break;
  case 'q':
   VAR_43 = 1;
   break;
  case 's':
   VAR_53 = 1;
   break;
  case 't':
   if (!FUNC_7(VAR_39, &VAR_62)) {
    (void) FUNC_15(VAR_44,
        "%s: timeout %s is undecodeable\n",
        VAR_42, VAR_39);
    VAR_63++;
   } else {
    VAR_51 = ((FUNC_1(&VAR_62) * VAR_20)
        + 0x8000) >> 16;
    VAR_51 = FUNC_26(VAR_51, VAR_15);
   }
   break;
  case 'v':
   VAR_56 = 1;
   break;
  case 'u':
   VAR_55 = 1;
   break;
  case '?':
   ++VAR_63;
   break;
  default:
   break;
     }

 if (VAR_63) {
  (void) FUNC_15(VAR_44,
      "usage: %s [-46bBdqsuv] [-a key#] [-e delay] [-k file] [-p samples] [-o version#] [-t timeo] server ...\n",
      VAR_42);
  FUNC_14(2);
 }






 if (VAR_50 == 0)
   VAR_50 = (VAR_43 ? 1 : VAR_3);

 if (VAR_28 || VAR_43) {




  FUNC_35(VAR_45);

 }




 if (VAR_53) {


  FUNC_31("ntpdate", VAR_13);
 }

 if (VAR_28 || VAR_56)
  FUNC_27(VAR_11, "%s", VAR_21);
 for ( ; VAR_40 < VAR_57; VAR_40++)
  FUNC_5(VAR_58[VAR_40]);
 if (VAR_49 == 0) {
  FUNC_27(VAR_8, "no servers can be used, exiting");
  FUNC_14(1);
 }




 if (VAR_47) {
  FUNC_22();
  if (!FUNC_9(VAR_34)) {
   FUNC_27(VAR_8, "no key file <%s>, exiting", VAR_34);
   FUNC_14(1);
  }
  FUNC_10(VAR_48, 1);
  if (!FUNC_8(VAR_48)) {
   FUNC_27(VAR_8, "authentication key %lu unknown",
    (unsigned long) VAR_48);
   FUNC_14(1);
  }
 }
 FUNC_23();
 FUNC_21();
 VAR_32 = 0;
 VAR_59 = 0;

 while (VAR_27 < VAR_49) {




  fd_set VAR_66;
  VAR_66 = VAR_31;


  if (VAR_25) {
   VAR_59 = 1;
   VAR_25 = 0;
  }
  VAR_60 = FUNC_18();

  if (!VAR_59 && VAR_60 == 0) {







   VAR_65 = FUNC_34(VAR_36, &VAR_66, ((void*)0), ((void*)0),
     &VAR_54);

   if (VAR_65 > 0)
    FUNC_25();
   else if (VAR_65 == VAR_19)
   {

    if (VAR_29 != VAR_4)



     FUNC_27(VAR_8,



      "select() error: %m"

      );
   } else if (VAR_29 != 0) {

    FUNC_27(VAR_7,



     "select(): nfound = %d, error: %m",

     VAR_65);

   }
   if (VAR_25) {
    VAR_59 = 1;
    VAR_25 = 0;
   }
   VAR_60 = FUNC_18();
  }





  VAR_61 = FUNC_19();
  while (VAR_61 != ((void*)0))
  {
   FUNC_33(VAR_61);
   FUNC_17(VAR_61);
   VAR_61 = FUNC_19();
  }




  if (VAR_59) {
   FUNC_42();
   VAR_59 = 0;
  }




 }
 return FUNC_12();
}
