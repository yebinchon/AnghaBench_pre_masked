
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct pt_section {struct pt_sec_file_mapping* mapping; } ;
struct pt_sec_file_mapping {long begin; int * file; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct pt_sec_file_mapping*) ;
 int FUNC_1 (struct pt_sec_file_mapping*) ;
 size_t FUNC_2 (int *,int,int ,int *) ;
 int FUNC_3 (int *,long,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(const struct pt_section *VAR_3, uint8_t *VAR_4,
       uint16_t VAR_5, uint64_t VAR_6)
{
 struct pt_sec_file_mapping *VAR_7;
 FILE *VAR_8;
 long VAR_9;
 size_t VAR_10;
 int VAR_11;

 if (!VAR_4 || !VAR_3)
  return -VAR_1;

 VAR_7 = VAR_3->mapping;
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = VAR_7->file;







 VAR_9 = VAR_7->begin + (long) VAR_6;

 VAR_11 = FUNC_0(VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_0);
 if (VAR_11)
  goto out_unlock;

 VAR_10 = FUNC_2(VAR_4, 1, VAR_5, VAR_8);

 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 return (int) VAR_10;

out_unlock:
 (void) FUNC_1(VAR_7);
 return -VAR_2;
}
