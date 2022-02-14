
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evbuffer {int dummy; } ;
struct TYPE_2__ {size_t high; } ;
struct bufferevent {TYPE_1__ wm_write; } ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 struct bufferevent* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 struct evbuffer* FUNC_4 (struct bufferevent*) ;
 int FUNC_5 (struct evbuffer*,char const*,int) ;
 size_t FUNC_6 (struct evbuffer*) ;

__attribute__((used)) static int
FUNC_7(BIO *VAR_0, const char *VAR_1, int VAR_2)
{
 struct bufferevent *VAR_3 = FUNC_1(VAR_0);
 struct evbuffer *VAR_4;
 size_t VAR_5;

 FUNC_0(VAR_0);

 if (!FUNC_1(VAR_0))
  return -1;

 VAR_4 = FUNC_4(VAR_3);
 VAR_5 = FUNC_6(VAR_4);



 if (VAR_3->wm_write.high && VAR_3->wm_write.high <= (VAR_5+VAR_2)) {
  if (VAR_3->wm_write.high <= VAR_5) {

   FUNC_2(VAR_0);
   return -1;
  }
  VAR_2 = VAR_3->wm_write.high - VAR_5;
 }

 FUNC_3(VAR_2 > 0);
 FUNC_5(VAR_4, VAR_1, VAR_2);
 return VAR_2;
}
