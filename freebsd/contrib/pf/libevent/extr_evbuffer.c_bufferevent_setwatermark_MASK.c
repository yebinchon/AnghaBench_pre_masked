
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t low; size_t high; } ;
struct TYPE_3__ {size_t low; size_t high; } ;
struct bufferevent {int input; TYPE_2__ wm_write; TYPE_1__ wm_read; } ;


 int FUNC_0 (int ) ;
 short VAR_0 ;
 short VAR_1 ;
 int FUNC_1 (int ,int ,int ,struct bufferevent*) ;

void
FUNC_2(struct bufferevent *VAR_2, short VAR_3,
    size_t VAR_4, size_t VAR_5)
{
 if (VAR_3 & VAR_0) {
  VAR_2->wm_read.low = VAR_4;
  VAR_2->wm_read.high = VAR_5;
 }

 if (VAR_3 & VAR_1) {
  VAR_2->wm_write.low = VAR_4;
  VAR_2->wm_write.high = VAR_5;
 }


 FUNC_1(VAR_2->input,
     0, FUNC_0(VAR_2->input), VAR_2);
}
