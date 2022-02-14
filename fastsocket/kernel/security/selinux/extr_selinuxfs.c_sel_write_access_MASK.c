
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct file {int dummy; } ;
struct av_decision {int flags; int seqno; int auditdeny; int auditallow; int allowed; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,int ,char*,int ,int,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,struct av_decision*) ;
 int FUNC_4 (char*,scalar_t__,int *) ;
 int FUNC_5 (char*,char*,char*,char*,int *) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct file *VAR_6, char *VAR_7, size_t VAR_8)
{
 char *VAR_9, *VAR_10;
 u32 VAR_11, VAR_12;
 u16 VAR_13;
 struct av_decision VAR_14;
 ssize_t VAR_15;

 VAR_15 = FUNC_7(VAR_5, VAR_3);
 if (VAR_15)
  return VAR_15;

 VAR_15 = -VAR_1;
 VAR_9 = FUNC_1(VAR_8+1, VAR_2);
 if (!VAR_9)
  return VAR_15;

 VAR_10 = FUNC_1(VAR_8+1, VAR_2);
 if (!VAR_10)
  goto out;

 VAR_15 = -VAR_0;
 if (FUNC_5(VAR_7, "%s %s %hu", VAR_9, VAR_10, &VAR_13) != 3)
  goto out2;

 VAR_15 = FUNC_4(VAR_9, FUNC_6(VAR_9)+1, &VAR_11);
 if (VAR_15 < 0)
  goto out2;
 VAR_15 = FUNC_4(VAR_10, FUNC_6(VAR_10)+1, &VAR_12);
 if (VAR_15 < 0)
  goto out2;

 FUNC_3(VAR_11, VAR_12, VAR_13, &VAR_14);

 VAR_15 = FUNC_2(VAR_7, VAR_4,
     "%x %x %x %x %u %x",
     VAR_14.allowed, 0xffffffff,
     VAR_14.auditallow, VAR_14.auditdeny,
     VAR_14.seqno, VAR_14.flags);
out2:
 FUNC_0(VAR_10);
out:
 FUNC_0(VAR_9);
 return VAR_15;
}
