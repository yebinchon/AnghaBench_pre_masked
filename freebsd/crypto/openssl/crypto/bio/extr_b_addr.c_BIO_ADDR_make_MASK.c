
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_un {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_3__ {int s_un; int s_in6; int s_in; } ;
typedef TYPE_1__ BIO_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct sockaddr const*,int) ;

int FUNC_1(BIO_ADDR *VAR_3, const struct sockaddr *VAR_4)
{
    if (VAR_4->sa_family == VAR_0) {
        FUNC_0(&(VAR_3->s_in), VAR_4, sizeof(struct sockaddr_in));
        return 1;
    }
    return 0;
}
