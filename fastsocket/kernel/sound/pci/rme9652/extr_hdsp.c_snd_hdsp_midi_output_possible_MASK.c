
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdsp*,int ) ;

__attribute__((used)) static int FUNC_1 (struct hdsp *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_0(VAR_2, VAR_1) & 0xff;
 else
  VAR_4 = FUNC_0(VAR_2, VAR_0) & 0xff;

 if (VAR_4 < 128)
  return 128 - VAR_4;
 else
  return 0;
}
