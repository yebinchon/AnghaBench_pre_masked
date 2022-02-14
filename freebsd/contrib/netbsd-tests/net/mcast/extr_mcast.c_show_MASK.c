
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct message {TYPE_1__ ts; int seq; } ;
typedef int intmax_t ;


 int FUNC_0 (char*,char const*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, const struct message *VAR_1)
{
 FUNC_0("%10.10s: %zu [%jd.%ld]\n", VAR_0, VAR_1->seq, (intmax_t)
     VAR_1->ts.tv_sec, VAR_1->ts.tv_nsec);
}
