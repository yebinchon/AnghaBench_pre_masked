
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_17__ {int k; } ;
struct slist {TYPE_1__ s; } ;
struct block {int dummy; } ;
struct arth {int regno; struct slist* s; struct block* b; } ;
struct TYPE_16__ {int constant_part; } ;
struct TYPE_18__ {int off_nl; TYPE_12__ off_linkpl; TYPE_12__ off_linkhdr; int linktype; } ;
typedef TYPE_2__ compiler_state_t ;


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
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 struct slist* FUNC_3 (TYPE_2__*,TYPE_12__*) ;
 int FUNC_4 (struct block*,struct block*) ;
 struct block* FUNC_5 (TYPE_2__*,int ,int,int,int) ;
 struct block* FUNC_6 (TYPE_2__*) ;
 struct slist* FUNC_7 (TYPE_2__*) ;
 struct block* FUNC_8 (TYPE_2__*,int const) ;
 struct slist* FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (struct slist*,struct slist*) ;
 struct slist* FUNC_11 (TYPE_2__*,struct arth*) ;
 struct slist* FUNC_12 (TYPE_2__*,struct arth*) ;

struct arth *
FUNC_13(compiler_state_t *VAR_15, int VAR_16, struct arth *VAR_17, int VAR_18)
{
 struct slist *VAR_19, *VAR_20;
 struct block *VAR_21;
 int VAR_22 = FUNC_0(VAR_15);

 FUNC_2(VAR_15, VAR_17->regno);
 switch (VAR_18) {

 default:
  FUNC_1(VAR_15, "data size must be 1, 2, or 4");

 case 1:
  VAR_18 = VAR_2;
  break;

 case 2:
  VAR_18 = VAR_3;
  break;

 case 4:
  VAR_18 = VAR_9;
  break;
 }
 switch (VAR_16) {
 default:
  FUNC_1(VAR_15, "unsupported index operation");

 case 134:





  if (VAR_15->linktype != VAR_12 &&
      VAR_15->linktype != VAR_11 &&
      VAR_15->linktype != VAR_13)
   FUNC_1(VAR_15, "radio information not present in capture");





  VAR_19 = FUNC_12(VAR_15, VAR_17);




  VAR_20 = FUNC_9(VAR_15, VAR_5|VAR_4|VAR_18);
  FUNC_10(VAR_19, VAR_20);
  FUNC_10(VAR_17->s, VAR_19);
  break;

 case 138:
  VAR_19 = FUNC_3(VAR_15, &VAR_15->off_linkhdr);
  if (VAR_19 != ((void*)0)) {
   FUNC_10(VAR_19, FUNC_11(VAR_15, VAR_17));
   FUNC_10(VAR_19, FUNC_9(VAR_15, VAR_1|VAR_0|VAR_10));
   FUNC_10(VAR_19, FUNC_9(VAR_15, VAR_6|VAR_8));
  } else
   VAR_19 = FUNC_12(VAR_15, VAR_17);
  VAR_20 = FUNC_9(VAR_15, VAR_5|VAR_4|VAR_18);
  VAR_20->s.k = VAR_15->off_linkhdr.constant_part;
  FUNC_10(VAR_19, VAR_20);
  FUNC_10(VAR_17->s, VAR_19);
  break;

 case 141:
 case 149:
 case 133:
 case 148:
 case 146:
 case 132:
 case 139:
 case 136:
 case 137:
 case 140:






  VAR_19 = FUNC_3(VAR_15, &VAR_15->off_linkpl);
  if (VAR_19 != ((void*)0)) {
   FUNC_10(VAR_19, FUNC_11(VAR_15, VAR_17));
   FUNC_10(VAR_19, FUNC_9(VAR_15, VAR_1|VAR_0|VAR_10));
   FUNC_10(VAR_19, FUNC_9(VAR_15, VAR_6|VAR_8));
  } else
   VAR_19 = FUNC_12(VAR_15, VAR_17);
  VAR_20 = FUNC_9(VAR_15, VAR_5|VAR_4|VAR_18);
  VAR_20->s.k = VAR_15->off_linkpl.constant_part + VAR_15->off_nl;
  FUNC_10(VAR_19, VAR_20);
  FUNC_10(VAR_17->s, VAR_19);





  VAR_21 = FUNC_8(VAR_15, VAR_16);
  if (VAR_17->b)
   FUNC_4(VAR_17->b, VAR_21);
  VAR_17->b = VAR_21;
  break;

 case 131:
 case 130:
 case 129:
 case 145:
 case 143:
 case 142:
 case 135:
 case 128:
 case 147:
  VAR_19 = FUNC_7(VAR_15);
  FUNC_10(VAR_19, FUNC_11(VAR_15, VAR_17));
  FUNC_10(VAR_19, FUNC_9(VAR_15, VAR_1|VAR_0|VAR_10));
  FUNC_10(VAR_19, FUNC_9(VAR_15, VAR_6|VAR_8));
  FUNC_10(VAR_19, VAR_20 = FUNC_9(VAR_15, VAR_5|VAR_4|VAR_18));
  VAR_20->s.k = VAR_15->off_linkpl.constant_part + VAR_15->off_nl;
  FUNC_10(VAR_17->s, VAR_19);







  FUNC_4(FUNC_8(VAR_15, VAR_16), VAR_21 = FUNC_6(VAR_15));
  if (VAR_17->b)
   FUNC_4(VAR_17->b, VAR_21);
  FUNC_4(FUNC_8(VAR_15, 141), VAR_21);
  VAR_17->b = VAR_21;
  break;
 case 144:




        VAR_21 = FUNC_8(VAR_15, 140);
        if (VAR_17->b) {
            FUNC_4(VAR_17->b, VAR_21);
        }
        VAR_17->b = VAR_21;




        VAR_21 = FUNC_5(VAR_15, VAR_14, 6, VAR_2, 58);
        if (VAR_17->b) {
            FUNC_4(VAR_17->b, VAR_21);
        }
        VAR_17->b = VAR_21;


        VAR_19 = FUNC_3(VAR_15, &VAR_15->off_linkpl);
        if (VAR_19 != ((void*)0)) {
            FUNC_10(VAR_19, FUNC_11(VAR_15, VAR_17));
            FUNC_10(VAR_19, FUNC_9(VAR_15, VAR_1|VAR_0|VAR_10));
            FUNC_10(VAR_19, FUNC_9(VAR_15, VAR_6|VAR_8));
        } else {
            VAR_19 = FUNC_12(VAR_15, VAR_17);
        }
        VAR_20 = FUNC_9(VAR_15, VAR_5|VAR_4|VAR_18);
        VAR_20->s.k = VAR_15->off_linkpl.constant_part + VAR_15->off_nl + 40;

        FUNC_10(VAR_19, VAR_20);
        FUNC_10(VAR_17->s, VAR_19);

        break;
 }
 VAR_17->regno = VAR_22;
 VAR_19 = FUNC_9(VAR_15, VAR_7);
 VAR_19->s.k = VAR_22;
 FUNC_10(VAR_17->s, VAR_19);

 return VAR_17;
}
