
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct gate_descriptor {scalar_t__ gd_type; int gd_looffset; uintptr_t gd_hioffset; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct gate_descriptor* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct gate_descriptor *VAR_9;
 uintptr_t VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_9 = &VAR_6[VAR_11];
  if (VAR_9->gd_type != VAR_3 &&
      VAR_9->gd_type != VAR_4)
   continue;
  VAR_10 = VAR_9->gd_looffset + (((u_int)VAR_9->gd_hioffset) << 16);
  FUNC_0(VAR_10 >= (uintptr_t)VAR_8 &&
      VAR_10 < (uintptr_t)VAR_5,
      ("IDT[%d] type %d off %#x", VAR_11, VAR_9->gd_type, VAR_10));
  VAR_10 += VAR_7;
  FUNC_1(VAR_10 >= VAR_2 &&
      VAR_10 < VAR_1);
  VAR_9->gd_looffset = VAR_10;
  VAR_9->gd_hioffset = VAR_10 >> 16;
 }
}
