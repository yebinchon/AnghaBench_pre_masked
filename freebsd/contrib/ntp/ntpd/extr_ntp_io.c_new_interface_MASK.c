
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interface {int starttime; scalar_t__ ifnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct interface* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct interface*) ;
 int FUNC_3 (struct interface*) ;
 int FUNC_4 (struct interface*,struct interface*,int) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static struct interface *
FUNC_6(
 struct interface *VAR_3
 )
{
 struct interface * VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4));

 if (((void*)0) == VAR_3)
  FUNC_2(VAR_4);
 else
  FUNC_4(VAR_4, VAR_3, sizeof(*VAR_4));


 VAR_4->ifnum = VAR_2++;
 VAR_4->starttime = VAR_1;







 return VAR_4;
}
