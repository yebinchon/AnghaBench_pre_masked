
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int k; struct slist* jf; struct slist* jt; } ;
struct slist {TYPE_2__ s; } ;
struct TYPE_6__ {int reg; } ;
struct TYPE_8__ {int no_optimize; TYPE_1__ off_linkhdr; } ;
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
 int VAR_11 ;
 int FUNC_0 (int ) ;
 struct slist* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (struct slist*,struct slist*) ;

__attribute__((used)) static struct slist *
FUNC_3(compiler_state_t *VAR_12)
{
 struct slist *VAR_13, *VAR_14;
 struct slist *VAR_15;
 struct slist *VAR_16;






 VAR_12->no_optimize = 1;
 if (VAR_12->off_linkhdr.reg != -1) {



  VAR_13 = FUNC_1(VAR_12, VAR_7|VAR_11|VAR_0);
  VAR_13->s.k = 0;




  VAR_14 = FUNC_1(VAR_12, VAR_1|VAR_2|VAR_6);
  VAR_14->s.k = 0xFFFFF000;
  FUNC_2(VAR_13, VAR_14);




  VAR_15 = FUNC_1(VAR_12, FUNC_0(VAR_5));
  VAR_15->s.k = 0x80211000;
  FUNC_2(VAR_13, VAR_15);
  VAR_14 = FUNC_1(VAR_12, VAR_7|VAR_11|VAR_0);
  VAR_14->s.k = 4;
  FUNC_2(VAR_13, VAR_14);
  VAR_15->s.jt = VAR_14;
  VAR_16 = FUNC_1(VAR_12, FUNC_0(VAR_4));
  VAR_16->s.k = 1;
  FUNC_2(VAR_13, VAR_16);







  VAR_14 = FUNC_1(VAR_12, VAR_7|VAR_11|VAR_3);
  VAR_14->s.k = 144;
  FUNC_2(VAR_13, VAR_14);
  VAR_15->s.jf = VAR_14;






  VAR_14 = FUNC_1(VAR_12, VAR_9);
  VAR_14->s.k = VAR_12->off_linkhdr.reg;
  FUNC_2(VAR_13, VAR_14);
  VAR_16->s.jf = VAR_14;




  VAR_14 = FUNC_1(VAR_12, VAR_8|VAR_10);
  FUNC_2(VAR_13, VAR_14);

  return (VAR_13);
 } else
  return (((void*)0));
}
