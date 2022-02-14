
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int u_int8_t ;
typedef int u_int16_t ;
typedef scalar_t__ u_int ;
struct sockaddr_nl {scalar_t__ nl_family; scalar_t__ nl_pid; } ;
struct sockaddr {int dummy; } ;
struct nlmsghdr {int nlmsg_len; scalar_t__ nlmsg_type; int nlmsg_flags; unsigned int nlmsg_seq; scalar_t__ nlmsg_pid; } ;
struct nlmsgerr {int dummy; } ;
struct nfgenmsg {int res_id; int version; int nfgen_family; } ;
struct nfattr {int nfa_len; int nfa_type; } ;
struct my_nfattr {int nfa_len; int data; int nfa_type; } ;
typedef int socklen_t ;
typedef int snl ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ pcap_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nfattr*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct nlmsghdr*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int) ;
 struct nlmsghdr* FUNC_6 (struct nlmsghdr*,int) ;
 scalar_t__ FUNC_7 (struct nlmsghdr*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct sockaddr_nl*,int ,int) ;
 int FUNC_12 (int ,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_13 (int ,struct nlmsghdr*,int,int ,struct sockaddr*,int) ;
 unsigned int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(const pcap_t *VAR_11, uint16_t VAR_12, int VAR_13, u_int8_t VAR_14, u_int16_t VAR_15, const struct my_nfattr *VAR_16)
{
 char VAR_17[1024] __attribute__ ((aligned));

 struct nlmsghdr *VAR_18 = (struct nlmsghdr *) VAR_17;
 struct nfgenmsg *VAR_19 = (struct nfgenmsg *) (VAR_17 + sizeof(struct nlmsghdr));

 struct sockaddr_nl VAR_20;
 static unsigned int VAR_21;

 if (!VAR_21)
  VAR_21 = FUNC_14(((void*)0));
 ++VAR_21;

 VAR_18->nlmsg_len = FUNC_5(sizeof(struct nfgenmsg));
 VAR_18->nlmsg_type = VAR_12;
 VAR_18->nlmsg_flags = VAR_9 | (VAR_13 ? VAR_7 : 0);
 VAR_18->nlmsg_pid = 0;
 VAR_18->nlmsg_seq = VAR_21;

 VAR_19->nfgen_family = VAR_14;
 VAR_19->version = VAR_4;
 VAR_19->res_id = FUNC_9(VAR_15);

 if (VAR_16) {
  struct nfattr *VAR_22 = (struct nfattr *) (VAR_17 + FUNC_3(VAR_18->nlmsg_len));

  VAR_22->nfa_type = VAR_16->nfa_type;
  VAR_22->nfa_len = FUNC_2(VAR_16->nfa_len);
  FUNC_10(FUNC_1(VAR_22), VAR_16->data, VAR_16->nfa_len);
  VAR_18->nlmsg_len = FUNC_3(VAR_18->nlmsg_len) + FUNC_0(VAR_22->nfa_len);
 }

 FUNC_11(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.nl_family = VAR_0;

 if (FUNC_13(VAR_11->fd, VAR_18, VAR_18->nlmsg_len, 0, (struct sockaddr *) &VAR_20, sizeof(VAR_20)) == -1)
  return -1;

 if (!VAR_13)
  return 0;


 do {
  socklen_t VAR_23 = sizeof(VAR_20);
  int VAR_24;


  do {
   VAR_24 = FUNC_12(VAR_11->fd, VAR_17, sizeof(VAR_17), 0, (struct sockaddr *) &VAR_20, &VAR_23);
  } while ((VAR_24 == -1) && (VAR_10 == VAR_2));

  if (VAR_24 <= 0)
   return VAR_24;

  if (VAR_23 != sizeof(VAR_20) || VAR_20.nl_family != VAR_0) {
   VAR_10 = VAR_3;
   return -1;
  }

  VAR_18 = (struct nlmsghdr *) VAR_17;
  if (VAR_20.nl_pid != 0 || VAR_21 != VAR_18->nlmsg_seq)
   continue;

  while ((u_int)VAR_24 >= FUNC_8(0) && FUNC_7(VAR_18, (u_int)VAR_24)) {
   if (VAR_18->nlmsg_type == VAR_6 || (VAR_18->nlmsg_type == VAR_5 && VAR_18->nlmsg_flags & VAR_8)) {
    if (VAR_18->nlmsg_len < FUNC_3(sizeof(struct nlmsgerr))) {
     VAR_10 = VAR_1;
     return -1;
    }
    VAR_10 = -(*((int *)FUNC_4(VAR_18)));
    return (VAR_10 == 0) ? 0 : -1;
   }
   VAR_18 = FUNC_6(VAR_18, VAR_24);
  }
 } while (1);

 return -1;
}
