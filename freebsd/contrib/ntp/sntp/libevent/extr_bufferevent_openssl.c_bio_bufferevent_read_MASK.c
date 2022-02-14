
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct evbuffer {int dummy; } ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct evbuffer* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct evbuffer*) ;
 int FUNC_4 (struct evbuffer*,char*,int) ;

__attribute__((used)) static int
FUNC_5(BIO *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct evbuffer *VAR_4;

 FUNC_0(VAR_0);

 if (!VAR_1)
  return 0;
 if (!VAR_0->ptr)
  return -1;

 VAR_4 = FUNC_2(VAR_0->ptr);
 if (FUNC_3(VAR_4) == 0) {

  FUNC_1(VAR_0);
  return -1;
 } else {
  VAR_3 = FUNC_4(VAR_4, VAR_1, VAR_2);
 }

 return VAR_3;
}
