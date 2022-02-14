
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int32_t ;
struct fm801_info {void* rec_blksize; void* play_blksize; } ;
struct fm801_chinfo {scalar_t__ dir; struct fm801_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (char*,void*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u_int32_t
FUNC_1(kobj_t VAR_2, void *VAR_3, u_int32_t VAR_4)
{
 struct fm801_chinfo *VAR_5 = VAR_3;
 struct fm801_info *VAR_6 = VAR_5->parent;






 if(VAR_5->dir == VAR_0)
  VAR_6->play_blksize = VAR_4;

 if(VAR_5->dir == VAR_1)
  VAR_6->rec_blksize = VAR_4;

 FUNC_0("fm801ch_setblocksize %d (dir %d)\n",VAR_4, VAR_5->dir);

 return VAR_4;
}
