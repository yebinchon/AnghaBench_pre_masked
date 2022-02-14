
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_cacherep {int c_hash; int c_lru; int c_type; int c_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct svc_cacherep* FUNC_2 (int ,int ) ;

__attribute__((used)) static struct svc_cacherep *
FUNC_3(void)
{
 struct svc_cacherep *VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4) {
  VAR_4->c_state = VAR_2;
  VAR_4->c_type = VAR_1;
  FUNC_1(&VAR_4->c_lru);
  FUNC_0(&VAR_4->c_hash);
 }
 return VAR_4;
}
