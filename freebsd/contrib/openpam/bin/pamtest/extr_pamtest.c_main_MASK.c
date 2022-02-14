
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hostname ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int) ;
 char* FUNC_4 () ;
 int FUNC_5 (int,char**,char*) ;
 int VAR_16 ;
 int FUNC_6 (int ,int ) ;
 int VAR_17 ;
 int FUNC_7 (int,long*,int ) ;
 int FUNC_8 (int,char const**,int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char const*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char const*,char const*) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_19 (char*,char*) ;
 char* FUNC_20 (int ) ;
 int FUNC_21 () ;
 int VAR_22 ;
 int FUNC_22 (char*,...) ;

int
FUNC_23(int VAR_23, char *VAR_24[])
{
 char VAR_25[1024];
 const char *VAR_26 = ((void*)0);
 const char *VAR_27 = ((void*)0);
 const char *VAR_28 = ((void*)0);
 const char *VAR_29 = ((void*)0);
 const char *VAR_30 = ((void*)0);
 const char *VAR_31 = ((void*)0);
 long VAR_32 = 0;
 int VAR_33 = 0;
 int VAR_34;
 int VAR_35;

 while ((VAR_35 = FUNC_5(VAR_23, VAR_24, "dH:h:kMPsT:t:U:u:v")) != -1)
  switch (VAR_35) {
  case 'd':
   VAR_16++;
   break;
  case 'H':
   FUNC_8(VAR_35, &VAR_26, VAR_18);
   break;
  case 'h':
   FUNC_8(VAR_35, &VAR_27, VAR_18);
   break;
  case 'k':
   VAR_33 = 1;
   break;
  case 'M':
   FUNC_6(VAR_1, 0);
   FUNC_6(VAR_3, 0);
   break;
  case 'P':
   FUNC_6(VAR_2, 0);
   FUNC_6(VAR_4, 0);
   break;
  case 's':
   VAR_20 = VAR_11;
   break;
  case 'T':
   FUNC_7(VAR_35, &VAR_32, VAR_18);
   if (VAR_32 < 0 || VAR_32 > VAR_0) {
    FUNC_2(VAR_21,
        "Invalid conversation timeout\n");
    FUNC_21();
   }
   VAR_17 = (int)VAR_32;
   break;
  case 't':
   FUNC_8(VAR_35, &VAR_31, VAR_18);
   break;
  case 'U':
   FUNC_8(VAR_35, &VAR_28, VAR_18);
   break;
  case 'u':
   FUNC_8(VAR_35, &VAR_29, VAR_18);
   break;
  case 'v':
   VAR_22++;
   break;
  default:
   FUNC_21();
  }

 VAR_23 -= VAR_19;
 VAR_24 += VAR_19;

 if (VAR_23 < 1)
  FUNC_21();

 VAR_30 = *VAR_24;
 --VAR_23;
 ++VAR_24;


 if (VAR_30 == ((void*)0))
  VAR_30 = "pamtest";
 if (VAR_26 == ((void*)0)) {
  if (FUNC_3(VAR_25, sizeof(VAR_25)) == -1)
   FUNC_0(1, "gethostname()");
  VAR_26 = VAR_25;
 }
 if (VAR_31 == ((void*)0))
  VAR_31 = FUNC_20(VAR_15);
 if (VAR_29 == ((void*)0))
  VAR_29 = FUNC_4();
 if (VAR_28 == ((void*)0))
  VAR_28 = VAR_29;


 if ((VAR_34 = FUNC_18(VAR_30, VAR_29)) != VAR_12)
  goto end;





 if (VAR_27 != ((void*)0))
  if ((VAR_34 = FUNC_16(VAR_8, VAR_27)) != VAR_12)
      goto end;





 if ((VAR_34 = FUNC_16(VAR_9, VAR_26)) != VAR_12 ||
     (VAR_34 = FUNC_16(VAR_10, VAR_28)) != VAR_12 ||
     (VAR_34 = FUNC_16(VAR_14, VAR_31)) != VAR_12)
  goto end;

 while (VAR_23 > 0) {
  if (FUNC_19(*VAR_24, "listenv") == 0 ||
      FUNC_19(*VAR_24, "env") == 0) {
   VAR_34 = FUNC_14();
  } else if (FUNC_19(*VAR_24, "authenticate") == 0 ||
      FUNC_19(*VAR_24, "auth") == 0) {
   VAR_34 = FUNC_10(0);
  } else if (FUNC_19(*VAR_24, "acct_mgmt") == 0 ||
      FUNC_19(*VAR_24, "account") == 0) {
   VAR_34 = FUNC_9(0);
  } else if (FUNC_19(*VAR_24, "chauthtok") == 0 ||
      FUNC_19(*VAR_24, "change") == 0) {
   VAR_34 = FUNC_11(VAR_5);
  } else if (FUNC_19(*VAR_24, "forcechauthtok") == 0 ||
      FUNC_19(*VAR_24, "forcechange") == 0) {
   VAR_34 = FUNC_11(0);
  } else if (FUNC_19(*VAR_24, "setcred") == 0 ||
      FUNC_19(*VAR_24, "establish_cred") == 0) {
   VAR_34 = FUNC_17(VAR_7);
  } else if (FUNC_19(*VAR_24, "open_session") == 0 ||
      FUNC_19(*VAR_24, "open") == 0) {
   VAR_34 = FUNC_15(0);
  } else if (FUNC_19(*VAR_24, "close_session") == 0 ||
      FUNC_19(*VAR_24, "close") == 0) {
   VAR_34 = FUNC_12(0);
  } else if (FUNC_19(*VAR_24, "unsetcred") == 0 ||
      FUNC_19(*VAR_24, "delete_cred") == 0) {
   VAR_34 = FUNC_17(VAR_6);
  } else {
   FUNC_22("unknown primitive: %s", *VAR_24);
   VAR_34 = VAR_13;
  }
  if (VAR_34 != VAR_12 && !VAR_33) {
   FUNC_22("test aborted");
   break;
  }
  --VAR_23;
  ++VAR_24;
 }

end:
 (void)FUNC_13(VAR_34);
 FUNC_1(VAR_34 == VAR_12 ? 0 : 1);
}
