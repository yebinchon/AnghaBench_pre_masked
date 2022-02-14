
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int teken_attr_t ;
struct terminal {int tm_flags; TYPE_1__* tm_class; int tm_emulator; } ;
struct consdev {struct terminal* cn_arg; } ;
struct TYPE_2__ {int (* tc_done ) (struct terminal*) ;} ;


 int FUNC_0 (struct terminal*) ;
 int FUNC_1 (struct terminal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct terminal*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(struct consdev *VAR_2, int VAR_3)
{
 struct terminal *VAR_4 = VAR_2->cn_arg;
 teken_attr_t VAR_5;
 char VAR_6 = VAR_3;

 FUNC_0(VAR_4);
 if (!(VAR_4->tm_flags & VAR_0)) {
  VAR_5 = *FUNC_3(&VAR_4->tm_emulator);
  FUNC_5(&VAR_4->tm_emulator, &VAR_1);
  FUNC_4(&VAR_4->tm_emulator, &VAR_6, 1);
  FUNC_5(&VAR_4->tm_emulator, &VAR_5);
  VAR_4->tm_class->tc_done(VAR_4);
 }
 FUNC_1(VAR_4);
}
