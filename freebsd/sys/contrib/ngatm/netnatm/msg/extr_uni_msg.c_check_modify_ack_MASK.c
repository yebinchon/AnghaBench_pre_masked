
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct uni_modify_ack {int unrec; int * git; int notify; int traffic; int report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_1(struct uni_modify_ack *VAR_6, struct unicx *VAR_7)
{
 int VAR_8 = 0;
 u_int VAR_9;

 VAR_8 |= FUNC_0(VAR_2, (union uni_ieall *)&VAR_6->report, VAR_7);
 VAR_8 |= FUNC_0(VAR_3, (union uni_ieall *)&VAR_6->traffic, VAR_7);
 VAR_8 |= FUNC_0(VAR_1, (union uni_ieall *)&VAR_6->notify, VAR_7);
 for(VAR_9 = 0; VAR_9 < VAR_5 ; VAR_9++) {
  VAR_8 |= FUNC_0(VAR_0, (union uni_ieall *)&VAR_6->git[VAR_9], VAR_7);
 }
 VAR_8 |= FUNC_0(VAR_4, (union uni_ieall *)&VAR_6->unrec, VAR_7);

 return VAR_8;
}
