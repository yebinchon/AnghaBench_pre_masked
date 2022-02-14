
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct snd_timer_system_private {TYPE_1__ tlist; } ;
struct snd_timer {int private_free; struct snd_timer_system_private* private_data; int hw; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct snd_timer_system_private* FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_timer*) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,struct snd_timer**) ;
 int FUNC_4 (struct snd_timer*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct snd_timer *VAR_6;
 struct snd_timer_system_private *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3("system", VAR_2, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 FUNC_5(VAR_6->name, "system timer");
 VAR_6->hw = VAR_5;
 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }
 FUNC_0(&VAR_7->tlist);
 VAR_7->tlist.function = VAR_4;
 VAR_7->tlist.data = (unsigned long) VAR_6;
 VAR_6->private_data = VAR_7;
 VAR_6->private_free = VAR_3;
 return FUNC_4(VAR_6);
}
