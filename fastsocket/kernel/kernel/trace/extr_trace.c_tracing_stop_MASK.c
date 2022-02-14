
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ring_buffer {int dummy; } ;
struct TYPE_4__ {struct ring_buffer* buffer; } ;
struct TYPE_3__ {struct ring_buffer* buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (struct ring_buffer*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_6(void)
{
 struct ring_buffer *VAR_5;
 unsigned long VAR_6;

 FUNC_2();
 FUNC_4(&VAR_4, VAR_6);
 if (VAR_3++)
  goto out;


 FUNC_0(&VAR_0);

 VAR_5 = VAR_1.buffer;
 if (VAR_5)
  FUNC_3(VAR_5);

 VAR_5 = VAR_2.buffer;
 if (VAR_5)
  FUNC_3(VAR_5);

 FUNC_1(&VAR_0);

 out:
 FUNC_5(&VAR_4, VAR_6);
}
