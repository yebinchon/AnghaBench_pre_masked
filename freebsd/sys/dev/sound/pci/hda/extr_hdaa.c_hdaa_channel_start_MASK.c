
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdaa_devinfo {int dev; } ;
struct hdaa_chan {int stripecap; scalar_t__ sid; scalar_t__ dir; int flags; int blkcnt; int blksz; int b; int dmapos; scalar_t__ stripectl; struct hdaa_devinfo* devinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int,int ,scalar_t__,int *) ;
 int FUNC_1 (int ,int ,int,scalar_t__) ;
 int FUNC_2 (int ,int ,int,scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct hdaa_chan*) ;
 int FUNC_8 (struct hdaa_chan*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct hdaa_chan *VAR_3)
{
 struct hdaa_devinfo *VAR_4 = VAR_3->devinfo;
 uint32_t VAR_5;

 VAR_5 = FUNC_8(VAR_3);
 VAR_3->stripectl = FUNC_4(VAR_3->stripecap & FUNC_6(VAR_5) &
     FUNC_5(VAR_4->dev)) - 1;
 VAR_3->sid = FUNC_0(FUNC_3(VAR_4->dev), VAR_4->dev,
     VAR_3->dir == VAR_2 ? 1 : 0, VAR_5, VAR_3->stripectl, &VAR_3->dmapos);
 if (VAR_3->sid <= 0)
  return (VAR_0);
 FUNC_7(VAR_3);
 FUNC_1(FUNC_3(VAR_4->dev), VAR_4->dev,
     VAR_3->dir == VAR_2 ? 1 : 0, VAR_3->sid);
 FUNC_2(FUNC_3(VAR_4->dev), VAR_4->dev,
     VAR_3->dir == VAR_2 ? 1 : 0, VAR_3->sid,
     FUNC_9(VAR_3->b), VAR_3->blksz, VAR_3->blkcnt);
 VAR_3->flags |= VAR_1;
 return (0);
}
