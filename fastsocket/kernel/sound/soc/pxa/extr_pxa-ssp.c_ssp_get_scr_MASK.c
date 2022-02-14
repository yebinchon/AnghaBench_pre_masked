
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssp_device {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct ssp_device*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct ssp_device *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2, VAR_1);
 u32 VAR_4;

 if (FUNC_0() && VAR_2->type == VAR_0)
  VAR_4 = ((VAR_3 >> 8) & 0xff) * 2 + 2;
 else
  VAR_4 = ((VAR_3 >> 8) & 0xfff) + 1;
 return VAR_4;
}
