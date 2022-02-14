
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int qthreshold; scalar_t__ copy_len; int group; } ;
struct TYPE_4__ {TYPE_1__ ulog; } ;
struct nf_loginfo {scalar_t__ type; TYPE_2__ u; } ;
struct net_device {int dummy; } ;
struct ebt_ulog_info {char* prefix; int qthreshold; scalar_t__ cprange; int nlgroup; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,struct sk_buff const*,struct net_device const*,struct net_device const*,struct ebt_ulog_info*,char const*) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_2(u_int8_t VAR_3, unsigned int VAR_4,
   const struct sk_buff *VAR_5, const struct net_device *VAR_6,
   const struct net_device *VAR_7, const struct nf_loginfo *VAR_8,
   const char *VAR_9)
{
 struct ebt_ulog_info VAR_10;

 if (!VAR_8 || VAR_8->type != VAR_2) {
  VAR_10.nlgroup = VAR_0;
  VAR_10.cprange = 0;
  VAR_10.qthreshold = VAR_1;
  VAR_10.prefix[0] = '\0';
 } else {
  VAR_10.nlgroup = VAR_8->u.ulog.group;
  VAR_10.cprange = VAR_8->u.ulog.copy_len;
  VAR_10.qthreshold = VAR_8->u.ulog.qthreshold;
  FUNC_1(VAR_10.prefix, VAR_9, sizeof(VAR_10.prefix));
 }

 FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_10, VAR_9);
}
