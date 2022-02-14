
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_chan {int devinfo; } ;
typedef int kobj_t ;



 int FUNC_0 (int) ;


 int FUNC_1 (struct hdaa_chan*) ;
 int FUNC_2 (struct hdaa_chan*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct hdaa_chan *VAR_3 = VAR_1;
 int VAR_4 = 0;

 if (!FUNC_0(VAR_2))
  return (0);

 FUNC_3(VAR_3->devinfo);
 switch (VAR_2) {
 case 129:
  VAR_4 = FUNC_1(VAR_3);
  break;
 case 128:
 case 130:
  FUNC_2(VAR_3);
  break;
 default:
  break;
 }
 FUNC_4(VAR_3->devinfo);

 return (VAR_4);
}
