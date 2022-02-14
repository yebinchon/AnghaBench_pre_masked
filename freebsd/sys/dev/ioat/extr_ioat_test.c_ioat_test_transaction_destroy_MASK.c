
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_transaction {struct test_transaction** buf; int length; struct ioat_test* test; } ;
struct ioat_test {scalar_t__ testkind; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct test_transaction*,int ,int ) ;
 int FUNC_1 (struct test_transaction*,int ) ;

__attribute__((used)) static void
FUNC_2(struct test_transaction *VAR_3)
{
 struct ioat_test *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->test;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3->buf[VAR_5] != ((void*)0)) {
   if (VAR_4->testkind == VAR_1)
    FUNC_1(VAR_3->buf[VAR_5], VAR_2);
   else
    FUNC_0(VAR_3->buf[VAR_5], VAR_3->length, VAR_2);
   VAR_3->buf[VAR_5] = ((void*)0);
  }
 }

 FUNC_1(VAR_3, VAR_2);
}
