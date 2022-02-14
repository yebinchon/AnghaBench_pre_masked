
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct test_transaction {int depth; char** buf; int length; struct ioat_test* test; } ;
struct ioat_test {scalar_t__ testkind; char* raw_vtarget; scalar_t__ raw_write; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_3(struct test_transaction *VAR_3)
{
 struct ioat_test *VAR_4;
 char *VAR_5, *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_4 = VAR_3->test;

 for (VAR_7 = 0; VAR_7 < VAR_3->depth; VAR_7++) {
  VAR_5 = VAR_3->buf[2 * VAR_7 + 1];
  VAR_6 = VAR_3->buf[2 * VAR_7];

  if (VAR_4->testkind == VAR_1) {
   for (VAR_8 = 0; VAR_8 < VAR_3->length; VAR_8 += sizeof(uint64_t)) {
    if (FUNC_2(VAR_6, &VAR_5[VAR_8],
     FUNC_0(sizeof(uint64_t), VAR_3->length - VAR_8))
        != 0)
     return (0);
   }
  } else if (VAR_4->testkind == VAR_0) {
   if (FUNC_2(VAR_6, VAR_5, VAR_3->length) != 0)
    return (0);
  } else if (VAR_4->testkind == VAR_2) {
   if (VAR_4->raw_write)
    VAR_5 = VAR_4->raw_vtarget;
   FUNC_1(VAR_5, VAR_3->length / 32);
  }
 }
 return (1);
}
