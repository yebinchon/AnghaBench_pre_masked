
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_pool_map {unsigned int npools; int mode; int count; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct svc_pool_map VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (struct svc_pool_map*) ;
 int FUNC_4 (struct svc_pool_map*) ;
 int VAR_3 ;

__attribute__((used)) static unsigned int
FUNC_5(void)
{
 struct svc_pool_map *VAR_4 = &VAR_2;
 int VAR_5 = -1;

 FUNC_0(&VAR_3);

 if (VAR_4->count++) {
  FUNC_1(&VAR_3);
  return VAR_4->npools;
 }

 if (VAR_4->mode == VAR_0)
  VAR_4->mode = FUNC_2();

 switch (VAR_4->mode) {
 case 129:
  VAR_5 = FUNC_3(VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_4(VAR_4);
  break;
 }

 if (VAR_5 < 0) {

  VAR_5 = 1;
  VAR_4->mode = VAR_1;
 }
 VAR_4->npools = VAR_5;

 FUNC_1(&VAR_3);
 return VAR_4->npools;
}
