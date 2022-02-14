
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
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct cred const*,struct cred const*,int ) ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (struct cred const*,struct file*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, unsigned long VAR_7, int VAR_8)
{
 const struct cred *VAR_9 = FUNC_1();
 int VAR_10 = 0;


 if ((VAR_7 & VAR_4) && (!VAR_6 || (!VAR_8 && (VAR_7 & VAR_5)))) {





  VAR_10 = FUNC_0(VAR_9, VAR_9, VAR_3);
  if (VAR_10)
   goto error;
 }


 if (VAR_6) {

  u32 VAR_11 = VAR_1;


  if (VAR_8 && (VAR_7 & VAR_5))
   VAR_11 |= VAR_2;

  if (VAR_7 & VAR_4)
   VAR_11 |= VAR_0;

  return FUNC_2(VAR_9, VAR_6, VAR_11);
 }

error:
 return VAR_10;
}
