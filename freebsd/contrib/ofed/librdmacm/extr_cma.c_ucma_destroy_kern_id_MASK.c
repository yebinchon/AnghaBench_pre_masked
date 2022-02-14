
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ucma_abi_destroy_id_resp {int events_reported; } ;
struct ucma_abi_destroy_id {int id; } ;


 int FUNC_0 (struct ucma_abi_destroy_id*,int,int ,struct ucma_abi_destroy_id_resp*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ucma_abi_destroy_id_resp*,int) ;
 int FUNC_3 (int,struct ucma_abi_destroy_id*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_2, uint32_t VAR_3)
{
 struct ucma_abi_destroy_id_resp VAR_4;
 struct ucma_abi_destroy_id VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, sizeof VAR_5, VAR_0, &VAR_4, sizeof VAR_4);
 VAR_5.id = VAR_3;

 VAR_6 = FUNC_3(VAR_2, &VAR_5, sizeof VAR_5);
 if (VAR_6 != sizeof VAR_5)
  return (VAR_6 >= 0) ? FUNC_1(VAR_1) : -1;

 FUNC_2(&VAR_4, sizeof VAR_4);

 return VAR_4.events_reported;
}
