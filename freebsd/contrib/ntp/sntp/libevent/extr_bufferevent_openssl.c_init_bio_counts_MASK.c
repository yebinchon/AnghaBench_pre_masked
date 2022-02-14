
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n_read; int n_written; } ;
struct bufferevent_openssl {int ssl; TYPE_1__ counts; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct bufferevent_openssl *VAR_0)
{
 VAR_0->counts.n_written =
     FUNC_1(FUNC_3(VAR_0->ssl));
 VAR_0->counts.n_read =
     FUNC_0(FUNC_2(VAR_0->ssl));
}
