
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ qtype; } ;
struct module_qstate {TYPE_1__ qinfo; scalar_t__ is_valrec; } ;
struct dns_msg {TYPE_2__* rep; } ;
typedef int rc ;
struct TYPE_4__ {scalar_t__ an_numrrsets; int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (scalar_t__,char*,...) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct module_qstate* VAR_5, int VAR_6,
 struct dns_msg* VAR_7)
{
 int VAR_8;
 if(VAR_5->is_valrec) {
  FUNC_2(VAR_3, "not validating response, is valrec"
   "(validation recursion lookup)");
  return 0;
 }

 if(VAR_6 != VAR_0 || !VAR_7)
  VAR_8 = VAR_6;
 else VAR_8 = (int)FUNC_0(VAR_7->rep->flags);

 if(VAR_8 != VAR_0 && VAR_8 != VAR_1) {
  if(VAR_4 >= VAR_3) {
   char VAR_9[16];
   VAR_9[0]=0;
   (void)FUNC_1(VAR_8, VAR_9, sizeof(VAR_9));
   FUNC_2(VAR_3, "cannot validate non-answer, rcode %s", VAR_9);
  }
  return 0;
 }


 if(VAR_5->qinfo.qtype == VAR_2 &&
  VAR_8 == VAR_0 && VAR_7 &&
  VAR_7->rep->an_numrrsets > 0) {
  FUNC_2(VAR_3, "cannot validate RRSIG, no sigs on sigs.");
  return 0;
 }
 return 1;
}
