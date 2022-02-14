
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_krule {scalar_t__ listnr; struct audit_field* inode_f; scalar_t__ tree; scalar_t__ watch; } ;
struct audit_field {scalar_t__ op; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(struct audit_krule *VAR_4,
     struct audit_field *VAR_5)
{
 if (VAR_4->listnr != VAR_0 ||
     VAR_4->watch || VAR_4->inode_f || VAR_4->tree ||
     (VAR_5->op != VAR_1 && VAR_5->op != VAR_2))
  return -VAR_3;

 VAR_4->inode_f = VAR_5;
 return 0;
}
