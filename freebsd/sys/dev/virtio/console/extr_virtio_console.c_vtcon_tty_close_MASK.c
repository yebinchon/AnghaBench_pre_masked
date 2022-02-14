
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_port {int vtcport_flags; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vtcon_port* FUNC_0 (struct tty*) ;
 int FUNC_1 (struct vtcon_port*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_2)
{
 struct vtcon_port *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->vtcport_flags & VAR_1)
  return;

 FUNC_1(VAR_3, VAR_0, 0);
}
