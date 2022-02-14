
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysv_dir_entry {int name; int inode; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {char* name; int len; } ;
struct dentry {TYPE_2__* d_parent; TYPE_1__ d_name; } ;
struct TYPE_6__ {unsigned long i_dir_start_lookup; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 struct page* FUNC_2 (struct inode*,unsigned long) ;
 unsigned long FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int,int ,char const*,int ) ;
 scalar_t__ FUNC_6 (struct page*) ;

struct sysv_dir_entry *FUNC_7(struct dentry *VAR_3, struct page **VAR_4)
{
 const char * VAR_5 = VAR_3->d_name.name;
 int VAR_6 = VAR_3->d_name.len;
 struct inode * VAR_7 = VAR_3->d_parent->d_inode;
 unsigned long VAR_8, VAR_9;
 unsigned long VAR_10 = FUNC_3(VAR_7);
 struct page *VAR_11 = ((void*)0);
 struct sysv_dir_entry *VAR_12;

 *VAR_4 = ((void*)0);

 VAR_8 = FUNC_1(VAR_7)->i_dir_start_lookup;
 if (VAR_8 >= VAR_10)
  VAR_8 = 0;
 VAR_9 = VAR_8;

 do {
  char *VAR_13;
  VAR_11 = FUNC_2(VAR_7, VAR_9);
  if (!FUNC_0(VAR_11)) {
   VAR_13 = (char*)FUNC_6(VAR_11);
   VAR_12 = (struct sysv_dir_entry *) VAR_13;
   VAR_13 += VAR_0 - VAR_1;
   for ( ; (char *) VAR_12 <= VAR_13 ; VAR_12++) {
    if (!VAR_12->inode)
     continue;
    if (FUNC_5(VAR_6, VAR_2,
       VAR_5, VAR_12->name))
     goto found;
   }
  }
  FUNC_4(VAR_11);

  if (++VAR_9 >= VAR_10)
   VAR_9 = 0;
 } while (VAR_9 != VAR_8);

 return ((void*)0);

found:
 FUNC_1(VAR_7)->i_dir_start_lookup = VAR_9;
 *VAR_4 = VAR_11;
 return VAR_12;
}
