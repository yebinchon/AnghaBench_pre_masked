
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct system_segment_descriptor {int sd_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct system_segment_descriptor* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static __inline void
FUNC_3(void)
{
 struct system_segment_descriptor *VAR_4;
 VAR_4 = FUNC_1(VAR_3);
 VAR_4->sd_type = VAR_1;
 FUNC_2(FUNC_0(VAR_0, VAR_2));
}
