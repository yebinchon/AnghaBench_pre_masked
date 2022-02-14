
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int k; struct slist* jf; struct slist* jt; } ;
struct slist {TYPE_3__ s; } ;
struct TYPE_8__ {int reg; } ;
struct TYPE_7__ {int constant_part; } ;
struct TYPE_10__ {int no_optimize; scalar_t__ linktype; TYPE_2__ off_linkpl; TYPE_1__ off_outermostlinkhdr; } ;
typedef TYPE_4__ compiler_state_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 struct slist* FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (struct slist*,struct slist*) ;

__attribute__((used)) static struct slist *
FUNC_4(compiler_state_t *VAR_17, struct slist *VAR_18, struct slist *VAR_19)
{
 struct slist *VAR_20;
 struct slist *VAR_21;
 struct slist *VAR_22;
 struct slist *VAR_23;
 struct slist *VAR_24;
 struct slist *VAR_25;
 struct slist *VAR_26;
 struct slist *VAR_27, *VAR_28;
 struct slist *VAR_29;

 if (VAR_17->off_linkpl.reg == -1) {






  return (VAR_18);
 }






 VAR_17->no_optimize = 1;
 if (VAR_18 == ((void*)0)) {
  VAR_18 = FUNC_2(VAR_17, VAR_10|VAR_5);
  VAR_18->s.k = VAR_17->off_outermostlinkhdr.constant_part;
 }
 VAR_20 = FUNC_2(VAR_17, VAR_12|VAR_14);
 FUNC_3(VAR_18, VAR_20);
 VAR_20 = FUNC_2(VAR_17, VAR_2|VAR_1|VAR_8);
 VAR_20->s.k = 24;
 FUNC_3(VAR_18, VAR_20);
 VAR_20 = FUNC_2(VAR_17, VAR_13);
 VAR_20->s.k = VAR_17->off_linkpl.reg;
 FUNC_3(VAR_18, VAR_20);

 VAR_20 = FUNC_2(VAR_17, VAR_9|VAR_6|VAR_4);
 VAR_20->s.k = 0;
 FUNC_3(VAR_18, VAR_20);






 VAR_21 = FUNC_2(VAR_17, FUNC_0(VAR_7));
 VAR_21->s.k = 0x08;
 FUNC_3(VAR_18, VAR_21);





 VAR_21->s.jt = VAR_22 = FUNC_2(VAR_17, FUNC_0(VAR_7));
 VAR_22->s.k = 0x04;
 FUNC_3(VAR_18, VAR_22);
 VAR_21->s.jf = VAR_19;






 VAR_22->s.jt = VAR_19;
 VAR_22->s.jf = VAR_23 = FUNC_2(VAR_17, FUNC_0(VAR_7));
 VAR_23->s.k = 0x80;
 FUNC_3(VAR_18, VAR_23);







 VAR_23->s.jt = VAR_20 = FUNC_2(VAR_17, VAR_9|VAR_11);
 VAR_20->s.k = VAR_17->off_linkpl.reg;
 FUNC_3(VAR_18, VAR_20);
 VAR_20 = FUNC_2(VAR_17, VAR_2|VAR_1|VAR_5);
 VAR_20->s.k = 2;
 FUNC_3(VAR_18, VAR_20);
 VAR_20 = FUNC_2(VAR_17, VAR_13);
 VAR_20->s.k = VAR_17->off_linkpl.reg;
 FUNC_3(VAR_18, VAR_20);
 if (VAR_17->linktype == VAR_16) {




  VAR_23->s.jf = VAR_20 = FUNC_2(VAR_17, VAR_9|VAR_0|VAR_15);
  VAR_20->s.k = 4;
  FUNC_3(VAR_18, VAR_20);

  VAR_24 = FUNC_2(VAR_17, FUNC_0(VAR_7));
  VAR_24->s.k = FUNC_1(0x00000002);
  FUNC_3(VAR_18, VAR_24);




  VAR_24->s.jf = VAR_19;




  VAR_25 = FUNC_2(VAR_17, FUNC_0(VAR_7));
  VAR_25->s.k = FUNC_1(0x80000000);
  FUNC_3(VAR_18, VAR_25);
  VAR_24->s.jt = VAR_25;




  VAR_25->s.jt = VAR_19;




  VAR_26 = FUNC_2(VAR_17, FUNC_0(VAR_7));
  VAR_26->s.k = FUNC_1(0x00000001);
  FUNC_3(VAR_18, VAR_26);
  VAR_25->s.jf = VAR_26;
  VAR_20 = FUNC_2(VAR_17, VAR_9|VAR_0|VAR_4);
  VAR_20->s.k = 16;
  FUNC_3(VAR_18, VAR_20);
  VAR_26->s.jt = VAR_20;

  VAR_27 = FUNC_2(VAR_17, FUNC_0(VAR_7));
  VAR_27->s.k = 0x20;
  FUNC_3(VAR_18, VAR_27);
  VAR_20 = FUNC_2(VAR_17, VAR_9|VAR_0|VAR_4);
  VAR_20->s.k = 8;
  FUNC_3(VAR_18, VAR_20);
  VAR_26->s.jf = VAR_20;

  VAR_28 = FUNC_2(VAR_17, FUNC_0(VAR_7));
  VAR_28->s.k = 0x20;
  FUNC_3(VAR_18, VAR_28);
  VAR_29 = FUNC_2(VAR_17, VAR_9|VAR_11);
  VAR_29->s.k = VAR_17->off_linkpl.reg;
  FUNC_3(VAR_18, VAR_29);
  VAR_20 = FUNC_2(VAR_17, VAR_2|VAR_1|VAR_5);
  VAR_20->s.k = 3;
  FUNC_3(VAR_18, VAR_20);
  VAR_20 = FUNC_2(VAR_17, VAR_2|VAR_3|VAR_5);
  VAR_20->s.k = ~3;
  FUNC_3(VAR_18, VAR_20);
  VAR_20 = FUNC_2(VAR_17, VAR_13);
  VAR_20->s.k = VAR_17->off_linkpl.reg;
  FUNC_3(VAR_18, VAR_20);

  VAR_27->s.jt = VAR_29;
  VAR_27->s.jf = VAR_19;
  VAR_28->s.jt = VAR_29;
  VAR_28->s.jf = VAR_19;
 } else
  VAR_23->s.jf = VAR_19;

 return VAR_18;
}
