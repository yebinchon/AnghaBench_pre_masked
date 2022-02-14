
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int k; struct slist* jt; struct slist* jf; } ;
struct slist {struct slist* next; TYPE_2__ s; } ;
struct TYPE_15__ {int k; } ;
struct block {TYPE_3__ s; struct slist* stmts; } ;
typedef int s ;
struct TYPE_13__ {int constant_part; scalar_t__ is_variable; } ;
struct TYPE_16__ {int no_optimize; int off_nl; TYPE_1__ off_linkpl; } ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int) ;



 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (struct block*,struct block*) ;
 struct block* FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (struct block*,struct block*) ;
 struct block* FUNC_7 (TYPE_4__*,int,int,int) ;
 int FUNC_8 (struct slist**,int ,int) ;
 struct block* FUNC_9 (TYPE_4__*,int ) ;
 struct slist* FUNC_10 (TYPE_4__*,int) ;

__attribute__((used)) static struct block *
FUNC_11(compiler_state_t *VAR_28, int VAR_29, int VAR_30, int VAR_31)
{



 struct block *VAR_32, *VAR_33;
 struct slist *VAR_34[100];
 int VAR_35, VAR_36, VAR_37, VAR_38;
 int VAR_39, VAR_40, VAR_41;
 int VAR_42, VAR_43;
 int VAR_44 = FUNC_1(VAR_28);

 FUNC_8(VAR_34, 0, sizeof(VAR_34));
 VAR_36 = VAR_37 = VAR_38 = 0;

 switch (VAR_30) {
 case 129:
 case 128:
  break;
 case 130:
  VAR_32 = FUNC_11(VAR_28, VAR_29, 129, VAR_31);
  VAR_33 = FUNC_11(VAR_28, VAR_29, 128, VAR_31);
  FUNC_6(VAR_32, VAR_33);
  return VAR_33;
 default:
  FUNC_2(VAR_28, "bad protocol applied for 'protochain'");

 }
 if (VAR_28->off_linkpl.is_variable)
  FUNC_2(VAR_28, "'protochain' not supported with variable length headers");

 VAR_28->no_optimize = 1;






 VAR_42 = 0;
 VAR_34[VAR_42] = FUNC_10(VAR_28, 0);
 VAR_42++;

 switch (VAR_30) {
 case 129:
  VAR_32 = FUNC_5(VAR_28, VAR_20);


  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_10|VAR_0|VAR_3);
  VAR_34[VAR_42]->s.k = VAR_28->off_linkpl.constant_part + VAR_28->off_nl + 9;
  VAR_42++;

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_11|VAR_14|VAR_3);
  VAR_34[VAR_42]->s.k = VAR_28->off_linkpl.constant_part + VAR_28->off_nl;
  VAR_42++;
  break;

 case 128:
  VAR_32 = FUNC_5(VAR_28, VAR_21);


  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_10|VAR_0|VAR_3);
  VAR_34[VAR_42]->s.k = VAR_28->off_linkpl.constant_part + VAR_28->off_nl + 6;
  VAR_42++;

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_11|VAR_4);
  VAR_34[VAR_42]->s.k = 40;
  VAR_42++;
  break;

 default:
  FUNC_2(VAR_28, "unsupported proto to gen_protochain");

 }


 VAR_40 = VAR_42;
 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_8|VAR_7|VAR_9);
 VAR_34[VAR_42]->s.k = VAR_29;
 VAR_34[VAR_42]->s.jt = ((void*)0);
 VAR_34[VAR_42]->s.jf = ((void*)0);
 VAR_38 = VAR_42;
 VAR_42++;





 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_8|VAR_7|VAR_9);
 VAR_34[VAR_42]->s.jt = ((void*)0);
 VAR_34[VAR_42]->s.jf = ((void*)0);
 VAR_34[VAR_42]->s.k = 59;
 VAR_34[VAR_38]->s.jf = VAR_34[VAR_42];
 VAR_35 = VAR_42;
 VAR_42++;

 if (VAR_30 == 128) {
  int VAR_45, VAR_46, VAR_47, VAR_48;

  VAR_45 = VAR_42;

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_8|VAR_7|VAR_9);
  VAR_34[VAR_42]->s.jt = ((void*)0);
  VAR_34[VAR_42]->s.jf = ((void*)0);
  VAR_34[VAR_42]->s.k = VAR_25;
  VAR_34[VAR_35]->s.jf = VAR_34[VAR_42];
  VAR_42++;

  VAR_34[VAR_42 - 1]->s.jf = VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_8|VAR_7|VAR_9);
  VAR_34[VAR_42]->s.jt = ((void*)0);
  VAR_34[VAR_42]->s.jf = ((void*)0);
  VAR_34[VAR_42]->s.k = VAR_23;
  VAR_42++;

  VAR_34[VAR_42 - 1]->s.jf = VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_8|VAR_7|VAR_9);
  VAR_34[VAR_42]->s.jt = ((void*)0);
  VAR_34[VAR_42]->s.jf = ((void*)0);
  VAR_34[VAR_42]->s.k = VAR_27;
  VAR_42++;

  VAR_34[VAR_42 - 1]->s.jf = VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_8|VAR_7|VAR_9);
  VAR_34[VAR_42]->s.jt = ((void*)0);
  VAR_34[VAR_42]->s.jf = ((void*)0);
  VAR_34[VAR_42]->s.k = VAR_24;
  VAR_36 = VAR_42;
  VAR_46 = VAR_42;
  VAR_42++;


  VAR_47 = VAR_42;







  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_10|VAR_5|VAR_3);
  VAR_34[VAR_42]->s.k = VAR_28->off_linkpl.constant_part + VAR_28->off_nl;
  VAR_42++;

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_16);
  VAR_34[VAR_42]->s.k = VAR_44;
  VAR_42++;

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_10|VAR_5|VAR_3);
  VAR_34[VAR_42]->s.k = VAR_28->off_linkpl.constant_part + VAR_28->off_nl + 1;
  VAR_42++;

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_2|VAR_1|VAR_9);
  VAR_34[VAR_42]->s.k = 1;
  VAR_42++;

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_2|VAR_15|VAR_9);
  VAR_34[VAR_42]->s.k = 8;
  VAR_42++;

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_2|VAR_1|VAR_19);
  VAR_34[VAR_42]->s.k = 0;
  VAR_42++;

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_13|VAR_17);
  VAR_42++;

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_10|VAR_12);
  VAR_34[VAR_42]->s.k = VAR_44;
  VAR_42++;


  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_8|VAR_6);
  VAR_34[VAR_42]->s.k = VAR_40 - VAR_42 - 1;
  VAR_34[VAR_42 - 1]->s.jf = VAR_34[VAR_42];
  VAR_42++;


  for (VAR_48 = VAR_45; VAR_48 <= VAR_46; VAR_48++)
   VAR_34[VAR_48]->s.jt = VAR_34[VAR_47];
 } else {

  VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_2|VAR_1|VAR_9);
  VAR_34[VAR_42]->s.k = 0;
  VAR_34[VAR_35]->s.jf = VAR_34[VAR_42];
  VAR_42++;
 }


 VAR_39 = VAR_42;

 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_8|VAR_7|VAR_9);
 VAR_34[VAR_42]->s.jt = ((void*)0);
 VAR_34[VAR_42]->s.jf = ((void*)0);
 VAR_34[VAR_42]->s.k = VAR_22;
 if (VAR_36)
  VAR_34[VAR_36]->s.jf = VAR_34[VAR_39];
 VAR_37 = VAR_42;
 VAR_42++;







 VAR_34[VAR_42 - 1]->s.jt = VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_13|VAR_18);
 VAR_42++;

 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_10|VAR_5|VAR_3);
 VAR_34[VAR_42]->s.k = VAR_28->off_linkpl.constant_part + VAR_28->off_nl;
 VAR_42++;

 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_16);
 VAR_34[VAR_42]->s.k = VAR_44;
 VAR_42++;

 VAR_34[VAR_42 - 1]->s.jt = VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_13|VAR_18);
 VAR_42++;

 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_2|VAR_1|VAR_9);
 VAR_34[VAR_42]->s.k = 1;
 VAR_42++;

 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_13|VAR_17);
 VAR_42++;

 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_10|VAR_5|VAR_3);
 VAR_34[VAR_42]->s.k = VAR_28->off_linkpl.constant_part + VAR_28->off_nl;
 VAR_42++;

 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_2|VAR_1|VAR_9);
 VAR_34[VAR_42]->s.k = 2;
 VAR_42++;

 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_2|VAR_15|VAR_9);
 VAR_34[VAR_42]->s.k = 4;
 VAR_42++;

 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_13|VAR_17);
 VAR_42++;

 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_10|VAR_12);
 VAR_34[VAR_42]->s.k = VAR_44;
 VAR_42++;


 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_8|VAR_6);
 VAR_34[VAR_42]->s.k = VAR_40 - VAR_42 - 1;
 VAR_42++;


 VAR_41 = VAR_42;
 VAR_34[VAR_42] = FUNC_10(VAR_28, VAR_2|VAR_1|VAR_9);
 VAR_34[VAR_42]->s.k = 0;
 VAR_34[VAR_35]->s.jt = VAR_34[VAR_41];
 VAR_34[VAR_37]->s.jf = VAR_34[VAR_41];
 VAR_34[VAR_38]->s.jt = VAR_34[VAR_41];
 VAR_42++;




 VAR_43 = VAR_42;
 for (VAR_42 = 0; VAR_42 < VAR_43 - 1; VAR_42++)
  VAR_34[VAR_42]->next = VAR_34[VAR_42 + 1];
 VAR_34[VAR_43 - 1]->next = ((void*)0);




 VAR_33 = FUNC_9(VAR_28, FUNC_0(VAR_7));
 VAR_33->stmts = VAR_34[1];
 VAR_33->s.k = VAR_29;

 FUNC_3(VAR_28, VAR_44);

 FUNC_4(VAR_32, VAR_33);
 return VAR_33;

}
