
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct eloop_sock {int dummy; } ;
struct TYPE_5__ {size_t reader_count; int reader_table_changed; TYPE_1__* readers; } ;
struct TYPE_4__ {int sock; int event; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,size_t) ;

void FUNC_3(int VAR_1)
{
 size_t VAR_2;

 if (VAR_0.readers == ((void*)0) || VAR_0.reader_count == 0)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0.reader_count; VAR_2++) {
  if (VAR_0.readers[VAR_2].sock == VAR_1)
   break;
 }
 if (VAR_2 == VAR_0.reader_count)
  return;

 FUNC_1(VAR_0.readers[VAR_2].sock, VAR_0.readers[VAR_2].event, 0);
 FUNC_0(VAR_0.readers[VAR_2].event);

 if (VAR_2 != VAR_0.reader_count - 1) {
  FUNC_2(&VAR_0.readers[VAR_2], &VAR_0.readers[VAR_2 + 1],
      (VAR_0.reader_count - VAR_2 - 1) *
      sizeof(struct eloop_sock));
 }
 VAR_0.reader_count--;
 VAR_0.reader_table_changed = 1;
}
