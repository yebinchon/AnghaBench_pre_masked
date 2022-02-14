
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_sock {struct sock* sk_sk; } ;
struct sock {scalar_t__ sk_protocol; int sk_family; } ;
struct TYPE_4__ {int rcv_saddr; } ;
struct TYPE_3__ {int num; int rcv_saddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 TYPE_2__* FUNC_0 (struct sock const*) ;
 TYPE_1__* FUNC_1 (struct sock const*) ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_3(struct svc_sock *VAR_2, char *VAR_3, int VAR_4)
{
 const struct sock *VAR_5 = VAR_2->sk_sk;
 const char *VAR_6 = VAR_5->sk_protocol == VAR_1 ?
       "udp" : "tcp";
 int VAR_7;

 switch (VAR_5->sk_family) {
 case 129:
  VAR_7 = FUNC_2(VAR_3, VAR_4, "ipv4 %s %pI4 %d\n",
    VAR_6,
    &FUNC_1(VAR_5)->rcv_saddr,
    FUNC_1(VAR_5)->num);
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_3, VAR_4, "ipv6 %s %pI6 %d\n",
    VAR_6,
    &FUNC_0(VAR_5)->rcv_saddr,
    FUNC_1(VAR_5)->num);
  break;
 default:
  VAR_7 = FUNC_2(VAR_3, VAR_4, "*unknown-%d*\n",
    VAR_5->sk_family);
 }

 if (VAR_7 >= VAR_4) {
  *VAR_3 = '\0';
  return -VAR_0;
 }
 return VAR_7;
}
