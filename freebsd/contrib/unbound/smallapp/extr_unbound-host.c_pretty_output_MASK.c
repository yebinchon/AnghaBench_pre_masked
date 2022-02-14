
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_result {int rcode; char const* why_bogus; char* canonname; char* qname; scalar_t__ bogus; scalar_t__* len; scalar_t__* data; scalar_t__ answer_len; int answer_packet; int havedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*,char*,char*,int,char const*,scalar_t__,size_t) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (struct ub_result*) ;
 char* FUNC_9 (int ,size_t) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_12(char* VAR_7, int VAR_8, int VAR_9, struct ub_result* VAR_10, int VAR_11)
{
 int VAR_12;
 const char *VAR_13 = FUNC_8(VAR_10);
 char VAR_14[16];
 char VAR_15[16];
 char VAR_16[16];
 FUNC_6(VAR_14, 16, VAR_8);
 FUNC_3(VAR_15, 16, VAR_9);
 FUNC_4(VAR_16, 16, VAR_10->rcode);

 if(!VAR_10->havedata && VAR_10->rcode) {
  FUNC_7("Host %s not found: %d(%s).",
   VAR_7, VAR_10->rcode, VAR_16);
  if(VAR_6 > 0)
   FUNC_7(" %s", VAR_13);
  FUNC_7("\n");
  if(VAR_10->bogus && VAR_10->why_bogus)
   FUNC_7("%s\n", VAR_10->why_bogus);
  return;
 }
 if(VAR_11 && VAR_10->canonname &&
  VAR_10->canonname != VAR_10->qname) {
  FUNC_7("%s is an alias for %s", VAR_10->qname,
   VAR_10->canonname);
  if(VAR_6 > 0)
   FUNC_7(" %s", VAR_13);
  FUNC_7("\n");
 }

 if(VAR_10->canonname && FUNC_11(VAR_10->canonname) > 1 &&
  VAR_10->canonname[FUNC_11(VAR_10->canonname)-1] == '.')
  VAR_10->canonname[FUNC_11(VAR_10->canonname)-1] = 0;
 if(!VAR_10->havedata) {
  if(VAR_6 > 0) {
   FUNC_7("%s", VAR_10->canonname?VAR_10->canonname:VAR_7);
   if(FUNC_10(VAR_15, "IN") != 0)
    FUNC_7(" in class %s", VAR_15);
   if(VAR_8 == VAR_0)
    FUNC_7(" has no address");
   else if(VAR_8 == VAR_1)
    FUNC_7(" has no IPv6 address");
   else if(VAR_8 == VAR_4)
    FUNC_7(" has no domain name ptr");
   else if(VAR_8 == VAR_3)
    FUNC_7(" has no mail handler record");
   else if(VAR_8 == VAR_2) {
    char* VAR_17 = FUNC_9(
     VAR_10->answer_packet,
     (size_t)VAR_10->answer_len);
    if(!VAR_17) {
     FUNC_1(VAR_5, "alloc failure\n");
     FUNC_0(1);
    }
    FUNC_7("%s\n", VAR_17);
    FUNC_2(VAR_17);
   } else FUNC_7(" has no %s record", VAR_14);
   FUNC_7(" %s\n", VAR_13);
  }

  if(VAR_10->bogus && VAR_10->why_bogus)
   FUNC_7("%s\n", VAR_10->why_bogus);
  return;
 }
 VAR_12=0;
 while(VAR_10->data[VAR_12])
 {
  FUNC_5(
   VAR_10->canonname?VAR_10->canonname:VAR_7,
   VAR_15, VAR_14, VAR_8, VAR_13, VAR_10->data[VAR_12],
   (size_t)VAR_10->len[VAR_12]);
  VAR_12++;
 }
 if(VAR_10->bogus && VAR_10->why_bogus)
  FUNC_7("%s\n", VAR_10->why_bogus);
}
