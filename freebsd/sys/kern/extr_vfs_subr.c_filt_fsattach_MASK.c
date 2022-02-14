
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct knote*,int ) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_2)
{

 VAR_2->kn_flags |= VAR_0;
 FUNC_0(&VAR_1, VAR_2, 0);
 return (0);
}
