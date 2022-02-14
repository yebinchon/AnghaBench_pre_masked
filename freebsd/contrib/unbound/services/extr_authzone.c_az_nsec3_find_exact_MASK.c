
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct auth_zone {int dummy; } ;
struct auth_data {int dummy; } ;
typedef int hname ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct auth_data*,int ) ;
 struct auth_data* FUNC_1 (struct auth_zone*,int *,size_t) ;
 int FUNC_2 (struct auth_zone*,int *,size_t*,int *,size_t,int,size_t,int *,size_t) ;

__attribute__((used)) static struct auth_data*
FUNC_3(struct auth_zone* VAR_2, uint8_t* VAR_3, size_t VAR_4,
 int VAR_5, size_t VAR_6, uint8_t* VAR_7, size_t VAR_8)
{
 struct auth_data* VAR_9;
 uint8_t VAR_10[VAR_0];
 size_t VAR_11 = sizeof(VAR_10);
 if(!FUNC_2(VAR_2, VAR_10, &VAR_11, VAR_3, VAR_4, VAR_5, VAR_6,
  VAR_7, VAR_8))
  return ((void*)0);
 VAR_9 = FUNC_1(VAR_2, VAR_10, VAR_11);
 if(FUNC_0(VAR_9, VAR_1))
  return VAR_9;
 return ((void*)0);
}
