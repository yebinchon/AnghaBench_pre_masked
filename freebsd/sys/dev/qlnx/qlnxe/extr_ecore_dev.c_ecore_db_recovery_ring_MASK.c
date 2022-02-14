
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef unsigned long long u32 ;
struct ecore_hwfn {int p_dev; } ;
struct ecore_db_recovery_entry {scalar_t__ db_width; scalar_t__ db_data; int db_addr; } ;
typedef enum ecore_db_rec_exec { ____Placeholder_ecore_db_rec_exec } ecore_db_rec_exec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,int ,unsigned long long) ;
 int FUNC_1 (struct ecore_hwfn*,int ,scalar_t__) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,char*,int ,unsigned long long) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_5,
       struct ecore_db_recovery_entry *VAR_6,
       enum ecore_db_rec_exec VAR_7)
{
 if (VAR_7 != VAR_1) {

  if (VAR_6->db_width == VAR_3)
   FUNC_2(VAR_5, VAR_4,
       "%s doorbell address %p data %x\n",
       VAR_7 == VAR_0 ?
       "would have rung" : "ringing",
       VAR_6->db_addr,
       *(u32 *)VAR_6->db_data);
  else
   FUNC_2(VAR_5, VAR_4,
       "%s doorbell address %p data %llx\n",
       VAR_7 == VAR_0 ?
       "would have rung" : "ringing",
       VAR_6->db_addr,
       (unsigned long long)*(u64 *)(VAR_6->db_data));
 }


 if (!FUNC_4(VAR_5->p_dev, VAR_6->db_addr,
     VAR_6->db_data))
  return;





 FUNC_3(VAR_5->p_dev);


 if (VAR_7 == VAR_2 || VAR_7 == VAR_1) {
  if (VAR_6->db_width == VAR_3)
   FUNC_0(VAR_5, VAR_6->db_addr, *(u32 *)(VAR_6->db_data));
  else
   FUNC_1(VAR_5, VAR_6->db_addr, *(u64 *)(VAR_6->db_data));
 }




 FUNC_3(VAR_5->p_dev);
}
