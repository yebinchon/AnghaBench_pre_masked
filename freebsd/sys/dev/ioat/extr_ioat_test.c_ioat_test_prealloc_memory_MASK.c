
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct test_transaction {int depth; int length; scalar_t__* buf; struct ioat_test* test; } ;
struct ioat_test {scalar_t__ transactions; int chain_depth; int free_q; int * status; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,struct test_transaction*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 struct test_transaction* FUNC_2 (struct ioat_test*,int) ;

__attribute__((used)) static int
FUNC_3(struct ioat_test *VAR_3, int VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;
 struct test_transaction *VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_3->transactions; VAR_5++) {
  VAR_8 = FUNC_2(VAR_3, VAR_3->chain_depth * 2);
  if (VAR_8 == ((void*)0)) {
   FUNC_1(0, "tx == NULL - memory exhausted\n");
   VAR_3->status[VAR_1]++;
   return (VAR_0);
  }

  FUNC_0(&VAR_3->free_q, VAR_8, VAR_2);

  VAR_8->test = VAR_3;
  VAR_8->depth = VAR_3->chain_depth;


  for (VAR_6 = 0; VAR_6 < (VAR_8->length / sizeof(uint32_t)); VAR_6++) {
   uint32_t VAR_9 = VAR_6 + (VAR_4 << 28);

   for (VAR_7 = 0; VAR_7 < VAR_3->chain_depth; VAR_7++) {
    ((uint32_t *)VAR_8->buf[2*VAR_7])[VAR_6] = ~VAR_9;
    ((uint32_t *)VAR_8->buf[2*VAR_7+1])[VAR_6] = VAR_9;
   }
  }
 }
 return (0);
}
