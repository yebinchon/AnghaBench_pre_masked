
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
struct unicx {int dummy; } ;
struct uni_notify {int unrec; int epref; int notify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_1(struct uni_notify *VAR_3, struct unicx *VAR_4)
{
 int VAR_5 = 0;

 VAR_5 |= FUNC_0(VAR_1, (union uni_ieall *)&VAR_3->notify, VAR_4);
 VAR_5 |= FUNC_0(VAR_0, (union uni_ieall *)&VAR_3->epref, VAR_4);
 VAR_5 |= FUNC_0(VAR_2, (union uni_ieall *)&VAR_3->unrec, VAR_4);

 return VAR_5;
}
