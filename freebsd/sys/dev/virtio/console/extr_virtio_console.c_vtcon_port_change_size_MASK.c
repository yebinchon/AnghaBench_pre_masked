
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint16_t ;
struct winsize {void* ws_row; void* ws_col; } ;
struct vtcon_port {struct tty* vtcport_tty; } ;
struct tty {int dummy; } ;


 int FUNC_0 (struct winsize*,int) ;
 int FUNC_1 (struct tty*,struct winsize*) ;

__attribute__((used)) static void
FUNC_2(struct vtcon_port *VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{
 struct tty *VAR_3;
 struct winsize VAR_4;

 VAR_3 = VAR_0->vtcport_tty;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(&VAR_4, sizeof(struct winsize));
 VAR_4.ws_col = VAR_1;
 VAR_4.ws_row = VAR_2;

 FUNC_1(VAR_3, &VAR_4);
}
