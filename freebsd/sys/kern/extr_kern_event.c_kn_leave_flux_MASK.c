
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_influx; int kn_kq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool
FUNC_2(struct knote *VAR_0)
{

 FUNC_0(VAR_0->kn_kq);
 FUNC_1(VAR_0->kn_influx > 0);
 VAR_0->kn_influx--;
 return (VAR_0->kn_influx == 0);
}
