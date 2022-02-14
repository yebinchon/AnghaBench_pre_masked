
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int lineno; int sin6_addr; void* sin6_port; int sin6_family; int sin_addr; void* sin_port; int sin_family; } ;
struct sockaddr_in {int lineno; int sin6_addr; void* sin6_port; int sin6_family; int sin_addr; void* sin_port; int sin_family; } ;
struct sldns_file_parse_state {int lineno; int sin6_addr; void* sin6_port; int sin6_family; int sin_addr; void* sin_port; int sin_family; } ;
struct iter_hints {int dummy; } ;
struct delegpt {int has_parent_side_NS; int name; } ;
typedef int socklen_t ;
typedef int sa ;
typedef int rr ;
typedef int pstate ;
typedef void* in_port_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct delegpt*,int ,int ) ;
 int FUNC_2 (struct delegpt*,int *,size_t,struct sockaddr_storage*,int,int ,int ) ;
 struct delegpt* FUNC_3 (int *) ;
 int FUNC_4 (struct delegpt*) ;
 int FUNC_5 (int ,struct delegpt*) ;
 int FUNC_6 (struct delegpt*,int *) ;
 int VAR_11 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (struct iter_hints*,int ,struct delegpt*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,char*,...) ;
 int FUNC_14 (int *,int ,scalar_t__) ;
 int FUNC_15 (struct sockaddr_in6*,int ,int) ;
 int FUNC_16 (int *,int *,size_t*,size_t*,struct sockaddr_in6*) ;
 int FUNC_17 (int) ;
 int FUNC_18 (scalar_t__,char*,int) ;
 int FUNC_19 (int *,size_t,size_t) ;
 int FUNC_20 (int *,size_t,size_t) ;
 scalar_t__ FUNC_21 (int *,size_t,size_t) ;
 scalar_t__ FUNC_22 (int *,size_t,size_t) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_25(struct iter_hints* VAR_12, char* VAR_13)
{
 struct sldns_file_parse_state VAR_14;
 struct delegpt* VAR_15;
 uint8_t VAR_16[VAR_4];
 size_t VAR_17, VAR_18;
 int VAR_19;
 uint16_t VAR_20 = VAR_5;
 FILE* VAR_21 = FUNC_9(VAR_13, "r");
 if(!VAR_21) {
  FUNC_12("could not read root hints %s: %s",
   VAR_13, FUNC_23(VAR_11));
  return 0;
 }
 VAR_15 = FUNC_3(((void*)0));
 if(!VAR_15) {
  FUNC_12("out of memory reading root hints");
  FUNC_7(VAR_21);
  return 0;
 }
 FUNC_24(VAR_10, "Reading root hints from %s", VAR_13);
 FUNC_15(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.lineno = 1;
 VAR_15->has_parent_side_NS = 1;
 while(!FUNC_8(VAR_21)) {
  VAR_17 = sizeof(VAR_16);
  VAR_18 = 0;
  VAR_19 = FUNC_16(VAR_21, VAR_16, &VAR_17, &VAR_18,
   &VAR_14);
  if(VAR_19 != 0) {
   FUNC_12("reading root hints %s %d:%d: %s", VAR_13,
    VAR_14.lineno, FUNC_0(VAR_19),
    FUNC_17(VAR_19));
   goto stop_read;
  }
  if(VAR_17 == 0)
   continue;
  if(FUNC_22(VAR_16, VAR_17, VAR_18)
   == VAR_8) {
   if(!FUNC_1(VAR_15, FUNC_20(VAR_16,
    VAR_17, VAR_18), 0)) {
    FUNC_12("out of memory reading root hints");
    goto stop_read;
   }
   VAR_20 = FUNC_19(VAR_16, VAR_17, VAR_18);
   if(!VAR_15->name) {
    if(!FUNC_6(VAR_15, VAR_16)) {
     FUNC_12("out of memory.");
     goto stop_read;
    }
   }
  } else if(FUNC_22(VAR_16, VAR_17, VAR_18)
   == VAR_6 && FUNC_21(VAR_16,
   VAR_17, VAR_18) == VAR_3) {
   struct sockaddr_in VAR_22;
   socklen_t VAR_23 = (socklen_t)sizeof(VAR_22);
   FUNC_15(&VAR_22, 0, VAR_23);
   VAR_22.sin_family = VAR_0;
   VAR_22.sin_port = (in_port_t)FUNC_11(VAR_9);
   FUNC_14(&VAR_22.sin_addr,
    FUNC_20(VAR_16, VAR_17, VAR_18),
    VAR_3);
   if(!FUNC_2(VAR_15, VAR_16, VAR_18,
     (struct sockaddr_storage*)&VAR_22, VAR_23,
     0, 0)) {
    FUNC_12("out of memory reading root hints");
    goto stop_read;
   }
  } else if(FUNC_22(VAR_16, VAR_17, VAR_18)
   == VAR_7 && FUNC_21(VAR_16,
   VAR_17, VAR_18) == VAR_2) {
   struct sockaddr_in6 VAR_24;
   socklen_t VAR_25 = (socklen_t)sizeof(VAR_24);
   FUNC_15(&VAR_24, 0, VAR_25);
   VAR_24.sin6_family = VAR_1;
   VAR_24.sin6_port = (in_port_t)FUNC_11(VAR_9);
   FUNC_14(&VAR_24.sin6_addr,
    FUNC_20(VAR_16, VAR_17, VAR_18),
    VAR_2);
   if(!FUNC_2(VAR_15, VAR_16, VAR_18,
     (struct sockaddr_storage*)&VAR_24, VAR_25,
     0, 0)) {
    FUNC_12("out of memory reading root hints");
    goto stop_read;
   }
  } else {
   char VAR_26[17];
   FUNC_18(FUNC_22(VAR_16,
    VAR_17, VAR_18), VAR_26, sizeof(VAR_26));
   FUNC_13("root hints %s:%d skipping type %s",
    VAR_13, VAR_14.lineno, VAR_26);
  }
 }
 FUNC_7(VAR_21);
 if(!VAR_15->name) {
  FUNC_13("root hints %s: no NS content", VAR_13);
  FUNC_4(VAR_15);
  return 1;
 }
 if(!FUNC_10(VAR_12, VAR_20, VAR_15, 0)) {
  return 0;
 }
 FUNC_5(VAR_10, VAR_15);
 return 1;

stop_read:
 FUNC_4(VAR_15);
 FUNC_7(VAR_21);
 return 0;
}
