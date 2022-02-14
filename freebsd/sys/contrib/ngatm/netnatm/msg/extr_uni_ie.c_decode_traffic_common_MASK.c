
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct uni_xtraffic {int ftag; int btag; int fdisc; int bdisc; } ;
struct uni_msg {int* b_rptr; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
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

 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

__attribute__((used)) static int
FUNC_1(struct uni_xtraffic *VAR_32, struct uni_msg *VAR_33,
    u_int VAR_34, u_int *VAR_35)
{
 u_char VAR_36;

 while(VAR_34--) {
  switch(VAR_36 = *VAR_33->b_rptr++) {

    default:
    rej:
   return -1;

    FUNC_0(VAR_9, VAR_28, *VAR_35);
    FUNC_0(VAR_3, VAR_22, *VAR_35);
    FUNC_0(VAR_10, VAR_29, *VAR_35);
    FUNC_0(VAR_4, VAR_23, *VAR_35);
    FUNC_0(VAR_11, VAR_30, *VAR_35);
    FUNC_0(VAR_5, VAR_24, *VAR_35);
    FUNC_0(VAR_12, VAR_31, *VAR_35);
    FUNC_0(VAR_6, VAR_25, *VAR_35);
    FUNC_0(VAR_8, VAR_27, *VAR_35);
    FUNC_0(VAR_1, VAR_20, *VAR_35);
    FUNC_0(VAR_2, VAR_21, *VAR_35);
    FUNC_0(VAR_7, VAR_26, *VAR_35);
    FUNC_0(VAR_0, VAR_19, *VAR_35);

    case 129:
   *VAR_35 |= VAR_14;
   break;

    case 128:
   if(VAR_34 == 0)
    return -1;
   VAR_34--;
   if(!(*VAR_35 & VAR_18)) {
    *VAR_35 |= VAR_18;
    VAR_32->ftag = (*VAR_33->b_rptr&VAR_17)?1:0;
    VAR_32->btag = (*VAR_33->b_rptr&VAR_15)?1:0;
    VAR_32->fdisc = (*VAR_33->b_rptr&VAR_16)?1:0;
    VAR_32->bdisc = (*VAR_33->b_rptr&VAR_13)?1:0;
   }
   VAR_33->b_rptr++;
   break;
  }
 }
 return 0;
}
