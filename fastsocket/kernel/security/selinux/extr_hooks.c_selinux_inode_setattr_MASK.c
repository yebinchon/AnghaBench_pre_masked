
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {unsigned int ia_valid; } ;
struct dentry {int dummy; } ;
struct cred {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,int *,struct dentry*,int ) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_11, struct iattr *VAR_12)
{
 const struct cred *VAR_13 = FUNC_0();
 unsigned int VAR_14 = VAR_12->ia_valid;


 if (VAR_14 & VAR_1) {
  VAR_14 &= ~(VAR_4 | VAR_3 | VAR_5 |
         VAR_1);
  if (!VAR_14)
   return 0;
 }

 if (VAR_14 & (VAR_5 | VAR_8 | VAR_2 |
   VAR_0 | VAR_6 | VAR_7))
  return FUNC_1(VAR_13, ((void*)0), VAR_11, VAR_9);

 return FUNC_1(VAR_13, ((void*)0), VAR_11, VAR_10);
}
