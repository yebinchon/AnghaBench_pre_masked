
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ubi; scalar_t__ ro_media; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static inline int FUNC_2(const struct ubifs_info *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1->ro_media)
  return -VAR_0;
 VAR_3 = FUNC_0(VAR_1->ubi, VAR_2);
 if (VAR_3) {
  FUNC_1("unmap LEB %d failed, error %d", VAR_2, VAR_3);
  return VAR_3;
 }

 return 0;
}
