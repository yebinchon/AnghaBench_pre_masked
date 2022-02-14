
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bev; } ;
struct bufferevent_openssl {TYPE_1__ bev; scalar_t__ allow_dirty_shutdown; } ;
struct bufferevent {int dummy; } ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct bufferevent *VAR_4, short VAR_5, void *VAR_6)
{
 struct bufferevent_openssl *VAR_7 = VAR_6;
 int VAR_8 = 0;

 if (VAR_5 & VAR_1) {
  if (VAR_7->allow_dirty_shutdown)
   VAR_8 = VAR_1;
  else
   VAR_8 = VAR_2;
 } else if (VAR_5 & VAR_3) {

  VAR_8 = VAR_5;
 } else if (VAR_5 & VAR_2) {

  VAR_8 = VAR_5;
 } else if (VAR_5 & VAR_0) {


 }
 if (VAR_8)
  FUNC_0(&VAR_7->bev.bev, VAR_8, 0);
}
