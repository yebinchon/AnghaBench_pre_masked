
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int pnni; int q2932; } ;
struct uni_connect {int unrec; int report; int called_soft; int abradd; int abrsetup; int facility; int exqos; int traffic; int uu; int * git; int eetd; int connedsub; int conned; int notify; int epref; int connid; int blli; int aal; } ;


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
 size_t VAR_18 ;
 int FUNC_1 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_2(struct uni_connect *VAR_19, struct unicx *VAR_20)
{
 int VAR_21 = 0;
 u_int VAR_22;

 VAR_21 |= FUNC_1(VAR_0, (union uni_ieall *)&VAR_19->aal, VAR_20);
 VAR_21 |= FUNC_1(VAR_3, (union uni_ieall *)&VAR_19->blli, VAR_20);
 if(!(!VAR_20->pnni))
  VAR_21 |= FUNC_0(VAR_19->connid);
 else
  VAR_21 |= FUNC_1(VAR_7, (union uni_ieall *)&VAR_19->connid, VAR_20);
 VAR_21 |= FUNC_1(VAR_9, (union uni_ieall *)&VAR_19->epref, VAR_20);
 VAR_21 |= FUNC_1(VAR_13, (union uni_ieall *)&VAR_19->notify, VAR_20);
 VAR_21 |= FUNC_1(VAR_5, (union uni_ieall *)&VAR_19->conned, VAR_20);
 VAR_21 |= FUNC_1(VAR_6, (union uni_ieall *)&VAR_19->connedsub, VAR_20);
 VAR_21 |= FUNC_1(VAR_8, (union uni_ieall *)&VAR_19->eetd, VAR_20);
 for(VAR_22 = 0; VAR_22 < VAR_18 ; VAR_22++) {
  VAR_21 |= FUNC_1(VAR_12, (union uni_ieall *)&VAR_19->git[VAR_22], VAR_20);
 }
 if(!(!VAR_20->pnni))
  VAR_21 |= FUNC_0(VAR_19->uu);
 else
  VAR_21 |= FUNC_1(VAR_17, (union uni_ieall *)&VAR_19->uu, VAR_20);
 VAR_21 |= FUNC_1(VAR_15, (union uni_ieall *)&VAR_19->traffic, VAR_20);
 VAR_21 |= FUNC_1(VAR_10, (union uni_ieall *)&VAR_19->exqos, VAR_20);
 if(!(VAR_20->q2932))
  VAR_21 |= FUNC_0(VAR_19->facility);
 else
  VAR_21 |= FUNC_1(VAR_11, (union uni_ieall *)&VAR_19->facility, VAR_20);
 VAR_21 |= FUNC_1(VAR_2, (union uni_ieall *)&VAR_19->abrsetup, VAR_20);
 VAR_21 |= FUNC_1(VAR_1, (union uni_ieall *)&VAR_19->abradd, VAR_20);
 if(!(VAR_20->pnni))
  VAR_21 |= FUNC_0(VAR_19->called_soft);
 else
  VAR_21 |= FUNC_1(VAR_4, (union uni_ieall *)&VAR_19->called_soft, VAR_20);
 if(!(!VAR_20->pnni))
  VAR_21 |= FUNC_0(VAR_19->report);
 else
  VAR_21 |= FUNC_1(VAR_14, (union uni_ieall *)&VAR_19->report, VAR_20);
 VAR_21 |= FUNC_1(VAR_16, (union uni_ieall *)&VAR_19->unrec, VAR_20);

 return VAR_21;
}
