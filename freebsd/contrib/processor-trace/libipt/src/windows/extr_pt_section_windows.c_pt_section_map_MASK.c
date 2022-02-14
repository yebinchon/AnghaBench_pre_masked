
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {char* filename; scalar_t__ mapping; scalar_t__ mcount; } ;
typedef scalar_t__ HANDLE ;
typedef int FILE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (intptr_t,int ) ;
 int FUNC_5 (struct pt_section*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pt_section*,int *) ;
 int FUNC_8 (struct pt_section*,int) ;
 int FUNC_9 (struct pt_section*) ;
 int FUNC_10 (struct pt_section*) ;
 int FUNC_11 (struct pt_section*) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_12(struct pt_section *VAR_9)
{
 const char *VAR_10;
 HANDLE VAR_11;
 FILE *VAR_12;
 int VAR_13, VAR_14;

 if (!VAR_9)
  return -VAR_8;

 VAR_14 = FUNC_10(VAR_9);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_9->mcount)
  return FUNC_9(VAR_9);

 if (VAR_9->mapping) {
  VAR_14 = -VAR_8;
  goto out_unlock;
 }

 VAR_10 = VAR_9->filename;
 if (!VAR_10) {
  VAR_14 = -VAR_8;
  goto out_unlock;
 }

 VAR_11 = FUNC_1(VAR_10, VAR_3, VAR_1, ((void*)0),
    VAR_5, VAR_0, ((void*)0));
 if (VAR_11 == VAR_4) {






  VAR_11 = FUNC_1(VAR_10, VAR_3, VAR_2,
     ((void*)0), VAR_5, VAR_0,
     ((void*)0));
  if (VAR_11 == VAR_4) {
   VAR_14 = -VAR_7;
   goto out_unlock;
  }
 }

 VAR_13 = FUNC_4((intptr_t) VAR_11, VAR_6);
 if (VAR_13 == -1) {
  VAR_14 = -VAR_7;
  goto out_fh;
 }

 VAR_14 = FUNC_5(VAR_9, VAR_13);
 if (VAR_14 < 0)
  goto out_fd;




 VAR_14 = FUNC_8(VAR_9, VAR_13);
 if (!VAR_14)
  return FUNC_9(VAR_9);




 VAR_12 = FUNC_3(VAR_13, "rb");
 if (!VAR_12) {
  VAR_14 = -VAR_7;
  goto out_fd;
 }




 VAR_14 = FUNC_7(VAR_9, VAR_12);
 if (!VAR_14)
  return FUNC_9(VAR_9);

 FUNC_6(VAR_12);
 goto out_unlock;

out_fd:
 FUNC_2(VAR_13);
 return VAR_14;

out_fh:
 FUNC_0(VAR_11);

out_unlock:
 (void) FUNC_11(VAR_9);
 return VAR_14;
}
