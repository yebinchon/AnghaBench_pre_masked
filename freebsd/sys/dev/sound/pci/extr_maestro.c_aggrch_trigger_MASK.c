
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agg_rchinfo {int stereo; } ;
typedef int kobj_t ;






 int FUNC_0 (struct agg_rchinfo*) ;
 int FUNC_1 (struct agg_rchinfo*) ;
 int FUNC_2 (struct agg_rchinfo*) ;
 int FUNC_3 (struct agg_rchinfo*) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct agg_rchinfo *VAR_3 = VAR_1;

 switch (VAR_2) {
 case 130:
  if (VAR_3->stereo)
   FUNC_1(VAR_3);
  else
   FUNC_0(VAR_3);
  break;
 case 129:
  FUNC_2(VAR_3);
  break;
 case 131:
 case 128:
  FUNC_3(VAR_3);
  break;
 }
 return 0;
}
