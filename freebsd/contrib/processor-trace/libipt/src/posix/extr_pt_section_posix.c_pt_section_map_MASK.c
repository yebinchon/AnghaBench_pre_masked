
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {char* filename; scalar_t__ mapping; scalar_t__ mcount; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct pt_section*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (struct pt_section*,int *) ;
 int FUNC_6 (struct pt_section*,int) ;
 int FUNC_7 (struct pt_section*) ;
 int FUNC_8 (struct pt_section*) ;
 int FUNC_9 (struct pt_section*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_10(struct pt_section *VAR_3)
{
 const char *VAR_4;
 FILE *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_3)
  return -VAR_2;

 VAR_7 = FUNC_8(VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_3->mcount)
  return FUNC_7(VAR_3);

 if (VAR_3->mapping)
  goto out_unlock;

 VAR_4 = VAR_3->filename;
 if (!VAR_4)
  goto out_unlock;

 VAR_7 = -VAR_1;
 VAR_6 = FUNC_4(VAR_4, VAR_0);
 if (VAR_6 == -1)
  goto out_unlock;

 VAR_7 = FUNC_0(VAR_3, VAR_6);
 if (VAR_7 < 0)
  goto out_fd;


 VAR_7 = FUNC_6(VAR_3, VAR_6);
 if (!VAR_7) {
  FUNC_1(VAR_6);

  return FUNC_7(VAR_3);
 }




 VAR_5 = FUNC_3(VAR_6, "rb");
 if (!VAR_5) {
  VAR_7 = -VAR_1;
  goto out_fd;
 }




 VAR_7 = FUNC_5(VAR_3, VAR_5);
 if (!VAR_7)
  return FUNC_7(VAR_3);

 FUNC_2(VAR_5);
 goto out_unlock;

out_fd:
 FUNC_1(VAR_6);

out_unlock:
 (void) FUNC_9(VAR_3);
 return VAR_7;
}
