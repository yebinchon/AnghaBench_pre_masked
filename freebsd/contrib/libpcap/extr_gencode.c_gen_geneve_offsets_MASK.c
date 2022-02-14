
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int k; struct slist* jf; struct slist* jt; } ;
struct slist {TYPE_4__ s; } ;
struct TYPE_12__ {int constant_part; int reg; int is_variable; } ;
struct TYPE_11__ {int reg; int is_variable; scalar_t__ constant_part; } ;
struct TYPE_10__ {int reg; } ;
struct TYPE_14__ {int off_nl; int no_optimize; TYPE_3__ off_linkpl; TYPE_2__ off_linktype; TYPE_1__ off_linkhdr; } ;
typedef TYPE_5__ compiler_state_t ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ,int,int ,void*) ;
 void* FUNC_2 (TYPE_5__*) ;
 struct slist* FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (struct slist*,struct slist*) ;

__attribute__((used)) static struct slist *
FUNC_5(compiler_state_t *VAR_20)
{
 struct slist *VAR_21, *VAR_22, *VAR_23;






 VAR_21 = FUNC_3(VAR_20, VAR_1|VAR_0|VAR_7);
 VAR_21->s.k = VAR_20->off_linkpl.constant_part + VAR_20->off_nl + 8;


 VAR_22 = FUNC_3(VAR_20, VAR_11|VAR_15);
 FUNC_4(VAR_21, VAR_22);



 VAR_22 = FUNC_3(VAR_20, VAR_1|VAR_0|VAR_7);
 VAR_22->s.k = 2;
 FUNC_4(VAR_21, VAR_22);

 VAR_20->off_linktype.reg = FUNC_2(VAR_20);
 VAR_20->off_linktype.is_variable = 1;
 VAR_20->off_linktype.constant_part = 0;

 VAR_22 = FUNC_3(VAR_20, VAR_13);
 VAR_22->s.k = VAR_20->off_linktype.reg;
 FUNC_4(VAR_21, VAR_22);




 VAR_22 = FUNC_3(VAR_20, VAR_8|VAR_5|VAR_3);
 VAR_22->s.k = 0;
 FUNC_4(VAR_21, VAR_22);

 VAR_22 = FUNC_3(VAR_20, VAR_1|VAR_2|VAR_7);
 VAR_22->s.k = 0x3f;
 FUNC_4(VAR_21, VAR_22);

 VAR_22 = FUNC_3(VAR_20, VAR_1|VAR_12|VAR_7);
 VAR_22->s.k = 4;
 FUNC_4(VAR_21, VAR_22);


 VAR_22 = FUNC_3(VAR_20, VAR_1|VAR_0|VAR_7);
 VAR_22->s.k = 8;
 FUNC_4(VAR_21, VAR_22);


 VAR_22 = FUNC_3(VAR_20, VAR_1|VAR_0|VAR_17);
 VAR_22->s.k = 0;
 FUNC_4(VAR_21, VAR_22);
 FUNC_1(VAR_20, VAR_18, 1, 0, FUNC_2(VAR_20));

 VAR_22 = FUNC_3(VAR_20, VAR_13);
 VAR_22->s.k = VAR_20->off_linkhdr.reg;
 FUNC_4(VAR_21, VAR_22);







 VAR_20->no_optimize = 1;


 VAR_22 = FUNC_3(VAR_20, VAR_8|VAR_5|VAR_4);
 VAR_22->s.k = 2;
 FUNC_4(VAR_21, VAR_22);


 VAR_22 = FUNC_3(VAR_20, VAR_9|VAR_10);
 VAR_22->s.k = VAR_20->off_linkhdr.reg;
 FUNC_4(VAR_21, VAR_22);




 VAR_23 = FUNC_3(VAR_20, FUNC_0(VAR_6));
 VAR_23->s.k = VAR_19;
 FUNC_4(VAR_21, VAR_23);

 VAR_22 = FUNC_3(VAR_20, VAR_11|VAR_16);
 FUNC_4(VAR_21, VAR_22);
 VAR_23->s.jt = VAR_22;



 VAR_22 = FUNC_3(VAR_20, VAR_1|VAR_0|VAR_7);
 VAR_22->s.k = 12;
 FUNC_4(VAR_21, VAR_22);

 VAR_22 = FUNC_3(VAR_20, VAR_13);
 VAR_22->s.k = VAR_20->off_linktype.reg;
 FUNC_4(VAR_21, VAR_22);



 VAR_22 = FUNC_3(VAR_20, VAR_1|VAR_0|VAR_7);
 VAR_22->s.k = 2;
 FUNC_4(VAR_21, VAR_22);


 VAR_22 = FUNC_3(VAR_20, VAR_11|VAR_15);
 FUNC_4(VAR_21, VAR_22);


 VAR_20->off_linkpl.reg = FUNC_2(VAR_20);
 VAR_20->off_linkpl.is_variable = 1;
 VAR_20->off_linkpl.constant_part = 0;

 VAR_22 = FUNC_3(VAR_20, VAR_14);
 VAR_22->s.k = VAR_20->off_linkpl.reg;
 FUNC_4(VAR_21, VAR_22);
 VAR_23->s.jf = VAR_22;

 VAR_20->off_nl = 0;

 return VAR_21;
}
