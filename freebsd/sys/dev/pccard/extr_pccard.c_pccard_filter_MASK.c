
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_function {int (* intr_filter ) (int ) ;int intr_handler_arg; int sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pccard_function*,int ) ;
 int FUNC_1 (struct pccard_function*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4)
{
 struct pccard_function *VAR_5 = (struct pccard_function*) VAR_4;
 int VAR_6;
 int VAR_7 = 1;
 if (FUNC_2(VAR_5->sc)) {
  VAR_6 = FUNC_0(VAR_5, VAR_2);
  if (VAR_6 & VAR_3)
   FUNC_1(VAR_5, VAR_2,
       VAR_6 & ~VAR_3);
  else
   VAR_7 = 0;
 }
 if (VAR_7) {
  if (VAR_5->intr_filter != ((void*)0))
   return (VAR_5->intr_filter(VAR_5->intr_handler_arg));
  return (VAR_0);
 }
 return (VAR_1);
}
