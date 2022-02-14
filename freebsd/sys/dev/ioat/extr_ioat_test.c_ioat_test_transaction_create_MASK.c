
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_transaction {int length; int ** buf; } ;
struct ioat_test {int buffer_size; scalar_t__ testkind; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int,int ,int,int ,int ,int ,int ) ;
 int FUNC_1 (struct test_transaction*) ;
 void* FUNC_2 (int,int ,int) ;

__attribute__((used)) static struct
test_transaction *FUNC_3(struct ioat_test *VAR_6,
    unsigned VAR_7)
{
 struct test_transaction *VAR_8;
 unsigned VAR_9;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2, VAR_3 | VAR_4);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 VAR_8->length = VAR_6->buffer_size;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  if (VAR_6->testkind == VAR_1)
   VAR_8->buf[VAR_9] = FUNC_2(VAR_6->buffer_size, VAR_2,
       VAR_3);
  else
   VAR_8->buf[VAR_9] = FUNC_0(VAR_6->buffer_size,
       VAR_2, VAR_3, 0, VAR_0,
       VAR_5, 0);

  if (VAR_8->buf[VAR_9] == ((void*)0)) {
   FUNC_1(VAR_8);
   return (((void*)0));
  }
 }
 return (VAR_8);
}
