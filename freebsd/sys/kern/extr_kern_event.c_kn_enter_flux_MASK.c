
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_influx; int kn_kq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct knote *VAR_1)
{

 FUNC_0(VAR_1->kn_kq);
 FUNC_1(VAR_1->kn_influx < VAR_0);
 VAR_1->kn_influx++;
}
