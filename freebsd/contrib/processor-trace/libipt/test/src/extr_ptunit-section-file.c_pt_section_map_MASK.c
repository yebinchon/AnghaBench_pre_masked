
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pt_section {char* filename; struct pt_file_status* status; scalar_t__ mapping; scalar_t__ mcount; } ;
struct pt_file_status {long size; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 long FUNC_3 (int *) ;
 int FUNC_4 (struct pt_section*,int *) ;
 int FUNC_5 (struct pt_section*) ;
 int FUNC_6 (struct pt_section*) ;
 int FUNC_7 (struct pt_section*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_8(struct pt_section *VAR_3)
{
 struct pt_file_status *VAR_4;
 const char *VAR_5;
 uint16_t VAR_6;
 FILE *VAR_7;
 long VAR_8;
 int VAR_9;

 if (!VAR_3)
  return -VAR_2;

 VAR_9 = FUNC_5(VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_6 = VAR_3->mcount;
 if (VAR_6)
  return FUNC_6(VAR_3);

 if (VAR_3->mapping)
  goto out_unlock;

 VAR_5 = VAR_3->filename;
 if (!VAR_5)
  goto out_unlock;

 VAR_4 = VAR_3->status;
 if (!VAR_4)
  goto out_unlock;

 VAR_9 = -VAR_1;
 VAR_7 = FUNC_1(VAR_5, "rb");
 if (!VAR_7)
  goto out_unlock;

 VAR_9 = FUNC_2(VAR_7, 0, VAR_0);
 if (VAR_9) {
  VAR_9 = -VAR_1;
  goto out_file;
 }

 VAR_9 = -VAR_1;
 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 < 0)
  goto out_file;

 if (VAR_8 != VAR_4->size)
  goto out_file;




 VAR_9 = FUNC_4(VAR_3, VAR_7);
 if (!VAR_9)
  return FUNC_6(VAR_3);

out_file:
 FUNC_0(VAR_7);

out_unlock:
 (void) FUNC_7(VAR_3);
 return VAR_9;
}
