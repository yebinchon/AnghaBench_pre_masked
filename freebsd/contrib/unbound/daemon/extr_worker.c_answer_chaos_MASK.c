
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {struct config_file* cfg; } ;
struct worker {TYPE_1__ env; } ;
struct query_info {scalar_t__ qtype; int qname; } ;
struct edns_data {int dummy; } ;
struct config_file {scalar_t__* identity; scalar_t__* version; scalar_t__ hide_trustanchor; scalar_t__ hide_version; scalar_t__ hide_identity; } ;
struct comm_reply {int dummy; } ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int *,char*,struct edns_data*,struct worker*,struct comm_reply*) ;
 int FUNC_1 (int *,struct edns_data*,struct worker*,struct comm_reply*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct worker* VAR_5, struct query_info* VAR_6,
 struct edns_data* VAR_7, struct comm_reply* VAR_8, sldns_buffer* VAR_9)
{
 struct config_file* VAR_10 = VAR_5->env.cfg;
 if(VAR_6->qtype != VAR_0 && VAR_6->qtype != VAR_1)
  return 0;
 if(FUNC_4(VAR_6->qname,
  (uint8_t*)"\002id\006server") == 0 ||
  FUNC_4(VAR_6->qname,
  (uint8_t*)"\010hostname\004bind") == 0)
 {
  if(VAR_10->hide_identity)
   return 0;
  if(VAR_10->identity==((void*)0) || VAR_10->identity[0]==0) {
   char VAR_11[VAR_2+1];
   if (FUNC_2(VAR_11, VAR_2) == 0) {
    VAR_11[VAR_2] = 0;
    FUNC_0(VAR_9, VAR_11, VAR_7, VAR_5, VAR_8);
   } else {
    FUNC_3("gethostname: %s", FUNC_5(VAR_4));
    FUNC_0(VAR_9, "no hostname", VAR_7, VAR_5, VAR_8);
   }
  }
  else FUNC_0(VAR_9, VAR_10->identity, VAR_7, VAR_5, VAR_8);
  return 1;
 }
 if(FUNC_4(VAR_6->qname,
  (uint8_t*)"\007version\006server") == 0 ||
  FUNC_4(VAR_6->qname,
  (uint8_t*)"\007version\004bind") == 0)
 {
  if(VAR_10->hide_version)
   return 0;
  if(VAR_10->version==((void*)0) || VAR_10->version[0]==0)
   FUNC_0(VAR_9, VAR_3, VAR_7, VAR_5, VAR_8);
  else FUNC_0(VAR_9, VAR_10->version, VAR_7, VAR_5, VAR_8);
  return 1;
 }
 if(FUNC_4(VAR_6->qname,
  (uint8_t*)"\013trustanchor\007unbound") == 0)
 {
  if(VAR_10->hide_trustanchor)
   return 0;
  FUNC_1(VAR_9, VAR_7, VAR_5, VAR_8);
  return 1;
 }

 return 0;
}
