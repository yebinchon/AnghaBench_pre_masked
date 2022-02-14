
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct uni_modify_req {int unrec; int * git; int notify; int mintraffic; int atraffic; int traffic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_1(struct uni_modify_req *VAR_7, struct unicx *VAR_8)
{
 int VAR_9 = 0;
 u_int VAR_10;

 VAR_9 |= FUNC_0(VAR_4, (union uni_ieall *)&VAR_7->traffic, VAR_8);
 VAR_9 |= FUNC_0(VAR_0, (union uni_ieall *)&VAR_7->atraffic, VAR_8);
 VAR_9 |= FUNC_0(VAR_2, (union uni_ieall *)&VAR_7->mintraffic, VAR_8);
 VAR_9 |= FUNC_0(VAR_3, (union uni_ieall *)&VAR_7->notify, VAR_8);
 for(VAR_10 = 0; VAR_10 < VAR_6 ; VAR_10++) {
  VAR_9 |= FUNC_0(VAR_1, (union uni_ieall *)&VAR_7->git[VAR_10], VAR_8);
 }
 VAR_9 |= FUNC_0(VAR_5, (union uni_ieall *)&VAR_7->unrec, VAR_8);

 return VAR_9;
}
