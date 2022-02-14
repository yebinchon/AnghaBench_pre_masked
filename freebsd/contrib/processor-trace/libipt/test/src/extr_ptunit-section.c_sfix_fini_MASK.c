
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nthreads; int * result; } ;
struct section_fixture {char* name; TYPE_1__ thrd; int * file; int * section; } ;
struct ptunit_result {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static struct ptunit_result FUNC_7(struct section_fixture *VAR_1)
{
 char *VAR_2;
 FILE *VAR_3;
 int VAR_4, VAR_5;

 FUNC_5(VAR_0, &VAR_1->thrd);

 if (VAR_1->section) {
  FUNC_2(VAR_1->section);
  VAR_1->section = ((void*)0);
 }

 VAR_2 = VAR_1->name;
 VAR_3 = VAR_1->file;
 VAR_1->name = ((void*)0);
 VAR_1->file = ((void*)0);
 if (VAR_2 && VAR_3) {
  VAR_5 = FUNC_6(VAR_2);
  if (!VAR_5) {
   FUNC_1(VAR_2);
   VAR_2 = ((void*)0);
  }
 }

 if (VAR_3)
  FUNC_0(VAR_3);

 if (VAR_2) {
  (void) FUNC_6(VAR_2);
  FUNC_1(VAR_2);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->thrd.nthreads; ++VAR_4)
  FUNC_3(VAR_1->thrd.result[VAR_4], 0);

 return FUNC_4();
}
