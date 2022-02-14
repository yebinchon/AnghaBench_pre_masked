
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct knote *VAR_3, long VAR_4)
{

 FUNC_1(&VAR_1, VAR_0);
 VAR_3->kn_data = FUNC_0(VAR_2);
 return (VAR_3->kn_data != 0);
}
