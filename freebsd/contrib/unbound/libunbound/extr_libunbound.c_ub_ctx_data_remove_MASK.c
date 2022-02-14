
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ub_ctx {int local_zones; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,size_t,int,int ) ;
 int FUNC_2 (char const*,int **,size_t*,int*) ;
 int FUNC_3 (struct ub_ctx*) ;

int FUNC_4(struct ub_ctx* VAR_3, const char *VAR_4)
{
 uint8_t* VAR_5;
 int VAR_6;
 size_t VAR_7;
 int VAR_8 = FUNC_3(VAR_3);
 if (VAR_8) return VAR_8;

 if(!FUNC_2(VAR_4, &VAR_5, &VAR_7, &VAR_6))
  return VAR_2;

 FUNC_1(VAR_3->local_zones, VAR_5, VAR_7, VAR_6,
  VAR_0);

 FUNC_0(VAR_5);
 return VAR_1;
}
