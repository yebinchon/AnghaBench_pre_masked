
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sndcard_func {scalar_t__ func; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sndcard_func* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 struct sndcard_func *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0) || VAR_3->func != VAR_1)
  return VAR_0;

 FUNC_1(VAR_2, "GUS CS4231");
 return 0;
}
