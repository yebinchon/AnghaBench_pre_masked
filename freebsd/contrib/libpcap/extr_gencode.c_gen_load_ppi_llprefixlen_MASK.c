
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int k; } ;
struct slist {TYPE_1__ s; } ;
struct TYPE_7__ {int reg; } ;
struct TYPE_8__ {TYPE_2__ off_linkhdr; } ;
typedef TYPE_3__ compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct slist* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (struct slist*,struct slist*) ;

__attribute__((used)) static struct slist *
FUNC_2(compiler_state_t *VAR_11)
{
 struct slist *VAR_12, *VAR_13;






 if (VAR_11->off_linkhdr.reg != -1) {
  VAR_12 = FUNC_0(VAR_11, VAR_4|VAR_2|VAR_0);
  VAR_12->s.k = 3;
  VAR_13 = FUNC_0(VAR_11, VAR_1|VAR_5|VAR_3);
  FUNC_1(VAR_12, VAR_13);
  VAR_13->s.k = 8;
  VAR_13 = FUNC_0(VAR_11, VAR_6|VAR_9);
  FUNC_1(VAR_12, VAR_13);





  VAR_13 = FUNC_0(VAR_11, VAR_4|VAR_2|VAR_0);
  FUNC_1(VAR_12, VAR_13);
  VAR_13->s.k = 2;
  VAR_13 = FUNC_0(VAR_11, VAR_1|VAR_7|VAR_10);
  FUNC_1(VAR_12, VAR_13);





  VAR_13 = FUNC_0(VAR_11, VAR_8);
  VAR_13->s.k = VAR_11->off_linkhdr.reg;
  FUNC_1(VAR_12, VAR_13);




  VAR_13 = FUNC_0(VAR_11, VAR_6|VAR_9);
  FUNC_1(VAR_12, VAR_13);

  return (VAR_12);
 } else
  return (((void*)0));
}
