
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; scalar_t__ header_len; } ;
struct xfrm_state {TYPE_1__ props; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct xfrm_state*) ;
 int FUNC_1 (struct xfrm_state*) ;
 int FUNC_2 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_3(struct xfrm_state *VAR_1)
{
 int VAR_2 = -VAR_0;

 VAR_1->props.header_len = 0;
 switch (VAR_1->props.mode) {
 case 129:
  break;
 case 128:
  VAR_1->props.header_len += sizeof(struct iphdr);
  break;
 default:
  goto out;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto out;

 if (VAR_1->props.mode == 128) {
  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2)
   goto error_tunnel;
 }

 VAR_2 = 0;
out:
 return VAR_2;

error_tunnel:
 FUNC_0(VAR_1);
 goto out;
}
