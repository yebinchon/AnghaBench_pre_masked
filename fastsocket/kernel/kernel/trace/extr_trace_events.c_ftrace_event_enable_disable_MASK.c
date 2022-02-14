
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_event_call {int flags; int (* regfunc ) (struct ftrace_event_call*) ;int name; int (* unregfunc ) (struct ftrace_event_call*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ftrace_event_call*) ;
 int FUNC_2 (struct ftrace_event_call*) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ftrace_event_call *VAR_4,
     int VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_5) {
 case 0:
  if (VAR_4->flags & VAR_0) {
   VAR_4->flags &= ~VAR_0;
   if (VAR_4->flags & VAR_1) {
    FUNC_4();
    VAR_4->flags &= ~VAR_1;
   }
   VAR_4->unregfunc(VAR_4);
  }
  break;
 case 1:
  if (!(VAR_4->flags & VAR_0)) {
   if (VAR_3 & VAR_2) {
    FUNC_3();
    VAR_4->flags |= VAR_1;
   }
   VAR_6 = VAR_4->regfunc(VAR_4);
   if (VAR_6) {
    FUNC_4();
    FUNC_0("event trace: Could not enable event "
     "%s\n", VAR_4->name);
    break;
   }
   VAR_4->flags |= VAR_0;
  }
  break;
 }

 return VAR_6;
}
