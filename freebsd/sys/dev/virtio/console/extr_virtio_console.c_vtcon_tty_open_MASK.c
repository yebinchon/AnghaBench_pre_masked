
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_port {int vtcport_flags; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vtcon_port* FUNC_0 (struct tty*) ;
 int FUNC_1 (struct vtcon_port*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct tty *VAR_3)
{
 struct vtcon_port *VAR_4;

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->vtcport_flags & VAR_2)
  return (VAR_0);

 FUNC_1(VAR_4, VAR_1, 1);

 return (0);
}
