
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_diag_hostcond {int port; int prefix_len; int addr; int family; } ;
struct inet_diag_entry {int sport; int dport; int userlocks; int family; int * daddr; int * saddr; } ;
struct inet_diag_bc_op {int code; int no; scalar_t__ yes; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const void *VAR_3, int VAR_4,
       const struct inet_diag_entry *VAR_5)
{
 while (VAR_4 > 0) {
  int VAR_6 = 1;
  const struct inet_diag_bc_op *VAR_7 = VAR_3;

  switch (VAR_7->code) {
  case 131:
   break;
  case 132:
   VAR_6 = 0;
   break;
  case 129:
   VAR_6 = VAR_5->sport >= VAR_7[1].no;
   break;
  case 128:
   VAR_6 = VAR_5->dport <= VAR_7[1].no;
   break;
  case 134:
   VAR_6 = VAR_5->dport >= VAR_7[1].no;
   break;
  case 133:
   VAR_6 = VAR_5->dport <= VAR_7[1].no;
   break;
  case 136:
   VAR_6 = !(VAR_5->userlocks & VAR_2);
   break;
  case 130:
  case 135: {
   struct inet_diag_hostcond *VAR_8;
   __be32 *VAR_9;

   VAR_8 = (struct inet_diag_hostcond *)(VAR_7 + 1);
   if (VAR_8->port != -1 &&
       VAR_8->port != (VAR_7->code == 130 ?
          VAR_5->sport : VAR_5->dport)) {
    VAR_6 = 0;
    break;
   }

   if (VAR_8->prefix_len == 0)
    break;

   if (VAR_7->code == 130)
    VAR_9 = VAR_5->saddr;
   else
    VAR_9 = VAR_5->daddr;

   if (FUNC_0(VAR_9, VAR_8->addr,
         VAR_8->prefix_len))
    break;
   if (VAR_5->family == VAR_1 &&
       VAR_8->family == VAR_0) {
    if (VAR_9[0] == 0 && VAR_9[1] == 0 &&
        VAR_9[2] == FUNC_1(0xffff) &&
        FUNC_0(VAR_9 + 3, VAR_8->addr,
          VAR_8->prefix_len))
     break;
   }
   VAR_6 = 0;
   break;
  }
  }

  if (VAR_6) {
   VAR_4 -= VAR_7->yes;
   VAR_3 += VAR_7->yes;
  } else {
   VAR_4 -= VAR_7->no;
   VAR_3 += VAR_7->no;
  }
 }
 return (VAR_4 == 0);
}
