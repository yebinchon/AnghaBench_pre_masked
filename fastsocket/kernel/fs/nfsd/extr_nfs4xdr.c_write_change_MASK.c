
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct kstat {TYPE_1__ ctime; } ;
struct inode {int i_version; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,int ) ;

__attribute__((used)) static void FUNC_3(__be32 **VAR_0, struct kstat *VAR_1, struct inode *VAR_2)
{
 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_0, VAR_2->i_version);
 } else {
  FUNC_1(VAR_0, VAR_1->ctime.tv_sec);
  FUNC_1(VAR_0, VAR_1->ctime.tv_nsec);
 }
}
