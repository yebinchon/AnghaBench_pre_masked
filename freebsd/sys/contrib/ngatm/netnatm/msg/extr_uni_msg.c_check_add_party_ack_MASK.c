
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int pnni; } ;
struct uni_add_party_ack {int unrec; int called_soft; int * git; int uu; int connedsub; int conned; int eetd; int notify; int blli; int aal; int epref; } ;


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
 size_t VAR_11 ;
 int FUNC_1 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_2(struct uni_add_party_ack *VAR_12, struct unicx *VAR_13)
{
 int VAR_14 = 0;
 u_int VAR_15;

 VAR_14 |= FUNC_1(VAR_6, (union uni_ieall *)&VAR_12->epref, VAR_13);
 VAR_14 |= FUNC_1(VAR_0, (union uni_ieall *)&VAR_12->aal, VAR_13);
 VAR_14 |= FUNC_1(VAR_1, (union uni_ieall *)&VAR_12->blli, VAR_13);
 VAR_14 |= FUNC_1(VAR_8, (union uni_ieall *)&VAR_12->notify, VAR_13);
 VAR_14 |= FUNC_1(VAR_5, (union uni_ieall *)&VAR_12->eetd, VAR_13);
 VAR_14 |= FUNC_1(VAR_3, (union uni_ieall *)&VAR_12->conned, VAR_13);
 VAR_14 |= FUNC_1(VAR_4, (union uni_ieall *)&VAR_12->connedsub, VAR_13);
 if(!(!VAR_13->pnni))
  VAR_14 |= FUNC_0(VAR_12->uu);
 else
  VAR_14 |= FUNC_1(VAR_10, (union uni_ieall *)&VAR_12->uu, VAR_13);
 for(VAR_15 = 0; VAR_15 < VAR_11 ; VAR_15++) {
  VAR_14 |= FUNC_1(VAR_7, (union uni_ieall *)&VAR_12->git[VAR_15], VAR_13);
 }
 if(!(VAR_13->pnni))
  VAR_14 |= FUNC_0(VAR_12->called_soft);
 else
  VAR_14 |= FUNC_1(VAR_2, (union uni_ieall *)&VAR_12->called_soft, VAR_13);
 VAR_14 |= FUNC_1(VAR_9, (union uni_ieall *)&VAR_12->unrec, VAR_13);

 return VAR_14;
}
