
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int ntfs_volume ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(ntfs_volume *VAR_0,
  const void *VAR_1, const int VAR_2,
  const void *VAR_3, const int VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7;

 FUNC_2("Entering.");

 FUNC_0(VAR_2 != VAR_4);
 FUNC_0(VAR_2 != 4);
 VAR_6 = FUNC_1(VAR_1);
 VAR_7 = FUNC_1(VAR_3);
 if (VAR_6 < VAR_7)
  VAR_5 = -1;
 else {
  if (VAR_6 == VAR_7)
   VAR_5 = 0;
  else
   VAR_5 = 1;
 }
 FUNC_2("Done, returning %i", VAR_5);
 return VAR_5;
}
