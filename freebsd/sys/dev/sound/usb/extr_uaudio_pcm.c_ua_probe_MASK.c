
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sndcard_func {scalar_t__ func; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sndcard_func* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3)
{
 struct sndcard_func *VAR_4;



 VAR_4 = FUNC_0(VAR_3);

 if ((VAR_4 == ((void*)0)) ||
     (VAR_4->func != VAR_2)) {
  return (VAR_1);
 }
 FUNC_1(VAR_3, "USB audio");

 return (VAR_0);
}
