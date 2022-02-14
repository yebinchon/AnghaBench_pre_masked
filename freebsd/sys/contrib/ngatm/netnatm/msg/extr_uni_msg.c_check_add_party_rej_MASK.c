
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int pnni; } ;
struct uni_add_party_rej {int unrec; int crankback; int * git; int uu; int epref; int cause; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_2(struct uni_add_party_rej *VAR_7, struct unicx *VAR_8)
{
 int VAR_9 = 0;
 u_int VAR_10;

 VAR_9 |= FUNC_1(VAR_0, (union uni_ieall *)&VAR_7->cause, VAR_8);
 VAR_9 |= FUNC_1(VAR_2, (union uni_ieall *)&VAR_7->epref, VAR_8);
 if(!(!VAR_8->pnni))
  VAR_9 |= FUNC_0(VAR_7->uu);
 else
  VAR_9 |= FUNC_1(VAR_5, (union uni_ieall *)&VAR_7->uu, VAR_8);
 for(VAR_10 = 0; VAR_10 < VAR_6 ; VAR_10++) {
  VAR_9 |= FUNC_1(VAR_3, (union uni_ieall *)&VAR_7->git[VAR_10], VAR_8);
 }
 if(!(VAR_8->pnni))
  VAR_9 |= FUNC_0(VAR_7->crankback);
 else
  VAR_9 |= FUNC_1(VAR_1, (union uni_ieall *)&VAR_7->crankback, VAR_8);
 VAR_9 |= FUNC_1(VAR_4, (union uni_ieall *)&VAR_7->unrec, VAR_8);

 return VAR_9;
}
