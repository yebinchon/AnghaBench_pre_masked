
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bufferevent {int dummy; } ;
struct TYPE_3__ {long shutdown; struct bufferevent* ptr; } ;
typedef TYPE_1__ BIO ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static long
FUNC_3(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
 struct bufferevent *VAR_4 = VAR_0->ptr;
 long VAR_5 = 1;

 switch (VAR_1) {
 case 131:
  VAR_5 = VAR_0->shutdown;
  break;
 case 129:
  VAR_0->shutdown = (int)VAR_2;
  break;
 case 130:
  VAR_5 = FUNC_2(FUNC_0(VAR_4)) != 0;
  break;
 case 128:
  VAR_5 = FUNC_2(FUNC_1(VAR_4)) != 0;
  break;


 case 133:
 case 132:
  VAR_5 = 1;
  break;
 default:
  VAR_5 = 0;
  break;
 }
 return VAR_5;
}
