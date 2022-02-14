
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safe_session {int ses_klen; int * ses_key; } ;
typedef int caddr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct safe_session *VAR_0, caddr_t VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1, VAR_0->ses_key, VAR_0->ses_klen / 8);


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->ses_key); VAR_2++)
  VAR_0->ses_key[VAR_2] = FUNC_2(VAR_0->ses_key[VAR_2]);
}
