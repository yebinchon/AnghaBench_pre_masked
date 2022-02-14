
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (struct cred const*,struct file*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, unsigned int VAR_6,
         unsigned long VAR_7)
{
 const struct cred *VAR_8 = FUNC_1();
 u32 VAR_9 = 0;

 if (FUNC_0(VAR_6) & VAR_4)
  VAR_9 |= VAR_2;
 if (FUNC_0(VAR_6) & VAR_3)
  VAR_9 |= VAR_1;
 if (!VAR_9)
  VAR_9 = VAR_0;

 return FUNC_2(VAR_8, VAR_5, VAR_9);
}
