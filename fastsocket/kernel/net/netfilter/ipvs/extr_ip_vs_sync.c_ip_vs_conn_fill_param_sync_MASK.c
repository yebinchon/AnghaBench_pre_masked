
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct TYPE_5__ {int vport; int vaddr; int cport; int caddr; int protocol; } ;
struct TYPE_4__ {int vport; int vaddr; int cport; int caddr; int protocol; } ;
union ip_vs_sync_conn {TYPE_2__ v4; TYPE_1__ v6; } ;
struct ip_vs_conn_param {char* pe_data; unsigned int pe_data_len; TYPE_3__* pe; } ;
typedef int __u8 ;
struct TYPE_6__ {scalar_t__ module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (char*) ;
 int FUNC_3 (int,int ,union nf_inet_addr const*,int ,union nf_inet_addr const*,int ,struct ip_vs_conn_param*) ;
 char* FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (char*,int *,unsigned int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_7(int VAR_4, union ip_vs_sync_conn *VAR_5,
      struct ip_vs_conn_param *VAR_6,
      __u8 *VAR_7, unsigned int VAR_8,
      __u8 *VAR_9, unsigned int VAR_10)
{
  FUNC_3(VAR_4, VAR_5->v4.protocol,
          (const union nf_inet_addr *)&VAR_5->v4.caddr,
          VAR_5->v4.cport,
          (const union nf_inet_addr *)&VAR_5->v4.vaddr,
          VAR_5->v4.vport, VAR_6);

 if (VAR_8) {
  if (VAR_10) {
   char VAR_11[VAR_3+1];

   FUNC_5(VAR_11, VAR_9, VAR_10);
   VAR_11[VAR_10]=0;
   VAR_6->pe = FUNC_2(VAR_11);
   if (!VAR_6->pe) {
    FUNC_0(3, "BACKUP, no %s engine found/loaded\n", VAR_11);
    return 1;
   }
  } else {
   FUNC_1("BACKUP, Invalid PE parameters\n");
   return 1;
  }

  VAR_6->pe_data = FUNC_4(VAR_8, VAR_2);
  if (!VAR_6->pe_data) {
   if (VAR_6->pe->module)
    FUNC_6(VAR_6->pe->module);
   return -VAR_1;
  }
  FUNC_5(VAR_6->pe_data, VAR_7, VAR_8);
  VAR_6->pe_data_len = VAR_8;
 }
 return 0;
}
