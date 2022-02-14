
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct handle {struct cache_detail* cd; } ;
struct file {int dummy; } ;
struct cache_detail {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct handle* FUNC_0 (struct file*,int *,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4,
   struct cache_detail *VAR_5)
{
 struct handle *VAR_6;

 if (!VAR_5 || !FUNC_2(VAR_5->owner))
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_4, &VAR_2, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_5->owner);
  return -VAR_1;
 }

 VAR_6->cd = VAR_5;
 return 0;
}
