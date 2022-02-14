
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atiixp_info {int codec_idx; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct atiixp_info*) ;
 int FUNC_1 (struct atiixp_info*,int ,int) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_4, void *VAR_5, int VAR_6, uint32_t VAR_7)
{
 struct atiixp_info *VAR_8 = VAR_5;

 if (FUNC_0(VAR_8))
  return (-1);

 VAR_7 = (VAR_7 << VAR_3) |
     (((uint32_t)VAR_6) << VAR_2) |
     VAR_1 | VAR_8->codec_idx;

 FUNC_1(VAR_8, VAR_0, VAR_7);

 return (0);
}
