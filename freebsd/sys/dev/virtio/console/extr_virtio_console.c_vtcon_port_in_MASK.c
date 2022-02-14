
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vtcon_port {int vtcport_flags; int vtcport_alt_break_state; struct virtqueue* vtcport_invq; struct tty* vtcport_tty; } ;
struct virtqueue {int dummy; } ;
struct tty {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char,int *) ;
 int FUNC_1 (struct tty*,char,int ) ;
 int FUNC_2 (struct tty*) ;
 char* FUNC_3 (struct virtqueue*,int*) ;
 scalar_t__ FUNC_4 (struct virtqueue*) ;
 int FUNC_5 (struct virtqueue*) ;
 int FUNC_6 (struct vtcon_port*,char*) ;

__attribute__((used)) static void
FUNC_7(struct vtcon_port *VAR_1)
{
 struct virtqueue *VAR_2;
 struct tty *VAR_3;
 char *VAR_4;
 uint32_t VAR_5;
 int VAR_6, VAR_7;

 VAR_3 = VAR_1->vtcport_tty;
 VAR_2 = VAR_1->vtcport_invq;

again:
 VAR_7 = 0;

 while ((VAR_4 = FUNC_3(VAR_2, &VAR_5)) != ((void*)0)) {
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {





   FUNC_1(VAR_3, VAR_4[VAR_6], 0);
  }
  FUNC_6(VAR_1, VAR_4);
  VAR_7++;
 }
 FUNC_2(VAR_3);

 if (VAR_7 > 0)
  FUNC_5(VAR_2);

 if (FUNC_4(VAR_2) != 0)
  goto again;
}
