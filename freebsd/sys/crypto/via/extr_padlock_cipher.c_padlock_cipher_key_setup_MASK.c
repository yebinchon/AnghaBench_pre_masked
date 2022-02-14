
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union padlock_cw {scalar_t__ cw_key_generation; } ;
struct padlock_session {void** ses_dkey; void** ses_ekey; union padlock_cw ses_cw; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void**,int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void**,int ,int) ;
 int FUNC_3 (void**,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct padlock_session *VAR_2, caddr_t VAR_3, int VAR_4)
{
 union padlock_cw *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_2->ses_cw;
 if (VAR_5->cw_key_generation == VAR_0) {

  FUNC_3(VAR_2->ses_ekey, VAR_3, VAR_4);
  FUNC_2(VAR_2->ses_dkey, VAR_3, VAR_4);
  for (VAR_6 = 0; VAR_6 < 4 * (VAR_1 + 1); VAR_6++) {
   VAR_2->ses_ekey[VAR_6] = FUNC_1(VAR_2->ses_ekey[VAR_6]);
   VAR_2->ses_dkey[VAR_6] = FUNC_1(VAR_2->ses_dkey[VAR_6]);
  }
 } else {
  FUNC_0(VAR_3, VAR_2->ses_ekey, VAR_4);
  FUNC_0(VAR_3, VAR_2->ses_dkey, VAR_4);
 }
}
