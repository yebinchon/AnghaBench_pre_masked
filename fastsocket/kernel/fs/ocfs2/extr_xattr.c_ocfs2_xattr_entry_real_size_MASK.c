
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_entry {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 <= VAR_0)
  VAR_4 = FUNC_0(VAR_2) + FUNC_0(VAR_3);
 else
  VAR_4 = FUNC_0(VAR_2) + VAR_1;
 VAR_4 += sizeof(struct ocfs2_xattr_entry);

 return VAR_4;
}
