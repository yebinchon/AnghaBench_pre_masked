
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct readdir_data {scalar_t__ dirent; scalar_t__ used; int full; } ;
struct buffered_dirent {int namlen; unsigned int d_type; int name; int ino; int offset; } ;
typedef int loff_t ;


 unsigned int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, const char *VAR_3, int VAR_4,
     loff_t VAR_5, u64 VAR_6, unsigned int VAR_7)
{
 struct readdir_data *VAR_8 = VAR_2;
 struct buffered_dirent *VAR_9 = (void *)(VAR_8->dirent + VAR_8->used);
 unsigned int VAR_10;

 VAR_10 = FUNC_0(sizeof(struct buffered_dirent) + VAR_4, sizeof(u64));
 if (VAR_8->used + VAR_10 > VAR_1) {
  VAR_8->full = 1;
  return -VAR_0;
 }

 VAR_9->namlen = VAR_4;
 VAR_9->offset = VAR_5;
 VAR_9->ino = VAR_6;
 VAR_9->d_type = VAR_7;
 FUNC_1(VAR_9->name, VAR_3, VAR_4);
 VAR_8->used += VAR_10;

 return 0;
}
