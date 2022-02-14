
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int pnni; } ;
struct uni_setup {int unrec; int mdcr; int report; int * dtl; int dtl_repeat; int called_soft; int calling_soft; int cscope; int abradd; int abrsetup; int exqos; int lij_seqno; int lij_param; int lij_callid; int * git; int uu; int mintraffic; int atraffic; int epref; int * tns; int scompl; int notify; int eetd; int qos; int connid; int * callingsub; int calling; int * calledsub; int called; int * blli; int blli_repeat; int bhli; int bearer; int traffic; int aal; } ;


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
 int VAR_32 ;
 int VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 int FUNC_1 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_2(struct uni_setup *VAR_40, struct unicx *VAR_41)
{
 int VAR_42 = 0;
 u_int VAR_43;

 VAR_42 |= FUNC_1(VAR_0, (union uni_ieall *)&VAR_40->aal, VAR_41);
 VAR_42 |= FUNC_1(VAR_31, (union uni_ieall *)&VAR_40->traffic, VAR_41);
 VAR_42 |= FUNC_1(VAR_4, (union uni_ieall *)&VAR_40->bearer, VAR_41);
 VAR_42 |= FUNC_1(VAR_5, (union uni_ieall *)&VAR_40->bhli, VAR_41);
 VAR_42 |= FUNC_1(VAR_27, (union uni_ieall *)&VAR_40->blli_repeat, VAR_41);
 for(VAR_43 = 0; VAR_43 < VAR_34 ; VAR_43++) {
  VAR_42 |= FUNC_1(VAR_6, (union uni_ieall *)&VAR_40->blli[VAR_43], VAR_41);
 }
 VAR_42 |= FUNC_1(VAR_7, (union uni_ieall *)&VAR_40->called, VAR_41);
 for(VAR_43 = 0; VAR_43 < VAR_35 ; VAR_43++) {
  VAR_42 |= FUNC_1(VAR_8, (union uni_ieall *)&VAR_40->calledsub[VAR_43], VAR_41);
 }
 VAR_42 |= FUNC_1(VAR_10, (union uni_ieall *)&VAR_40->calling, VAR_41);
 for(VAR_43 = 0; VAR_43 < VAR_36 ; VAR_43++) {
  VAR_42 |= FUNC_1(VAR_11, (union uni_ieall *)&VAR_40->callingsub[VAR_43], VAR_41);
 }
 VAR_42 |= FUNC_1(VAR_13, (union uni_ieall *)&VAR_40->connid, VAR_41);
 VAR_42 |= FUNC_1(VAR_26, (union uni_ieall *)&VAR_40->qos, VAR_41);
 VAR_42 |= FUNC_1(VAR_16, (union uni_ieall *)&VAR_40->eetd, VAR_41);
 VAR_42 |= FUNC_1(VAR_25, (union uni_ieall *)&VAR_40->notify, VAR_41);
 if(!(!VAR_41->pnni))
  VAR_42 |= FUNC_0(VAR_40->scompl);
 else
  VAR_42 |= FUNC_1(VAR_29, (union uni_ieall *)&VAR_40->scompl, VAR_41);
 for(VAR_43 = 0; VAR_43 < VAR_39 ; VAR_43++) {
  VAR_42 |= FUNC_1(VAR_30, (union uni_ieall *)&VAR_40->tns[VAR_43], VAR_41);
 }
 VAR_42 |= FUNC_1(VAR_17, (union uni_ieall *)&VAR_40->epref, VAR_41);
 VAR_42 |= FUNC_1(VAR_3, (union uni_ieall *)&VAR_40->atraffic, VAR_41);
 VAR_42 |= FUNC_1(VAR_24, (union uni_ieall *)&VAR_40->mintraffic, VAR_41);
 if(!(!VAR_41->pnni))
  VAR_42 |= FUNC_0(VAR_40->uu);
 else
  VAR_42 |= FUNC_1(VAR_33, (union uni_ieall *)&VAR_40->uu, VAR_41);
 for(VAR_43 = 0; VAR_43 < VAR_38 ; VAR_43++) {
  VAR_42 |= FUNC_1(VAR_19, (union uni_ieall *)&VAR_40->git[VAR_43], VAR_41);
 }
 if(!(!VAR_41->pnni))
  VAR_42 |= FUNC_0(VAR_40->lij_callid);
 else
  VAR_42 |= FUNC_1(VAR_20, (union uni_ieall *)&VAR_40->lij_callid, VAR_41);
 if(!(!VAR_41->pnni))
  VAR_42 |= FUNC_0(VAR_40->lij_param);
 else
  VAR_42 |= FUNC_1(VAR_21, (union uni_ieall *)&VAR_40->lij_param, VAR_41);
 if(!(!VAR_41->pnni))
  VAR_42 |= FUNC_0(VAR_40->lij_seqno);
 else
  VAR_42 |= FUNC_1(VAR_22, (union uni_ieall *)&VAR_40->lij_seqno, VAR_41);
 VAR_42 |= FUNC_1(VAR_18, (union uni_ieall *)&VAR_40->exqos, VAR_41);
 VAR_42 |= FUNC_1(VAR_2, (union uni_ieall *)&VAR_40->abrsetup, VAR_41);
 VAR_42 |= FUNC_1(VAR_1, (union uni_ieall *)&VAR_40->abradd, VAR_41);
 VAR_42 |= FUNC_1(VAR_14, (union uni_ieall *)&VAR_40->cscope, VAR_41);
 if(!(VAR_41->pnni))
  VAR_42 |= FUNC_0(VAR_40->calling_soft);
 else
  VAR_42 |= FUNC_1(VAR_12, (union uni_ieall *)&VAR_40->calling_soft, VAR_41);
 if(!(VAR_41->pnni))
  VAR_42 |= FUNC_0(VAR_40->called_soft);
 else
  VAR_42 |= FUNC_1(VAR_9, (union uni_ieall *)&VAR_40->called_soft, VAR_41);
 if(!(VAR_41->pnni))
  VAR_42 |= FUNC_0(VAR_40->dtl_repeat);
 else
  VAR_42 |= FUNC_1(VAR_27, (union uni_ieall *)&VAR_40->dtl_repeat, VAR_41);
 for(VAR_43 = 0; VAR_43 < VAR_37 ; VAR_43++) {
  if(!(VAR_41->pnni))
   VAR_42 |= FUNC_0(VAR_40->dtl[VAR_43]);
  else
   VAR_42 |= FUNC_1(VAR_15, (union uni_ieall *)&VAR_40->dtl[VAR_43], VAR_41);
 }
 if(!(!VAR_41->pnni))
  VAR_42 |= FUNC_0(VAR_40->report);
 else
  VAR_42 |= FUNC_1(VAR_28, (union uni_ieall *)&VAR_40->report, VAR_41);
 VAR_42 |= FUNC_1(VAR_23, (union uni_ieall *)&VAR_40->mdcr, VAR_41);
 VAR_42 |= FUNC_1(VAR_32, (union uni_ieall *)&VAR_40->unrec, VAR_41);

 return VAR_42;
}
