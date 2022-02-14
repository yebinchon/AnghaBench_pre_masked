
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct kcov_info {scalar_t__ kvaddr; size_t bufsize; int * bufobj; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kcov_info*,int ) ;
 int FUNC_3 (scalar_t__,size_t) ;
 int FUNC_4 (scalar_t__,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct kcov_info *VAR_2)
{
 vm_page_t VAR_3;
 size_t VAR_4;

 if (VAR_2->kvaddr != 0) {
  FUNC_4(VAR_2->kvaddr, VAR_2->bufsize / VAR_1);
  FUNC_3(VAR_2->kvaddr, VAR_2->bufsize);
 }
 if (VAR_2->bufobj != ((void*)0)) {
  FUNC_0(VAR_2->bufobj);
  VAR_3 = FUNC_6(VAR_2->bufobj, 0);
  for (VAR_4 = 0; VAR_4 < VAR_2->bufsize / VAR_1; VAR_4++) {
   FUNC_8(VAR_3);
   VAR_3 = FUNC_7(VAR_3);
  }
  FUNC_1(VAR_2->bufobj);
  FUNC_5(VAR_2->bufobj);
 }
 FUNC_2(VAR_2, VAR_0);
}
