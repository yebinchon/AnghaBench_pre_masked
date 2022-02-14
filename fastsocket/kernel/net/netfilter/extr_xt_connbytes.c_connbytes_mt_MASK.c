
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
struct xt_match_param {struct xt_connbytes_info* matchinfo; } ;
struct TYPE_2__ {scalar_t__ to; scalar_t__ from; } ;
struct xt_connbytes_info {int what; TYPE_1__ count; int direction; } ;
struct sk_buff {int dummy; } ;
struct nf_conn_counter {scalar_t__ packets; scalar_t__ bytes; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 size_t VAR_0 ;
 size_t VAR_1 ;






 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 struct nf_conn_counter* FUNC_1 (struct nf_conn const*) ;
 struct nf_conn* FUNC_2 (struct sk_buff const*,int*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_2, const struct xt_match_param *VAR_3)
{
 const struct xt_connbytes_info *VAR_4 = VAR_3->matchinfo;
 const struct nf_conn *VAR_5;
 enum ip_conntrack_info VAR_6;
 u_int64_t VAR_7 = 0;
 u_int64_t VAR_8 = 0;
 u_int64_t VAR_9 = 0;
 const struct nf_conn_counter *VAR_10;

 VAR_5 = FUNC_2(VAR_2, &VAR_6);
 if (!VAR_5)
  return 0;

 VAR_10 = FUNC_1(VAR_5);
 if (!VAR_10)
  return 0;

 switch (VAR_4->what) {
 case 128:
  switch (VAR_4->direction) {
  case 130:
   VAR_7 = VAR_10[VAR_0].packets;
   break;
  case 129:
   VAR_7 = VAR_10[VAR_1].packets;
   break;
  case 131:
   VAR_7 = VAR_10[VAR_0].packets;
   VAR_7 += VAR_10[VAR_1].packets;
   break;
  }
  break;
 case 132:
  switch (VAR_4->direction) {
  case 130:
   VAR_7 = VAR_10[VAR_0].bytes;
   break;
  case 129:
   VAR_7 = VAR_10[VAR_1].bytes;
   break;
  case 131:
   VAR_7 = VAR_10[VAR_0].bytes;
   VAR_7 += VAR_10[VAR_1].bytes;
   break;
  }
  break;
 case 133:
  switch (VAR_4->direction) {
  case 130:
   VAR_8 = VAR_10[VAR_0].bytes;
   VAR_9 = VAR_10[VAR_0].packets;
   break;
  case 129:
   VAR_8 = VAR_10[VAR_1].bytes;
   VAR_9 = VAR_10[VAR_1].packets;
   break;
  case 131:
   VAR_8 = VAR_10[VAR_0].bytes +
    VAR_10[VAR_1].bytes;
   VAR_9 = VAR_10[VAR_0].packets +
    VAR_10[VAR_1].packets;
   break;
  }
  if (VAR_9 != 0)
   VAR_7 = FUNC_0(VAR_8, VAR_9);
  break;
 }

 if (VAR_4->count.to)
  return VAR_7 <= VAR_4->count.to && VAR_7 >= VAR_4->count.from;
 else
  return VAR_7 >= VAR_4->count.from;
}
