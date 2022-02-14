
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttydisc_recalc_length {unsigned int curlen; int member_1; struct tty* member_0; } ;
struct tty {int t_inq; int t_writepos; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct ttydisc_recalc_length*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct tty *VAR_1)
{
 struct ttydisc_recalc_length VAR_2 = { VAR_1, VAR_1->t_writepos };

 FUNC_0(&VAR_1->t_inq,
     VAR_0, &VAR_2);
 return (VAR_2.curlen);
}
