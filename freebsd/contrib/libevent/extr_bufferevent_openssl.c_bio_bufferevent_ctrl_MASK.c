
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int dummy; } ;
typedef int BIO ;
 struct bufferevent* FUNC_0 (int *) ;
 long FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (struct bufferevent*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static long
FUNC_6(BIO *VAR_0, int VAR_1, long VAR_2, void *VAR_3)
{
 struct bufferevent *VAR_4 = FUNC_0(VAR_0);
 long VAR_5 = 1;

 switch (VAR_1) {
 case 131:
  VAR_5 = FUNC_1(VAR_0);
  break;
 case 129:
  FUNC_2(VAR_0, (int)VAR_2);
  break;
 case 130:
  VAR_5 = FUNC_5(FUNC_3(VAR_4)) != 0;
  break;
 case 128:
  VAR_5 = FUNC_5(FUNC_4(VAR_4)) != 0;
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
