
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct uni_conn_avail {int unrec; int report; int * git; int notify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_1(struct uni_conn_avail *VAR_5, struct unicx *VAR_6)
{
 int VAR_7 = 0;
 u_int VAR_8;

 VAR_7 |= FUNC_0(VAR_1, (union uni_ieall *)&VAR_5->notify, VAR_6);
 for(VAR_8 = 0; VAR_8 < VAR_4 ; VAR_8++) {
  VAR_7 |= FUNC_0(VAR_0, (union uni_ieall *)&VAR_5->git[VAR_8], VAR_6);
 }
 VAR_7 |= FUNC_0(VAR_2, (union uni_ieall *)&VAR_5->report, VAR_6);
 VAR_7 |= FUNC_0(VAR_3, (union uni_ieall *)&VAR_5->unrec, VAR_6);

 return VAR_7;
}
