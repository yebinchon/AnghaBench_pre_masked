
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dst_entry {int* metrics; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct dst_entry*) ;
 int FUNC_1 (struct dst_entry*,int) ;
 int FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (struct dst_entry*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct dst_entry *VAR_5, u32 VAR_6)
{
 if (FUNC_2(VAR_5) > VAR_6 && VAR_6 >= 68 &&
     !(FUNC_1(VAR_5, VAR_2))) {
  if (VAR_6 < VAR_3) {
   VAR_6 = VAR_3;
   VAR_5->metrics[VAR_1-1] |= (1 << VAR_2);
  }
  VAR_5->metrics[VAR_2-1] = VAR_6;
  FUNC_3(VAR_5, VAR_4);
  FUNC_0(VAR_0, VAR_5);
 }
}
