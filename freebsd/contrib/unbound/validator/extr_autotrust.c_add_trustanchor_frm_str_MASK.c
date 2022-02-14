
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_anchors {int dummy; } ;
struct trust_anchor {int dummy; } ;
struct autr_ta {int dummy; } ;
typedef int rr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 struct autr_ta* FUNC_1 (struct val_anchors*,int *,size_t,size_t,struct trust_anchor**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (int *,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int *,size_t*,size_t*,int ,int *,size_t,int *,size_t) ;
 scalar_t__ FUNC_7 (int *,size_t,size_t) ;
 int FUNC_8 (char*,char) ;

__attribute__((used)) static struct autr_ta*
FUNC_9(struct val_anchors* VAR_3, char* VAR_4,
 struct trust_anchor** VAR_5, uint8_t* VAR_6, size_t VAR_7,
 uint8_t** VAR_8, size_t* VAR_9, int* VAR_10)
{
 uint8_t VAR_11[VAR_0];
 size_t VAR_12 = sizeof(VAR_11), VAR_13;
 uint8_t* VAR_14;
 int VAR_15;
        if (!FUNC_8(VAR_4, ';')) {
  *VAR_10 = 1;
                return ((void*)0);
 }
 if(0 != (VAR_15 = FUNC_6(VAR_4, VAR_11, &VAR_12, &VAR_13,
  0, VAR_6, VAR_7, *VAR_8, *VAR_9)))
 {
  FUNC_3("ldns error while converting string to RR at%d: %s: %s",
   FUNC_0(VAR_15),
   FUNC_5(VAR_15), VAR_4);
  return ((void*)0);
 }
 FUNC_2(*VAR_8);
 *VAR_8 = FUNC_4(VAR_11, VAR_13);
 *VAR_9 = VAR_13;
 if(!*VAR_8) {
  FUNC_3("malloc failure in add_trustanchor");
  return ((void*)0);
 }
 if(FUNC_7(VAR_11, VAR_12, VAR_13)!=VAR_1 &&
  FUNC_7(VAR_11, VAR_12, VAR_13)!=VAR_2) {
  *VAR_10 = 1;
  return ((void*)0);
 }
 VAR_14 = FUNC_4(VAR_11, VAR_12);
 if(!VAR_14) {
  FUNC_3("malloc failure in add trustanchor");
  return ((void*)0);
 }
 return FUNC_1(VAR_3, VAR_14, VAR_12, VAR_13, VAR_5);
}
