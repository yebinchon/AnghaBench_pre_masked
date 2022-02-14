
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sysctl ;
typedef int pcap_t ;
typedef int parent ;
typedef int newdev ;
struct TYPE_3__ {int ndo_snaplen; int ndo_tstamp_precision; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,...) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (char const*,int ,int,int,char*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 char* FUNC_17 (int) ;
 int VAR_13 ;
 int FUNC_18 (int *,char const*) ;
 int FUNC_19 (char*,int,char*,...) ;
 int FUNC_20 (char*,char const*,int) ;
 int FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (char const*,char*,int) ;
 int * FUNC_23 (char*,char*) ;
 int VAR_14 ;
 int FUNC_24 (char*,char*,size_t*,int *,int ) ;
 char* FUNC_25 (int ) ;
 int FUNC_26 (char*,char const*,...) ;

__attribute__((used)) static pcap_t *
FUNC_27(const char *VAR_15, netdissect_options *VAR_16, char *VAR_17)
{
 pcap_t *VAR_18;
 *VAR_17 = '\0';
 VAR_18 = FUNC_7(VAR_15, VAR_16->ndo_snaplen, !VAR_13, 1000, VAR_17);
 if (VAR_18 == ((void*)0)) {






  if (FUNC_23(VAR_17, "No such device") != ((void*)0))
   return (((void*)0));
  FUNC_1("%s", VAR_17);
 }
 if (*VAR_17)
  FUNC_26("%s", VAR_17);


 return (VAR_18);
}
