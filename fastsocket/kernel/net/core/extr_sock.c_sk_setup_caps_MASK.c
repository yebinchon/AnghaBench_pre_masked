
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_route_caps; int sk_gso_max_size; } ;
struct dst_entry {TYPE_3__* dev; scalar_t__ header_len; } ;
struct TYPE_6__ {int features; int gso_max_size; } ;
struct TYPE_5__ {int gso_max_segs; } ;
struct TYPE_4__ {int sk_gso_max_segs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*,struct dst_entry*) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_5, struct dst_entry *VAR_6)
{
 FUNC_0(VAR_5, VAR_6);
 VAR_5->sk_route_caps = VAR_6->dev->features;
 if (VAR_5->sk_route_caps & VAR_0)
  VAR_5->sk_route_caps |= VAR_2;
 if (FUNC_2(VAR_5)) {
  if (VAR_6->header_len) {
   VAR_5->sk_route_caps &= ~VAR_1;
  } else {
   VAR_5->sk_route_caps |= VAR_4 | VAR_3;
   VAR_5->sk_gso_max_size = VAR_6->dev->gso_max_size;
   FUNC_3(VAR_5)->sk_gso_max_segs = FUNC_1(VAR_6->dev)->gso_max_segs;
  }
 }
}
