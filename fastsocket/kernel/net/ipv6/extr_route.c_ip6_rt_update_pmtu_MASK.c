
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int plen; } ;
struct rt6_info {int rt6i_flags; TYPE_1__ rt6i_dst; } ;
struct dst_entry {int * metrics; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*) ;

__attribute__((used)) static void FUNC_2(struct dst_entry *VAR_6, u32 VAR_7)
{
 struct rt6_info *VAR_8 = (struct rt6_info*)VAR_6;

 if (VAR_7 < FUNC_1(VAR_6) && VAR_8->rt6i_dst.plen == 128) {
  VAR_8->rt6i_flags |= VAR_5;
  if (VAR_7 < VAR_0) {
   VAR_7 = VAR_0;
   VAR_6->metrics[VAR_2-1] |= VAR_3;
  }
  VAR_6->metrics[VAR_4-1] = VAR_7;
  FUNC_0(VAR_1, VAR_6);
 }
}
