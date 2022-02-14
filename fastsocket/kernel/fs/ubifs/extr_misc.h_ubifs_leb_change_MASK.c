
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ubi; scalar_t__ ro_media; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,void const*,int,int) ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static inline int FUNC_2(const struct ubifs_info *VAR_1, int VAR_2,
       const void *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_1->ro_media)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_1->ubi, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_1("changing %d bytes in LEB %d, error %d",
     VAR_4, VAR_2, VAR_6);
  return VAR_6;
 }

 return 0;
}
