
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef int u_int ;
struct unicx {int pnni; } ;
struct uni_release_compl {int unrec; int crankback; int uu; int * git; int * cause; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_2(struct uni_release_compl *VAR_6, struct unicx *VAR_7)
{
 int VAR_8 = 0;
 u_int VAR_9;

 for(VAR_9 = 0; VAR_9 < 2 ; VAR_9++) {
  VAR_8 |= FUNC_1(VAR_0, (union uni_ieall *)&VAR_6->cause[VAR_9], VAR_7);
 }
 for(VAR_9 = 0; VAR_9 < VAR_5 ; VAR_9++) {
  if(!(!VAR_7->pnni))
   VAR_8 |= FUNC_0(VAR_6->git[VAR_9]);
  else
   VAR_8 |= FUNC_1(VAR_2, (union uni_ieall *)&VAR_6->git[VAR_9], VAR_7);
 }
 if(!(!VAR_7->pnni))
  VAR_8 |= FUNC_0(VAR_6->uu);
 else
  VAR_8 |= FUNC_1(VAR_4, (union uni_ieall *)&VAR_6->uu, VAR_7);
 if(!(VAR_7->pnni))
  VAR_8 |= FUNC_0(VAR_6->crankback);
 else
  VAR_8 |= FUNC_1(VAR_1, (union uni_ieall *)&VAR_6->crankback, VAR_7);
 VAR_8 |= FUNC_1(VAR_3, (union uni_ieall *)&VAR_6->unrec, VAR_7);

 return VAR_8;
}
