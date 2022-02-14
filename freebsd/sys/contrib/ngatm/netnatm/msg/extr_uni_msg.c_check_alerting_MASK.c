
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int pnni; } ;
struct uni_alerting {int unrec; int report; int uu; int * git; int notify; int epref; int connid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_2(struct uni_alerting *VAR_8, struct unicx *VAR_9)
{
 int VAR_10 = 0;
 u_int VAR_11;

 if(!(!VAR_9->pnni))
  VAR_10 |= FUNC_0(VAR_8->connid);
 else
  VAR_10 |= FUNC_1(VAR_0, (union uni_ieall *)&VAR_8->connid, VAR_9);
 VAR_10 |= FUNC_1(VAR_1, (union uni_ieall *)&VAR_8->epref, VAR_9);
 VAR_10 |= FUNC_1(VAR_3, (union uni_ieall *)&VAR_8->notify, VAR_9);
 for(VAR_11 = 0; VAR_11 < VAR_7 ; VAR_11++) {
  VAR_10 |= FUNC_1(VAR_2, (union uni_ieall *)&VAR_8->git[VAR_11], VAR_9);
 }
 if(!(!VAR_9->pnni))
  VAR_10 |= FUNC_0(VAR_8->uu);
 else
  VAR_10 |= FUNC_1(VAR_6, (union uni_ieall *)&VAR_8->uu, VAR_9);
 if(!(!VAR_9->pnni))
  VAR_10 |= FUNC_0(VAR_8->report);
 else
  VAR_10 |= FUNC_1(VAR_4, (union uni_ieall *)&VAR_8->report, VAR_9);
 VAR_10 |= FUNC_1(VAR_5, (union uni_ieall *)&VAR_8->unrec, VAR_9);

 return VAR_10;
}
