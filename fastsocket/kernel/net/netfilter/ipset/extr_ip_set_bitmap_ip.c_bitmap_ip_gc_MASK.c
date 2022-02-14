
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ip_set {int lock; struct bitmap_ip* data; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct bitmap_ip {unsigned long* members; size_t elements; TYPE_1__ gc; int timeout; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(unsigned long VAR_3)
{
 struct ip_set *VAR_4 = (struct ip_set *) VAR_3;
 struct bitmap_ip *VAR_5 = VAR_4->data;
 unsigned long *VAR_6 = VAR_5->members;
 u32 VAR_7;



 FUNC_3(&VAR_4->lock);
 for (VAR_7 = 0; VAR_7 < VAR_5->elements; VAR_7++)
  if (FUNC_2(VAR_6[VAR_7]))
   VAR_6[VAR_7] = VAR_1;
 FUNC_4(&VAR_4->lock);

 VAR_5->gc.expires = VAR_2 + FUNC_0(VAR_5->timeout) * VAR_0;
 FUNC_1(&VAR_5->gc);
}
