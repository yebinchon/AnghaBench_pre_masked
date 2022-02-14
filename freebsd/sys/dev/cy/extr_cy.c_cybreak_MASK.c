
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {struct com_s* t_sc; } ;
struct com_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct com_s*,int ) ;

__attribute__((used)) static void
FUNC_1(struct tty *VAR_2, int VAR_3)
{
 struct com_s *VAR_4;

 VAR_4 = VAR_2->t_sc;
 if (VAR_3)
  FUNC_0(VAR_4, VAR_0);
 else
  FUNC_0(VAR_4, VAR_1);
}
