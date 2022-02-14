
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int high_thresh; int low_thresh; int timeout; } ;
struct TYPE_3__ {TYPE_2__ frags; } ;
struct net {TYPE_1__ ipv6; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct net*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_1)
{
 VAR_1->ipv6.frags.high_thresh = 256 * 1024;
 VAR_1->ipv6.frags.low_thresh = 192 * 1024;
 VAR_1->ipv6.frags.timeout = VAR_0;

 FUNC_0(&VAR_1->ipv6.frags);

 return FUNC_1(VAR_1);
}
