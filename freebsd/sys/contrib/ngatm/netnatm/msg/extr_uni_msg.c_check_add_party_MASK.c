
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int pnni; } ;
struct uni_add_party {int unrec; int * dtl; int dtl_repeat; int called_soft; int calling_soft; int lij_seqno; int * git; int uu; int eetd; int notify; int epref; int * tns; int scompl; int * callingsub; int calling; int * calledsub; int called; int blli; int bhli; int aal; } ;


 int FUNC_0 (int ) ;
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
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 int FUNC_1 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_2(struct uni_add_party *VAR_25, struct unicx *VAR_26)
{
 int VAR_27 = 0;
 u_int VAR_28;

 VAR_27 |= FUNC_1(VAR_0, (union uni_ieall *)&VAR_25->aal, VAR_26);
 VAR_27 |= FUNC_1(VAR_1, (union uni_ieall *)&VAR_25->bhli, VAR_26);
 VAR_27 |= FUNC_1(VAR_2, (union uni_ieall *)&VAR_25->blli, VAR_26);
 VAR_27 |= FUNC_1(VAR_3, (union uni_ieall *)&VAR_25->called, VAR_26);
 for(VAR_28 = 0; VAR_28 < VAR_20 ; VAR_28++) {
  VAR_27 |= FUNC_1(VAR_4, (union uni_ieall *)&VAR_25->calledsub[VAR_28], VAR_26);
 }
 VAR_27 |= FUNC_1(VAR_6, (union uni_ieall *)&VAR_25->calling, VAR_26);
 for(VAR_28 = 0; VAR_28 < VAR_21 ; VAR_28++) {
  VAR_27 |= FUNC_1(VAR_7, (union uni_ieall *)&VAR_25->callingsub[VAR_28], VAR_26);
 }
 if(!(!VAR_26->pnni))
  VAR_27 |= FUNC_0(VAR_25->scompl);
 else
  VAR_27 |= FUNC_1(VAR_16, (union uni_ieall *)&VAR_25->scompl, VAR_26);
 for(VAR_28 = 0; VAR_28 < VAR_24 ; VAR_28++) {
  VAR_27 |= FUNC_1(VAR_17, (union uni_ieall *)&VAR_25->tns[VAR_28], VAR_26);
 }
 VAR_27 |= FUNC_1(VAR_11, (union uni_ieall *)&VAR_25->epref, VAR_26);
 VAR_27 |= FUNC_1(VAR_14, (union uni_ieall *)&VAR_25->notify, VAR_26);
 VAR_27 |= FUNC_1(VAR_10, (union uni_ieall *)&VAR_25->eetd, VAR_26);
 if(!(!VAR_26->pnni))
  VAR_27 |= FUNC_0(VAR_25->uu);
 else
  VAR_27 |= FUNC_1(VAR_19, (union uni_ieall *)&VAR_25->uu, VAR_26);
 for(VAR_28 = 0; VAR_28 < VAR_23 ; VAR_28++) {
  VAR_27 |= FUNC_1(VAR_12, (union uni_ieall *)&VAR_25->git[VAR_28], VAR_26);
 }
 if(!(!VAR_26->pnni))
  VAR_27 |= FUNC_0(VAR_25->lij_seqno);
 else
  VAR_27 |= FUNC_1(VAR_13, (union uni_ieall *)&VAR_25->lij_seqno, VAR_26);
 if(!(VAR_26->pnni))
  VAR_27 |= FUNC_0(VAR_25->calling_soft);
 else
  VAR_27 |= FUNC_1(VAR_8, (union uni_ieall *)&VAR_25->calling_soft, VAR_26);
 if(!(VAR_26->pnni))
  VAR_27 |= FUNC_0(VAR_25->called_soft);
 else
  VAR_27 |= FUNC_1(VAR_5, (union uni_ieall *)&VAR_25->called_soft, VAR_26);
 if(!(VAR_26->pnni))
  VAR_27 |= FUNC_0(VAR_25->dtl_repeat);
 else
  VAR_27 |= FUNC_1(VAR_15, (union uni_ieall *)&VAR_25->dtl_repeat, VAR_26);
 for(VAR_28 = 0; VAR_28 < VAR_22 ; VAR_28++) {
  if(!(VAR_26->pnni))
   VAR_27 |= FUNC_0(VAR_25->dtl[VAR_28]);
  else
   VAR_27 |= FUNC_1(VAR_9, (union uni_ieall *)&VAR_25->dtl[VAR_28], VAR_26);
 }
 VAR_27 |= FUNC_1(VAR_18, (union uni_ieall *)&VAR_25->unrec, VAR_26);

 return VAR_27;
}
