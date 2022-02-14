
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct __res_state_ext {char* nsuffix; char* nsuffix2; scalar_t__ reload_period; } ;
typedef TYPE_3__* res_state ;
struct TYPE_5__ {struct __res_state_ext* ext; } ;
struct TYPE_6__ {TYPE_1__ _ext; } ;
struct TYPE_7__ {int options; int ndots; int retrans; int retry; TYPE_2__ _u; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
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
 void* FUNC_1 (char const*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_6(res_state VAR_14, const char *VAR_15, const char *VAR_16)
{
 const char *VAR_17 = VAR_15;
 int VAR_18;
 struct __res_state_ext *VAR_19 = VAR_14->_u._ext.ext;






 while (*VAR_17) {

  while (*VAR_17 == ' ' || *VAR_17 == '\t')
   VAR_17++;

  if (!FUNC_4(VAR_17, "ndots:", sizeof("ndots:") - 1)) {
   VAR_18 = FUNC_1(VAR_17 + sizeof("ndots:") - 1);
   if (VAR_18 <= VAR_3)
    VAR_14->ndots = VAR_18;
   else
    VAR_14->ndots = VAR_3;




  } else if (!FUNC_4(VAR_17, "timeout:", sizeof("timeout:") - 1)) {
   VAR_18 = FUNC_1(VAR_17 + sizeof("timeout:") - 1);
   if (VAR_18 <= VAR_4)
    VAR_14->retrans = VAR_18;
   else
    VAR_14->retrans = VAR_4;
  } else if (!FUNC_4(VAR_17, "attempts:", sizeof("attempts:") - 1)){
   VAR_18 = FUNC_1(VAR_17 + sizeof("attempts:") - 1);
   if (VAR_18 <= VAR_5)
    VAR_14->retry = VAR_18;
   else
    VAR_14->retry = VAR_5;




  } else if (!FUNC_4(VAR_17, "debug", sizeof("debug") - 1)) {
  } else if (!FUNC_4(VAR_17, "no_tld_query",
        sizeof("no_tld_query") - 1) ||
      !FUNC_4(VAR_17, "no-tld-query",
        sizeof("no-tld-query") - 1)) {
   VAR_14->options |= VAR_7;
  } else if (!FUNC_4(VAR_17, "inet6", sizeof("inet6") - 1)) {
   VAR_14->options |= VAR_13;
  } else if (!FUNC_4(VAR_17, "insecure1", sizeof("insecure1") - 1)) {
         VAR_14->options |= VAR_1;
  } else if (!FUNC_4(VAR_17, "insecure2", sizeof("insecure2") - 1)) {
         VAR_14->options |= VAR_2;
  } else if (!FUNC_4(VAR_17, "rotate", sizeof("rotate") - 1)) {
   VAR_14->options |= VAR_9;
  } else if (!FUNC_4(VAR_17, "usevc", sizeof("usevc") - 1)) {
   VAR_14->options |= VAR_10;
  } else if (!FUNC_4(VAR_17, "no-check-names",
        sizeof("no-check-names") - 1)) {
   VAR_14->options |= VAR_6;
  } else if (!FUNC_4(VAR_17, "reload-period:",
        sizeof("reload-period:") - 1)) {
   if (VAR_19 != ((void*)0)) {
    VAR_19->reload_period = (u_short)
        FUNC_1(VAR_17 + sizeof("reload-period:") - 1);
   }
  }






  else if (!FUNC_4(VAR_17, "dname", sizeof("dname") - 1)) {
   VAR_14->options |= VAR_11;
  }
  else if (!FUNC_4(VAR_17, "nibble:", sizeof("nibble:") - 1)) {
   if (VAR_19 == ((void*)0))
    goto skip;
   VAR_17 += sizeof("nibble:") - 1;
   VAR_18 = FUNC_0(FUNC_3(VAR_17, " \t"), sizeof(VAR_19->nsuffix) - 1);
   FUNC_5(VAR_19->nsuffix, VAR_17, VAR_18);
   VAR_19->nsuffix[VAR_18] = '\0';
  }
  else if (!FUNC_4(VAR_17, "nibble2:", sizeof("nibble2:") - 1)) {
   if (VAR_19 == ((void*)0))
    goto skip;
   VAR_17 += sizeof("nibble2:") - 1;
   VAR_18 = FUNC_0(FUNC_3(VAR_17, " \t"), sizeof(VAR_19->nsuffix2) - 1);
   FUNC_5(VAR_19->nsuffix2, VAR_17, VAR_18);
   VAR_19->nsuffix2[VAR_18] = '\0';
  }
  else if (!FUNC_4(VAR_17, "v6revmode:", sizeof("v6revmode:") - 1)) {
   VAR_17 += sizeof("v6revmode:") - 1;

   if (!FUNC_4(VAR_17, "single", sizeof("single") - 1)) {
    VAR_14->options |= VAR_8;
   } else if (!FUNC_4(VAR_17, "both", sizeof("both") - 1)) {
    VAR_14->options &=
      ~VAR_8;
   }
  }

  else {

  }

   skip:


  while (*VAR_17 && *VAR_17 != ' ' && *VAR_17 != '\t')
   VAR_17++;
 }
}
