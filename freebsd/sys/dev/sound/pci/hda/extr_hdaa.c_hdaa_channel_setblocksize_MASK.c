
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct hdaa_chan {int blksz; TYPE_1__* pdevinfo; } ;
typedef int kobj_t ;
struct TYPE_2__ {int chan_blkcnt; } ;


 int FUNC_0 (int ,void*,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(kobj_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct hdaa_chan *VAR_3 = VAR_1;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->pdevinfo->chan_blkcnt);

 return (VAR_3->blksz);
}
