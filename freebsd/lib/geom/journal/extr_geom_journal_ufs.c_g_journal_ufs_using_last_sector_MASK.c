
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs {int fs_size; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (struct fs*,int ) ;
 int FUNC_1 (char const*) ;
 struct fs* FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_1)
{
 struct fs *VAR_2;
 off_t VAR_3, VAR_4;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0))
  return (0);

 VAR_3 = FUNC_1(VAR_1) / VAR_0;

 VAR_4 = FUNC_0(VAR_2, VAR_2->fs_size);
 return (VAR_3 <= VAR_4);
}
