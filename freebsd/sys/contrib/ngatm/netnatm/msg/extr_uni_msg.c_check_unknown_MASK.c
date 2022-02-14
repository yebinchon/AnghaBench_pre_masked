
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
struct unicx {int dummy; } ;
struct uni_unknown {int unrec; int epref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_1(struct uni_unknown *VAR_2, struct unicx *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 |= FUNC_0(VAR_0, (union uni_ieall *)&VAR_2->epref, VAR_3);
 VAR_4 |= FUNC_0(VAR_1, (union uni_ieall *)&VAR_2->unrec, VAR_3);

 return VAR_4;
}
