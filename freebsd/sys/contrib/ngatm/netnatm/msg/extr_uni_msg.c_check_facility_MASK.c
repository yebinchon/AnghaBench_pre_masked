
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
struct unicx {int dummy; } ;
struct uni_facility {int unrec; int notify; int calling; int calledsub; int called; int facility; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_1(struct uni_facility *VAR_6, struct unicx *VAR_7)
{
 int VAR_8 = 0;

 VAR_8 |= FUNC_0(VAR_3, (union uni_ieall *)&VAR_6->facility, VAR_7);
 VAR_8 |= FUNC_0(VAR_0, (union uni_ieall *)&VAR_6->called, VAR_7);
 VAR_8 |= FUNC_0(VAR_1, (union uni_ieall *)&VAR_6->calledsub, VAR_7);
 VAR_8 |= FUNC_0(VAR_2, (union uni_ieall *)&VAR_6->calling, VAR_7);
 VAR_8 |= FUNC_0(VAR_4, (union uni_ieall *)&VAR_6->notify, VAR_7);
 VAR_8 |= FUNC_0(VAR_5, (union uni_ieall *)&VAR_6->unrec, VAR_7);

 return VAR_8;
}
