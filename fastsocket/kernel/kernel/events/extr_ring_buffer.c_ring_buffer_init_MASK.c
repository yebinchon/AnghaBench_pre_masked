
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {long watermark; int writable; int event_lock; int event_list; int refcount; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 long FUNC_2 (long,long) ;
 long FUNC_3 (struct ring_buffer*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ring_buffer *VAR_1, long VAR_2, int VAR_3)
{
 long VAR_4 = FUNC_3(VAR_1);

 if (VAR_2)
  VAR_1->watermark = FUNC_2(VAR_4, VAR_2);

 if (!VAR_1->watermark)
  VAR_1->watermark = VAR_4 / 2;

 if (VAR_3 & VAR_0)
  VAR_1->writable = 1;

 FUNC_1(&VAR_1->refcount, 1);

 FUNC_0(&VAR_1->event_list);
 FUNC_4(&VAR_1->event_lock);
}
