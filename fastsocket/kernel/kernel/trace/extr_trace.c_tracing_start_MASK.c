
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ring_buffer {int dummy; } ;
struct TYPE_4__ {struct ring_buffer* buffer; } ;
struct TYPE_3__ {struct ring_buffer* buffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 () ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (struct ring_buffer*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_7(void)
{
 struct ring_buffer *VAR_6;
 unsigned long VAR_7;

 if (VAR_4)
  return;

 FUNC_5(&VAR_5, VAR_7);
 if (--VAR_3) {
  if (VAR_3 < 0) {

   FUNC_0(1);
   VAR_3 = 0;
  }
  goto out;
 }


 FUNC_1(&VAR_0);

 VAR_6 = VAR_1.buffer;
 if (VAR_6)
  FUNC_4(VAR_6);

 VAR_6 = VAR_2.buffer;
 if (VAR_6)
  FUNC_4(VAR_6);

 FUNC_2(&VAR_0);

 FUNC_3();
 out:
 FUNC_6(&VAR_5, VAR_7);
}
