
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct afswtch {scalar_t__ af_af; int (* af_other_status ) (int) ;struct afswtch* af_next; } ;
typedef int afmask ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct afswtch* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(int VAR_4)
{
 struct afswtch *VAR_5;
 uint8_t VAR_6[FUNC_0(VAR_0, VAR_2)];

 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 for (VAR_5 = VAR_3; VAR_5 != ((void*)0); VAR_5 = VAR_5->af_next) {
  if (VAR_5->af_other_status == ((void*)0))
   continue;
  if (VAR_5->af_af != VAR_1 && FUNC_1(VAR_6, VAR_5->af_af))
   continue;
  VAR_5->af_other_status(VAR_4);
  FUNC_3(VAR_6, VAR_5->af_af);
 }
}
