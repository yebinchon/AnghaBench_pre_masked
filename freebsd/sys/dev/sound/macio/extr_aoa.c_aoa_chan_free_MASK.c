
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoa_dma {int channel; int buf; } ;
typedef int kobj_t ;


 int FUNC_0 (struct aoa_dma*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_0, void *VAR_1)
{
 struct aoa_dma *VAR_2 = VAR_1;

 FUNC_2(VAR_2->buf);
 FUNC_1(VAR_2->channel);
 FUNC_0(VAR_2);

 return (0);
}
