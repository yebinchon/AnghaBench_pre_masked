
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_port {int vtcport_flags; struct tty* vtcport_tty; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct tty*) ;
 int VAR_1 ;
 int FUNC_2 (struct vtcon_port*) ;

__attribute__((used)) static void
FUNC_3(struct vtcon_port *VAR_2)
{
 struct tty *VAR_3;

 VAR_3 = VAR_2->vtcport_tty;

 VAR_2->vtcport_flags |= VAR_0;

 if (VAR_3 != ((void*)0)) {
  FUNC_0(&VAR_1, 1);
  FUNC_1(VAR_3);
 } else
  FUNC_2(VAR_2);
}
