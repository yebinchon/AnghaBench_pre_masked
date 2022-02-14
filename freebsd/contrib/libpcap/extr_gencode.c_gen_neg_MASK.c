
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ k; } ;
struct slist {TYPE_1__ s; } ;
struct arth {int s; scalar_t__ regno; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct slist* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,struct slist*) ;
 struct slist* FUNC_2 (int *,struct arth*) ;

struct arth *
FUNC_3(compiler_state_t *VAR_3, struct arth *VAR_4)
{
 struct slist *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 FUNC_1(VAR_4->s, VAR_5);
 VAR_5 = FUNC_0(VAR_3, VAR_0|VAR_1);
 VAR_5->s.k = 0;
 FUNC_1(VAR_4->s, VAR_5);
 VAR_5 = FUNC_0(VAR_3, VAR_2);
 VAR_5->s.k = VAR_4->regno;
 FUNC_1(VAR_4->s, VAR_5);

 return VAR_4;
}
