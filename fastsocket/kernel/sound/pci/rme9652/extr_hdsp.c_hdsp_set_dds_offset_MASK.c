
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int system_sample_rate; } ;


 int FUNC_0 (struct hdsp*,int) ;

__attribute__((used)) static int FUNC_1(struct hdsp *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->system_sample_rate + VAR_1;
 FUNC_0(VAR_0, VAR_2);
 return 0;
}
