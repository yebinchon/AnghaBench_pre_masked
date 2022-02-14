
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct slist {int dummy; } ;
struct TYPE_13__ {int k; } ;
struct block {struct slist* stmts; TYPE_1__ s; } ;
struct TYPE_14__ {int linktype; } ;
typedef TYPE_2__ compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;



 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 struct block* FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (struct block*,struct block*) ;
 struct block* FUNC_4 (TYPE_2__*,int ,int,int ,int ) ;
 struct block* FUNC_5 (TYPE_2__*,int ,int,int ,int ) ;
 struct block* FUNC_6 (TYPE_2__*,int ) ;
 struct slist* FUNC_7 (TYPE_2__*,int ,int,int ) ;
 struct block* FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (struct block*) ;
 int FUNC_10 (struct block*,struct block*) ;
 struct block* FUNC_11 (TYPE_2__*) ;
 struct block* FUNC_12 (TYPE_2__*,int ) ;

struct block *
FUNC_13(compiler_state_t *VAR_8, int VAR_9)
{
 register struct block *VAR_10, *VAR_11, *VAR_12;
 register struct slist *VAR_13;

 switch (VAR_9) {

 case 131:
 case 128:
  switch (VAR_8->linktype) {
  case 144:
  case 143:

   return FUNC_2(VAR_8, VAR_7, VAR_6);
  case 142:
  case 135:
  case 134:
   VAR_11 = FUNC_11(VAR_8);

   VAR_10 = FUNC_8(VAR_8, 0);
   if (VAR_11 != ((void*)0))
    FUNC_3(VAR_11, VAR_10);
   return VAR_10;
  case 141:






   return FUNC_8(VAR_8, 1);
  case 140:

   return FUNC_8(VAR_8, 2);
  case 139:
  case 132:
  case 137:
  case 138:
  case 133:
   VAR_13 = FUNC_7(VAR_8, VAR_4, 1, VAR_0);
   VAR_11 = FUNC_12(VAR_8, FUNC_0(VAR_1));
   VAR_11->s.k = 0x01;
   VAR_11->stmts = VAR_13;




   VAR_10 = FUNC_8(VAR_8, 16);
   FUNC_3(VAR_11, VAR_10);





   VAR_13 = FUNC_7(VAR_8, VAR_4, 1, VAR_0);
   VAR_12 = FUNC_12(VAR_8, FUNC_0(VAR_1));
   VAR_12->s.k = 0x01;
   VAR_12->stmts = VAR_13;
   FUNC_9(VAR_12);




   VAR_11 = FUNC_8(VAR_8, 4);
   FUNC_3(VAR_12, VAR_11);





   FUNC_10(VAR_11, VAR_10);





   VAR_13 = FUNC_7(VAR_8, VAR_4, 0, VAR_0);
   VAR_11 = FUNC_12(VAR_8, FUNC_0(VAR_1));
   VAR_11->s.k = 0x08;
   VAR_11->stmts = VAR_13;




   FUNC_3(VAR_11, VAR_10);






   VAR_13 = FUNC_7(VAR_8, VAR_4, 0, VAR_0);
   VAR_12 = FUNC_12(VAR_8, FUNC_0(VAR_1));
   VAR_12->s.k = 0x08;
   VAR_12->stmts = VAR_13;
   FUNC_9(VAR_12);




   VAR_11 = FUNC_8(VAR_8, 4);
   FUNC_3(VAR_12, VAR_11);






   FUNC_10(VAR_11, VAR_10);
   VAR_13 = FUNC_7(VAR_8, VAR_4, 0, VAR_0);
   VAR_11 = FUNC_12(VAR_8, FUNC_0(VAR_1));
   VAR_11->s.k = 0x04;
   VAR_11->stmts = VAR_13;
   FUNC_9(VAR_11);





   FUNC_3(VAR_11, VAR_10);
   return VAR_10;
  case 136:
   VAR_10 = FUNC_8(VAR_8, 2);
   return VAR_10;
  default:
   break;
  }

  break;

 case 130:
  VAR_10 = FUNC_6(VAR_8, VAR_2);
  VAR_11 = FUNC_5(VAR_8, VAR_5, 16, VAR_0, (bpf_int32)224);
  FUNC_3(VAR_10, VAR_11);
  return VAR_11;

 case 129:
  VAR_10 = FUNC_6(VAR_8, VAR_3);
  VAR_11 = FUNC_4(VAR_8, VAR_5, 24, VAR_0, (bpf_int32)255);
  FUNC_3(VAR_10, VAR_11);
  return VAR_11;
 }
 FUNC_1(VAR_8, "link-layer multicast filters supported only on ethernet/FDDI/token ring/ARCNET/802.11/ATM LANE/Fibre Channel");

}
