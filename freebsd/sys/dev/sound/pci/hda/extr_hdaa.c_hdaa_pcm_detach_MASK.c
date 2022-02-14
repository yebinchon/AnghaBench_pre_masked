
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_pcm_devinfo {scalar_t__ registered; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct hdaa_pcm_devinfo *VAR_1 =
     (struct hdaa_pcm_devinfo *)FUNC_0(VAR_0);
 int VAR_2;

 if (VAR_1->registered > 0) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2 != 0)
   return (VAR_2);
 }

 return (0);
}
