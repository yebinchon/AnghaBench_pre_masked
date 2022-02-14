
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdaa_devinfo {int dev; } ;
struct hdaa_chan {int* dmapos; scalar_t__ dir; int blksz; int blkcnt; int sid; struct hdaa_devinfo* devinfo; } ;
typedef int kobj_t ;


 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hdaa_devinfo*) ;
 int FUNC_3 (struct hdaa_devinfo*) ;

__attribute__((used)) static uint32_t
FUNC_4(kobj_t VAR_2, void *VAR_3)
{
 struct hdaa_chan *VAR_4 = VAR_3;
 struct hdaa_devinfo *VAR_5 = VAR_4->devinfo;
 uint32_t VAR_6;

 FUNC_2(VAR_5);
 if (VAR_4->dmapos != ((void*)0)) {
  VAR_6 = *(VAR_4->dmapos);
 } else {
  VAR_6 = FUNC_0(
      FUNC_1(VAR_5->dev), VAR_5->dev,
      VAR_4->dir == VAR_1 ? 1 : 0, VAR_4->sid);
 }
 FUNC_3(VAR_5);




 VAR_6 %= VAR_4->blksz * VAR_4->blkcnt;
 VAR_6 &= VAR_0;

 return (VAR_6);
}
