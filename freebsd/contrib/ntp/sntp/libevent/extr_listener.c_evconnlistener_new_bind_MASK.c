
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
struct event_base {int dummy; } ;
struct evconnlistener {int dummy; } ;
typedef int on ;
typedef int evutil_socket_t ;
typedef int evconnlistener_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int,struct sockaddr const*,int) ;
 struct evconnlistener* FUNC_1 (struct event_base*,int ,void*,unsigned int,int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,int,int ) ;
 scalar_t__ FUNC_7 (int,int ,int ,void*,int) ;

struct evconnlistener *
FUNC_8(struct event_base *VAR_10, evconnlistener_cb VAR_11,
    void *VAR_12, unsigned VAR_13, int VAR_14, const struct sockaddr *VAR_15,
    int VAR_16)
{
 struct evconnlistener *VAR_17;
 evutil_socket_t VAR_18;
 int VAR_19 = 1;
 int VAR_20 = VAR_15 ? VAR_15->sa_family : VAR_0;
 int VAR_21 = VAR_7 | VAR_2;

 if (VAR_14 == 0)
  return ((void*)0);

 if (VAR_13 & VAR_3)
  VAR_21 |= VAR_1;

 VAR_18 = FUNC_6(VAR_20, VAR_21, 0);
 if (VAR_18 == -1)
  return ((void*)0);

 if (FUNC_7(VAR_18, VAR_8, VAR_9, (void*)&VAR_19, sizeof(VAR_19))<0)
  goto err;

 if (VAR_13 & VAR_5) {
  if (FUNC_3(VAR_18) < 0)
   goto err;
 }

 if (VAR_13 & VAR_6) {
  if (FUNC_4(VAR_18) < 0)
   goto err;
 }

 if (VAR_13 & VAR_4) {
  if (FUNC_5(VAR_18) < 0)
   goto err;
 }

 if (VAR_15) {
  if (FUNC_0(VAR_18, VAR_15, VAR_16)<0)
   goto err;
 }

 VAR_17 = FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_18);
 if (!VAR_17)
  goto err;

 return VAR_17;
err:
 FUNC_2(VAR_18);
 return ((void*)0);
}
