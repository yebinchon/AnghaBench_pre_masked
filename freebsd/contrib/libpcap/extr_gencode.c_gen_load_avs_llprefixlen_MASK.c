
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int k; } ;
struct slist {TYPE_2__ s; } ;
struct TYPE_6__ {int reg; } ;
struct TYPE_8__ {TYPE_1__ off_linkhdr; } ;
typedef TYPE_3__ compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct slist* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (struct slist*,struct slist*) ;

__attribute__((used)) static struct slist *
FUNC_2(compiler_state_t *VAR_6)
{
 struct slist *VAR_7, *VAR_8;
 if (VAR_6->off_linkhdr.reg != -1) {





  VAR_7 = FUNC_0(VAR_6, VAR_1|VAR_5|VAR_0);
  VAR_7->s.k = 4;





  VAR_8 = FUNC_0(VAR_6, VAR_3);
  VAR_8->s.k = VAR_6->off_linkhdr.reg;
  FUNC_1(VAR_7, VAR_8);




  VAR_8 = FUNC_0(VAR_6, VAR_2|VAR_4);
  FUNC_1(VAR_7, VAR_8);

  return (VAR_7);
 } else
  return (((void*)0));
}
