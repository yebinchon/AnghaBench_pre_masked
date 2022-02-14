
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv_write ;
typedef int tv_read ;
struct timeval {int tv_sec; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*,struct timeval*,struct timeval*) ;
 int FUNC_1 (struct timeval*,int ,int) ;

void
FUNC_2(struct bufferevent *VAR_0,
         int VAR_1, int VAR_2)
{
 struct timeval VAR_3, VAR_4;
 struct timeval *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));

 if (VAR_1) {
  VAR_3.tv_sec = VAR_1;
  VAR_5 = &VAR_3;
 }
 if (VAR_2) {
  VAR_4.tv_sec = VAR_2;
  VAR_6 = &VAR_4;
 }

 FUNC_0(VAR_0, VAR_5, VAR_6);
}
