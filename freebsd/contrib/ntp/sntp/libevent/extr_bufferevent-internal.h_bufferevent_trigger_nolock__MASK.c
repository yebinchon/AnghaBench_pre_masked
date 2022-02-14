
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ low; } ;
struct TYPE_3__ {scalar_t__ low; } ;
struct bufferevent {TYPE_2__ wm_write; int output; TYPE_1__ wm_read; int input; } ;


 int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int FUNC_0 (struct bufferevent*,int) ;
 int FUNC_1 (struct bufferevent*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline void
FUNC_3(struct bufferevent *VAR_3, short VAR_4, int VAR_5)
{
 if ((VAR_4 & VAR_1) && ((VAR_5 & VAR_0) ||
     FUNC_2(VAR_3->input) >= VAR_3->wm_read.low))
  FUNC_0(VAR_3, VAR_5);
 if ((VAR_4 & VAR_2) && ((VAR_5 & VAR_0) ||
     FUNC_2(VAR_3->output) <= VAR_3->wm_write.low))
  FUNC_1(VAR_3, VAR_5);
}
