
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct stat {int st_mode; void* st_size; void* st_gid; void* st_uid; void* st_nlink; } ;
struct open_file {scalar_t__ f_fsdata; } ;
struct TYPE_3__ {int * val; } ;
struct TYPE_4__ {TYPE_1__ fa_size; int fa_gid; int fa_uid; int fa_nlink; int fa_mode; int fa_type; } ;
struct nfs_iodesc {TYPE_2__ fa; } ;


 int* VAR_0 ;
 void* FUNC_0 (int ) ;

int
FUNC_1(struct open_file *VAR_1, struct stat *VAR_2)
{
 struct nfs_iodesc *VAR_3 = (struct nfs_iodesc *)VAR_1->f_fsdata;
 uint32_t VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_3->fa.fa_type);
 VAR_5 = FUNC_0(VAR_3->fa.fa_mode);
 VAR_5 |= VAR_0[VAR_4 & 7];

 VAR_2->st_mode = VAR_5;
 VAR_2->st_nlink = FUNC_0(VAR_3->fa.fa_nlink);
 VAR_2->st_uid = FUNC_0(VAR_3->fa.fa_uid);
 VAR_2->st_gid = FUNC_0(VAR_3->fa.fa_gid);
 VAR_2->st_size = FUNC_0(VAR_3->fa.fa_size.val[1]);

 return (0);
}
