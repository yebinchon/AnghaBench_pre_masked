
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct reference {int dummy; } ;
struct TYPE_2__ {int capacity; int init_point; int index_mask; int start_mask; scalar_t__ last_free; scalar_t__ first_free; struct reference* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct reference* FUNC_0 (int,int,int ) ;
 TYPE_1__ VAR_5 ;

int FUNC_1(u32 VAR_6, u32 VAR_7)
{
 struct reference *VAR_8;
 u32 VAR_9;



 VAR_6++;
 for (VAR_9 = 16; VAR_9 < VAR_6; VAR_9 <<= 1)
                   ;



 VAR_8 = FUNC_0(VAR_9 * sizeof(struct reference),
     VAR_1 | VAR_3 | VAR_4, VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_5.entries = VAR_8;
 VAR_5.capacity = VAR_6;
 VAR_5.init_point = 1;
 VAR_5.first_free = 0;
 VAR_5.last_free = 0;
 VAR_5.index_mask = VAR_9 - 1;
 VAR_5.start_mask = VAR_7 & ~VAR_5.index_mask;

 return 0;
}
