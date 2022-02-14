
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_cacherep {int c_lru; int c_timestamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct svc_cacherep *VAR_4)
{
 VAR_4->c_timestamp = VAR_2;
 FUNC_0(&VAR_4->c_lru, &VAR_3);
 FUNC_1(&VAR_1, VAR_0);
}
