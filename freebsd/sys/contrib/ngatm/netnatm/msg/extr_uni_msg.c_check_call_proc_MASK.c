
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
struct unicx {int pnni; } ;
struct uni_call_proc {int unrec; int notify; int epref; int connid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_2(struct uni_call_proc *VAR_4, struct unicx *VAR_5)
{
 int VAR_6 = 0;

 VAR_6 |= FUNC_1(VAR_0, (union uni_ieall *)&VAR_4->connid, VAR_5);
 VAR_6 |= FUNC_1(VAR_1, (union uni_ieall *)&VAR_4->epref, VAR_5);
 if(!(!VAR_5->pnni))
  VAR_6 |= FUNC_0(VAR_4->notify);
 else
  VAR_6 |= FUNC_1(VAR_2, (union uni_ieall *)&VAR_4->notify, VAR_5);
 VAR_6 |= FUNC_1(VAR_3, (union uni_ieall *)&VAR_4->unrec, VAR_5);

 return VAR_6;
}
