
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_man {char const* os_s; int quick; struct roff* roff; } ;
struct roff {struct roff_man* man; } ;


 struct roff_man* FUNC_0 (int,int) ;
 int FUNC_1 (struct roff_man*) ;

struct roff_man *
FUNC_2(struct roff *VAR_0, const char *VAR_1, int VAR_2)
{
 struct roff_man *VAR_3;

 VAR_3 = FUNC_0(1, sizeof(*VAR_3));
 VAR_3->roff = VAR_0;
 VAR_3->os_s = VAR_1;
 VAR_3->quick = VAR_2;
 FUNC_1(VAR_3);
 VAR_0->man = VAR_3;
 return VAR_3;
}
