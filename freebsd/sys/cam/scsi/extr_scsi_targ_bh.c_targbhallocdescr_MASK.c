
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targbh_cmd_desc {int max_size; int * backing_store; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct targbh_cmd_desc*,int) ;
 int FUNC_1 (struct targbh_cmd_desc*,int ) ;
 int * FUNC_2 (int,int ,int ) ;

__attribute__((used)) static struct targbh_cmd_desc*
FUNC_3()
{
 struct targbh_cmd_desc* VAR_3;


 VAR_3 = (struct targbh_cmd_desc *)FUNC_2(sizeof(*VAR_3),
            VAR_2, VAR_1);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_3, sizeof(*VAR_3));


 VAR_3->backing_store = FUNC_2(VAR_0, VAR_2, VAR_1);
 if (VAR_3->backing_store == ((void*)0)) {
  FUNC_1(VAR_3, VAR_2);
  return (((void*)0));
 }
 VAR_3->max_size = VAR_0;
 return (VAR_3);
}
