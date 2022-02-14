
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct uni_leaf_setup_fail {int unrec; int * tns; int lij_seqno; int calledsub; int called; int cause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_1(struct uni_leaf_setup_fail *VAR_7, struct unicx *VAR_8)
{
 int VAR_9 = 0;
 u_int VAR_10;

 VAR_9 |= FUNC_0(VAR_2, (union uni_ieall *)&VAR_7->cause, VAR_8);
 VAR_9 |= FUNC_0(VAR_0, (union uni_ieall *)&VAR_7->called, VAR_8);
 VAR_9 |= FUNC_0(VAR_1, (union uni_ieall *)&VAR_7->calledsub, VAR_8);
 VAR_9 |= FUNC_0(VAR_3, (union uni_ieall *)&VAR_7->lij_seqno, VAR_8);
 for(VAR_10 = 0; VAR_10 < VAR_6 ; VAR_10++) {
  VAR_9 |= FUNC_0(VAR_4, (union uni_ieall *)&VAR_7->tns[VAR_10], VAR_8);
 }
 VAR_9 |= FUNC_0(VAR_5, (union uni_ieall *)&VAR_7->unrec, VAR_8);

 return VAR_9;
}
