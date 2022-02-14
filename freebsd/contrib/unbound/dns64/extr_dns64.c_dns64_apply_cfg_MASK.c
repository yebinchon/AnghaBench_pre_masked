
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dns64_env {int prefix_net; int ignore_aaaa; int prefix_addrlen; int prefix_addr; } ;
struct config_strlist {int str; struct config_strlist* next; } ;
struct config_file {struct config_strlist* dns64_ignore_aaaa; scalar_t__ dns64_prefix; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct dns64_env*,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int ,int *,int *,int*) ;
 int FUNC_5 (int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct dns64_env* VAR_2, struct config_file* VAR_3)
{
    struct config_strlist* VAR_4;
    FUNC_5(VAR_1, "dns64-prefix: %s", VAR_3->dns64_prefix);
    if (!FUNC_4(VAR_3->dns64_prefix ? VAR_3->dns64_prefix :
                VAR_0, 0, &VAR_2->prefix_addr,
                &VAR_2->prefix_addrlen, &VAR_2->prefix_net)) {
        FUNC_2("cannot parse dns64-prefix netblock: %s", VAR_3->dns64_prefix);
        return 0;
    }
    if (!FUNC_0(&VAR_2->prefix_addr, VAR_2->prefix_addrlen)) {
        FUNC_2("dns64_prefix is not IPv6: %s", VAR_3->dns64_prefix);
        return 0;
    }
    if (VAR_2->prefix_net < 0 || VAR_2->prefix_net > 96) {
        FUNC_2("dns64-prefix length it not between 0 and 96: %s",
                VAR_3->dns64_prefix);
        return 0;
    }
    for(VAR_4 = VAR_3->dns64_ignore_aaaa; VAR_4; VAR_4 = VAR_4->next) {
     if(!FUNC_1(VAR_2, VAR_4->str))
      return 0;
    }
    FUNC_3(&VAR_2->ignore_aaaa);
    return 1;
}
