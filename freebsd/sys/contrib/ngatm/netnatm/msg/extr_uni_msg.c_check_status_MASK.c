
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
struct unicx {int dummy; } ;
struct uni_status {int unrec; int epstate; int epref; int cause; int callstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_1(struct uni_status *VAR_5, struct unicx *VAR_6)
{
 int VAR_7 = 0;

 VAR_7 |= FUNC_0(VAR_0, (union uni_ieall *)&VAR_5->callstate, VAR_6);
 VAR_7 |= FUNC_0(VAR_1, (union uni_ieall *)&VAR_5->cause, VAR_6);
 VAR_7 |= FUNC_0(VAR_2, (union uni_ieall *)&VAR_5->epref, VAR_6);
 VAR_7 |= FUNC_0(VAR_3, (union uni_ieall *)&VAR_5->epstate, VAR_6);
 VAR_7 |= FUNC_0(VAR_4, (union uni_ieall *)&VAR_5->unrec, VAR_6);

 return VAR_7;
}
