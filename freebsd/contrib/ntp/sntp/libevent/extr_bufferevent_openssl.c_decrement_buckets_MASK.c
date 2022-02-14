
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long n_written; unsigned long n_read; } ;
struct bufferevent_openssl {TYPE_1__ counts; int bev; int ssl; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_6(struct bufferevent_openssl *VAR_0)
{
 unsigned long VAR_1 = FUNC_1(FUNC_3(VAR_0->ssl));
 unsigned long VAR_2 = FUNC_0(FUNC_2(VAR_0->ssl));

 unsigned long VAR_3 = VAR_1 - VAR_0->counts.n_written;
 unsigned long VAR_4 = VAR_2 - VAR_0->counts.n_read;
 if (VAR_3)
  FUNC_5(&VAR_0->bev, VAR_3);
 if (VAR_4)
  FUNC_4(&VAR_0->bev, VAR_4);
 VAR_0->counts.n_written = VAR_1;
 VAR_0->counts.n_read = VAR_2;
}
