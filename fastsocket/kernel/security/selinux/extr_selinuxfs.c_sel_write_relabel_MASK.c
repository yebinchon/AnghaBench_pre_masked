
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct file {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,int,int ,int*) ;
 int FUNC_4 (char*,scalar_t__,int*) ;
 int FUNC_5 (int,char**,int*) ;
 int FUNC_6 (char*,char*,char*,char*,int *) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct file *VAR_7, char *VAR_8, size_t VAR_9)
{
 char *VAR_10, *VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 u16 VAR_15;
 ssize_t VAR_16;
 char *VAR_17;
 u32 VAR_18;

 VAR_16 = FUNC_8(VAR_6, VAR_4);
 if (VAR_16)
  return VAR_16;

 VAR_16 = -VAR_1;
 VAR_10 = FUNC_1(VAR_9+1, VAR_3);
 if (!VAR_10)
  return VAR_16;

 VAR_11 = FUNC_1(VAR_9+1, VAR_3);
 if (!VAR_11)
  goto out;

 VAR_16 = -VAR_0;
 if (FUNC_6(VAR_8, "%s %s %hu", VAR_10, VAR_11, &VAR_15) != 3)
  goto out2;

 VAR_16 = FUNC_4(VAR_10, FUNC_7(VAR_10)+1, &VAR_12);
 if (VAR_16 < 0)
  goto out2;
 VAR_16 = FUNC_4(VAR_11, FUNC_7(VAR_11)+1, &VAR_13);
 if (VAR_16 < 0)
  goto out2;

 VAR_16 = FUNC_3(VAR_12, VAR_13, VAR_15, &VAR_14);
 if (VAR_16 < 0)
  goto out2;

 VAR_16 = FUNC_5(VAR_14, &VAR_17, &VAR_18);
 if (VAR_16 < 0)
  goto out2;

 if (VAR_18 > VAR_5) {
  VAR_16 = -VAR_2;
  goto out3;
 }

 FUNC_2(VAR_8, VAR_17, VAR_18);
 VAR_16 = VAR_18;
out3:
 FUNC_0(VAR_17);
out2:
 FUNC_0(VAR_11);
out:
 FUNC_0(VAR_10);
 return VAR_16;
}
