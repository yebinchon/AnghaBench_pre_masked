
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a10hdmiaudio_info {int lock; } ;
struct a10hdmiaudio_chinfo {int run; struct a10hdmiaudio_info* parent; } ;
typedef int kobj_t ;



 int FUNC_0 (int) ;


 int FUNC_1 (struct a10hdmiaudio_chinfo*) ;
 int FUNC_2 (struct a10hdmiaudio_chinfo*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct a10hdmiaudio_chinfo *VAR_3 = VAR_1;
 struct a10hdmiaudio_info *VAR_4 = VAR_3->parent;

 if (!FUNC_0(VAR_2))
  return (0);

 FUNC_3(VAR_4->lock);
 switch (VAR_2) {
 case 129:
  VAR_3->run = 1;
  FUNC_1(VAR_3);
  break;
 case 128:
 case 130:
  VAR_3->run = 0;
  FUNC_2(VAR_3);
  break;
 default:
  break;
 }
 FUNC_4(VAR_4->lock);

 return (0);
}
