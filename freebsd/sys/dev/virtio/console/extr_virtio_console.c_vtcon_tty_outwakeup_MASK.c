
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_port {int vtcport_flags; } ;
struct tty {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 struct vtcon_port* FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*,char*,int) ;
 int FUNC_2 (struct vtcon_port*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_2)
{
 struct vtcon_port *VAR_3;
 char VAR_4[VAR_0];
 int VAR_5;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->vtcport_flags & VAR_1)
  return;

 while ((VAR_5 = FUNC_1(VAR_2, VAR_4, sizeof(VAR_4))) != 0)
  FUNC_2(VAR_3, VAR_4, VAR_5);
}
