
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct auth_zone {int data; } ;
struct auth_data {int node; } ;
typedef int rbnode_type ;
typedef int hname ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct auth_data*,int ) ;
 struct auth_data* FUNC_1 (struct auth_zone*,int *,size_t) ;
 int FUNC_2 (struct auth_zone*,int *,size_t*,int *,size_t,int,size_t,int *,size_t) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static struct auth_data*
FUNC_5(struct auth_zone* VAR_3, uint8_t* VAR_4, size_t VAR_5,
 int VAR_6, size_t VAR_7, uint8_t* VAR_8, size_t VAR_9)
{
 struct auth_data* VAR_10;
 uint8_t VAR_11[VAR_0];
 size_t VAR_12 = sizeof(VAR_11);
 if(!FUNC_2(VAR_3, VAR_11, &VAR_12, VAR_4, VAR_5, VAR_6, VAR_7,
  VAR_8, VAR_9))
  return ((void*)0);
 VAR_10 = FUNC_1(VAR_3, VAR_11, VAR_12);
 if(VAR_10)
  return VAR_10;


 VAR_10 = (struct auth_data*)FUNC_3(&VAR_3->data);
 while(VAR_10 && (rbnode_type*)VAR_10 != VAR_2 &&
  !FUNC_0(VAR_10, VAR_1)) {
  VAR_10 = (struct auth_data*)FUNC_4(&VAR_10->node);
 }
 if((rbnode_type*)VAR_10 == VAR_2)
  VAR_10 = ((void*)0);
 return VAR_10;
}
