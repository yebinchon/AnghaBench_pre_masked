
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_acl {int dummy; } ;
struct archive_entry {struct archive_acl acl; } ;



struct archive_acl *
FUNC_0(struct archive_entry *VAR_0)
{
 return &VAR_0->acl;
}
