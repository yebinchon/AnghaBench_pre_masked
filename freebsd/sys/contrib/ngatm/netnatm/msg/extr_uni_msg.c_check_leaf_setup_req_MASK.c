
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct uni_leaf_setup_req {int unrec; int lij_seqno; int lij_callid; int * calledsub; int called; int * callingsub; int calling; int * tns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static int
FUNC_1(struct uni_leaf_setup_req *VAR_11, struct unicx *VAR_12)
{
 int VAR_13 = 0;
 u_int VAR_14;

 for(VAR_14 = 0; VAR_14 < VAR_10 ; VAR_14++) {
  VAR_13 |= FUNC_0(VAR_6, (union uni_ieall *)&VAR_11->tns[VAR_14], VAR_12);
 }
 VAR_13 |= FUNC_0(VAR_2, (union uni_ieall *)&VAR_11->calling, VAR_12);
 for(VAR_14 = 0; VAR_14 < VAR_9 ; VAR_14++) {
  VAR_13 |= FUNC_0(VAR_3, (union uni_ieall *)&VAR_11->callingsub[VAR_14], VAR_12);
 }
 VAR_13 |= FUNC_0(VAR_0, (union uni_ieall *)&VAR_11->called, VAR_12);
 for(VAR_14 = 0; VAR_14 < VAR_8 ; VAR_14++) {
  VAR_13 |= FUNC_0(VAR_1, (union uni_ieall *)&VAR_11->calledsub[VAR_14], VAR_12);
 }
 VAR_13 |= FUNC_0(VAR_4, (union uni_ieall *)&VAR_11->lij_callid, VAR_12);
 VAR_13 |= FUNC_0(VAR_5, (union uni_ieall *)&VAR_11->lij_seqno, VAR_12);
 VAR_13 |= FUNC_0(VAR_7, (union uni_ieall *)&VAR_11->unrec, VAR_12);

 return VAR_13;
}
