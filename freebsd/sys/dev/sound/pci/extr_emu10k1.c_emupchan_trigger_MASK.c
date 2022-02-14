
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sc_pchinfo {int run; TYPE_1__* master; TYPE_1__* slave; struct sc_info* parent; } ;
struct sc_info {int lock; } ;
typedef int kobj_t ;
struct TYPE_4__ {int speed; scalar_t__ stereo; scalar_t__ b16; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sc_info*,int) ;
 int FUNC_2 (struct sc_info*) ;
 int FUNC_3 (struct sc_info*,TYPE_1__*) ;
 int FUNC_4 (struct sc_pchinfo*) ;
 int FUNC_5 (struct sc_info*,TYPE_1__*,int) ;
 int FUNC_6 (struct sc_info*,TYPE_1__*) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(kobj_t VAR_1, void *VAR_2, int VAR_3)
{
 struct sc_pchinfo *VAR_4 = VAR_2;
 struct sc_info *VAR_5 = VAR_4->parent;

 if (!FUNC_0(VAR_3))
  return 0;

 FUNC_8(VAR_5->lock);
 if (VAR_3 == VAR_0) {
  FUNC_4(VAR_4);
  FUNC_6(VAR_5, VAR_4->master);
  FUNC_2(VAR_5);
  FUNC_1(VAR_5, 1);
 }
 VAR_4->run = (VAR_3 == VAR_0) ? 1 : 0;
 FUNC_5(VAR_5, VAR_4->master, VAR_4->run);
 FUNC_9(VAR_5->lock);
 return 0;
}
