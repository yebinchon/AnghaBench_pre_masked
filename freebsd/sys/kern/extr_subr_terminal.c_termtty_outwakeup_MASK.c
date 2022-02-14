
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
struct terminal {int tm_flags; TYPE_1__* tm_class; int tm_emulator; } ;
struct TYPE_2__ {int (* tc_bell ) (struct terminal*) ;int (* tc_done ) (struct terminal*) ;} ;


 int FUNC_0 (struct terminal*) ;
 int FUNC_1 (struct terminal*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct terminal*) ;
 int FUNC_3 (struct terminal*) ;
 int FUNC_4 (int *,char*,size_t) ;
 struct terminal* FUNC_5 (struct tty*) ;
 size_t FUNC_6 (struct tty*,char*,int) ;

__attribute__((used)) static void
FUNC_7(struct tty *VAR_2)
{
 struct terminal *VAR_3 = FUNC_5(VAR_2);
 char VAR_4[128];
 size_t VAR_5;
 unsigned int VAR_6 = 0;

 while ((VAR_5 = FUNC_6(VAR_2, VAR_4, sizeof VAR_4)) > 0) {
  FUNC_0(VAR_3);
  if (!(VAR_3->tm_flags & VAR_1)) {
   VAR_3->tm_flags &= ~VAR_0;
   FUNC_4(&VAR_3->tm_emulator, VAR_4, VAR_5);
   VAR_6 |= VAR_3->tm_flags;
  }
  FUNC_1(VAR_3);
 }

 FUNC_0(VAR_3);
 if (!(VAR_3->tm_flags & VAR_1))
  VAR_3->tm_class->tc_done(VAR_3);
 FUNC_1(VAR_3);
 if (VAR_6 & VAR_0)
  VAR_3->tm_class->tc_bell(VAR_3);
}
