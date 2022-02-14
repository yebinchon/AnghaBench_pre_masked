
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int trad ;
struct in6_addr {int dummy; } ;
struct hostent {int h_name; } ;
struct buf_pr {int dummy; } ;
struct TYPE_5__ {scalar_t__ opcode; } ;
struct TYPE_6__ {TYPE_1__ o; struct in6_addr addr6; } ;
typedef TYPE_2__ ipfw_insn_ip6 ;
typedef int ipfw_insn ;
struct TYPE_7__ {scalar_t__ do_resolv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct buf_pr*,char*,...) ;
 TYPE_4__ VAR_6 ;
 int FUNC_2 (int *,int) ;
 struct hostent* FUNC_3 (char*,int,int ) ;
 int * FUNC_4 (int ,struct in6_addr*,char*,int) ;

void
FUNC_5(struct buf_pr *VAR_7, ipfw_insn_ip6 *VAR_8)
{
 char VAR_9[255];
 struct hostent *VAR_10 = ((void*)0);
 struct in6_addr *VAR_11 = &(VAR_8->addr6);
 int VAR_12, VAR_13;

 VAR_12 = FUNC_0((ipfw_insn *) VAR_8) - 1;
 if (VAR_8->o.opcode == VAR_5 || VAR_8->o.opcode == VAR_3) {
  FUNC_1(VAR_7, " me6");
  return;
 }
 if (VAR_8->o.opcode == VAR_1) {
  FUNC_1(VAR_7, " ip6");
  return;
 }






 FUNC_1(VAR_7, " ");
 for (VAR_12 = VAR_12 / 4; VAR_12 > 0; VAR_12 -= 2, VAR_11 += 2) {

  VAR_13 = (VAR_8->o.opcode == VAR_4 ||
      VAR_8->o.opcode == VAR_2) ? 128:
      FUNC_2((uint8_t *)&(VAR_11[1]), 128);

  if (VAR_13 == 128 && VAR_6.do_resolv)
   VAR_10 = FUNC_3((char *)VAR_11, sizeof(*VAR_11), VAR_0);

  if (VAR_10 != ((void*)0))
   FUNC_1(VAR_7, "%s", VAR_10->h_name);
  else if (VAR_13 == 0)
   FUNC_1(VAR_7, "any");
  else {
   if (FUNC_4(VAR_0, VAR_11, VAR_9,
       sizeof(VAR_9)) == ((void*)0))
    FUNC_1(VAR_7, "Error ntop in print_ip6\n");
   FUNC_1(VAR_7, "%s", VAR_9 );
   if (VAR_13 < 0)
    FUNC_1(VAR_7, "/%s", FUNC_4(VAR_0, &VAR_11[1],
        VAR_9, sizeof(VAR_9)));
   else if (VAR_13 < 128)
    FUNC_1(VAR_7, "/%d", VAR_13);
  }
  if (VAR_12 > 2)
   FUNC_1(VAR_7, ",");
 }
}
