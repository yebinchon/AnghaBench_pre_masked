
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuzz {int strategy; int o1; int o2; int slen; } ;







 int FUNC_0 (char*) ;


 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct fuzz *VAR_0)
{
 FUNC_0(("fuzz = %p, strategy = %s, o1 = %zu, o2 = %zu, slen = %zu",
     VAR_0, FUNC_2(VAR_0->strategy), VAR_0->o1, VAR_0->o2, VAR_0->slen));

 switch (VAR_0->strategy) {
 case 134:
  return VAR_0->o1 >= VAR_0->slen * 8;
 case 132:
  return VAR_0->o2 >= VAR_0->slen * 8;
 case 131:
  return VAR_0->o2 >= VAR_0->slen;
 case 133:
 case 128:
 case 129:
 case 130:
  return VAR_0->o1 >= VAR_0->slen;
 default:
  FUNC_1();
 }
}
