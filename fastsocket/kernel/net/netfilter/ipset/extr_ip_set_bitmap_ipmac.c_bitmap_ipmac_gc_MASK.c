
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ipmac_telem {scalar_t__ match; int timeout; } ;
struct ip_set {int lock; struct bitmap_ipmac* data; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct bitmap_ipmac {scalar_t__ last_ip; scalar_t__ first_ip; TYPE_1__ gc; int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 struct ipmac_telem* FUNC_2 (struct bitmap_ipmac*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(unsigned long VAR_4)
{
 struct ip_set *VAR_5 = (struct ip_set *) VAR_4;
 struct bitmap_ipmac *VAR_6 = VAR_5->data;
 struct ipmac_telem *VAR_7;
 u32 VAR_8, VAR_9 = VAR_6->last_ip - VAR_6->first_ip;



 FUNC_4(&VAR_5->lock);
 for (VAR_8 = 0; VAR_8 <= VAR_9; VAR_8++) {
  VAR_7 = FUNC_2(VAR_6, VAR_8);
  if (VAR_7->match == VAR_2 &&
      FUNC_3(VAR_7->timeout))
   VAR_7->match = VAR_1;
 }
 FUNC_5(&VAR_5->lock);

 VAR_6->gc.expires = VAR_3 + FUNC_0(VAR_6->timeout) * VAR_0;
 FUNC_1(&VAR_6->gc);
}
