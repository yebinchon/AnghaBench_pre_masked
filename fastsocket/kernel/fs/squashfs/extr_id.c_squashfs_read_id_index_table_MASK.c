
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int) ;
 int VAR_1 ;
 unsigned int FUNC_2 (unsigned short) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (struct super_block*,int *,int ,unsigned int) ;

__le64 *FUNC_7(struct super_block *VAR_2,
   u64 VAR_3, unsigned short VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_4);
 __le64 *VAR_6;
 int VAR_7;

 FUNC_3("In read_id_index_table, length %d\n", VAR_5);


 VAR_6 = FUNC_5(VAR_5, VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_0("Failed to allocate id index table\n");
  return FUNC_1(-VAR_0);
 }

 VAR_7 = FUNC_6(VAR_2, VAR_6, VAR_3, VAR_5);
 if (VAR_7 < 0) {
  FUNC_0("unable to read id index table\n");
  FUNC_4(VAR_6);
  return FUNC_1(VAR_7);
 }

 return VAR_6;
}
