
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int line ;
struct TYPE_2__ {char* smarthost; char* aliases; char* spooldir; char* authpath; char* certfile; char* mailname; char* masquerade_host; char* masquerade_user; int features; int port; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_11 ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int ,char*,char const*,...) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,int,int *) ;
 int * FUNC_7 (char const*,char*) ;
 scalar_t__* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;
 char* FUNC_12 (char**,int ) ;

void
FUNC_13(const char *VAR_13)
{
 char *VAR_14;
 char *VAR_15;
 FILE *VAR_16;
 char VAR_17[2048];
 int VAR_18 = 0;

 VAR_16 = FUNC_7(VAR_13, "r");
 if (VAR_16 == ((void*)0)) {

  if (VAR_12 == VAR_1)
   return;
  FUNC_2(VAR_4, "can not open config `%s'", VAR_13);

 }

 while (!FUNC_5(VAR_16)) {
  if (FUNC_6(VAR_17, sizeof(VAR_17), VAR_16) == ((void*)0))
   break;
  VAR_18++;

  FUNC_1(VAR_17);


  if (FUNC_8(VAR_17, '#'))
   *FUNC_8(VAR_17, '#') = 0;

  VAR_15 = VAR_17;
  VAR_14 = FUNC_12(&VAR_15, VAR_2);


  if (VAR_14 == ((void*)0) || *VAR_14 == 0)
   continue;

  if (VAR_15 != ((void*)0) && *VAR_15 != 0)
   VAR_15 = FUNC_10(VAR_15);
  else
   VAR_15 = ((void*)0);

  if (FUNC_9(VAR_14, "SMARTHOST") == 0 && VAR_15 != ((void*)0))
   VAR_11.smarthost = VAR_15;
  else if (FUNC_9(VAR_14, "PORT") == 0 && VAR_15 != ((void*)0))
   VAR_11.port = FUNC_0(VAR_15);
  else if (FUNC_9(VAR_14, "ALIASES") == 0 && VAR_15 != ((void*)0))
   VAR_11.aliases = VAR_15;
  else if (FUNC_9(VAR_14, "SPOOLDIR") == 0 && VAR_15 != ((void*)0))
   VAR_11.spooldir = VAR_15;
  else if (FUNC_9(VAR_14, "AUTHPATH") == 0 && VAR_15 != ((void*)0))
   VAR_11.authpath= VAR_15;
  else if (FUNC_9(VAR_14, "CERTFILE") == 0 && VAR_15 != ((void*)0))
   VAR_11.certfile = VAR_15;
  else if (FUNC_9(VAR_14, "MAILNAME") == 0 && VAR_15 != ((void*)0))
   VAR_11.mailname = VAR_15;
  else if (FUNC_9(VAR_14, "MASQUERADE") == 0 && VAR_15 != ((void*)0)) {
   char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
   if (FUNC_11(VAR_15, '@')) {
    VAR_20 = FUNC_11(VAR_15, '@');
    *VAR_20 = 0;
    VAR_20++;
    VAR_19 = VAR_15;
   } else {
    VAR_20 = VAR_15;
   }
   if (VAR_20 && *VAR_20 == 0)
    VAR_20 = ((void*)0);
                        if (VAR_19 && *VAR_19 == 0)
                                VAR_19 = ((void*)0);
   VAR_11.masquerade_host = VAR_20;
   VAR_11.masquerade_user = VAR_19;
  } else if (FUNC_9(VAR_14, "STARTTLS") == 0 && VAR_15 == ((void*)0))
   VAR_11.features |= VAR_9;
  else if (FUNC_9(VAR_14, "OPPORTUNISTIC_TLS") == 0 && VAR_15 == ((void*)0))
   VAR_11.features |= VAR_10;
  else if (FUNC_9(VAR_14, "SECURETRANSFER") == 0 && VAR_15 == ((void*)0))
   VAR_11.features |= VAR_8;
  else if (FUNC_9(VAR_14, "DEFER") == 0 && VAR_15 == ((void*)0))
   VAR_11.features |= VAR_0;
  else if (FUNC_9(VAR_14, "INSECURE") == 0 && VAR_15 == ((void*)0))
   VAR_11.features |= VAR_6;
  else if (FUNC_9(VAR_14, "FULLBOUNCE") == 0 && VAR_15 == ((void*)0))
   VAR_11.features |= VAR_5;
  else if (FUNC_9(VAR_14, "NULLCLIENT") == 0 && VAR_15 == ((void*)0))
   VAR_11.features |= VAR_7;
  else {
   FUNC_3(VAR_3, "syntax error in %s:%d", VAR_13, VAR_18);

  }
 }

 if ((VAR_11.features & VAR_7) && VAR_11.smarthost == ((void*)0)) {
  FUNC_3(VAR_3, "%s: NULLCLIENT requires SMARTHOST", VAR_13);

 }

 FUNC_4(VAR_16);
}
