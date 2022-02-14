
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dst_entry {scalar_t__* metrics; TYPE_2__* neighbour; } ;
struct dn_dev {scalar_t__ use_long; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {scalar_t__ dn_ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dst_entry*,int) ;
 int FUNC_1 (struct dst_entry*,int) ;
 int FUNC_2 (struct dst_entry*,int ) ;

__attribute__((used)) static void FUNC_3(struct dst_entry *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = 230;
 struct dn_dev *VAR_7 = VAR_4->neighbour ?
       (struct dn_dev *)VAR_4->neighbour->dev->dn_ptr : ((void*)0);

 if (VAR_7 && VAR_7->use_long == 0)
  VAR_6 -= 6;
 else
  VAR_6 -= 21;

 if (FUNC_0(VAR_4, VAR_2) > VAR_5 && VAR_5 >= VAR_6) {
  if (!(FUNC_1(VAR_4, VAR_2))) {
   VAR_4->metrics[VAR_2-1] = VAR_5;
   FUNC_2(VAR_4, VAR_3);
  }
  if (!(FUNC_1(VAR_4, VAR_1))) {
   u32 VAR_8 = VAR_5 - VAR_0;
   if (FUNC_0(VAR_4, VAR_1) > VAR_8)
    VAR_4->metrics[VAR_1-1] = VAR_8;
  }
 }
}
