
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_len; } ;
union vxlan_sockaddr {TYPE_1__ sa; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (TYPE_1__*,struct sockaddr const*,int ) ;

__attribute__((used)) static int
FUNC_1(const union vxlan_sockaddr *VAR_0,
    const struct sockaddr *VAR_1)
{

 return (FUNC_0(&VAR_0->sa, VAR_1, VAR_0->sa.sa_len));
}
