
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace {double duration_filter; } ;


 double VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct trace *VAR_1, double VAR_2)
{
 return VAR_2 < (VAR_1->duration_filter * VAR_0);
}
