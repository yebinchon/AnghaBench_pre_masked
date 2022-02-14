
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {int ia_valid; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct iattr*) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_1, int VAR_2)
{
 struct iattr VAR_3;

 VAR_3.ia_valid = VAR_0 | VAR_2;
 return FUNC_0(VAR_1, &VAR_3);
}
