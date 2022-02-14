
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int min_io_size; int leb_size; int ubi; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int ,int,void*,int,int ) ;
 int FUNC_3 (int ,int,void*,int,int) ;
 int FUNC_4 (struct ubifs_info const*,int) ;

__attribute__((used)) static int FUNC_5(const struct ubifs_info *VAR_1, int VAR_2, int VAR_3,
   void *VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_1->min_io_size > 1)
  VAR_5 = VAR_1->min_io_size;
 else
  VAR_5 = 512;
 if (VAR_3 + VAR_5 > VAR_1->leb_size)
  VAR_5 = VAR_1->leb_size - VAR_3;

 if (!VAR_5)
  return 0;


 VAR_6 = FUNC_3(VAR_1->ubi, VAR_2, VAR_4, VAR_3, VAR_5);
 if (VAR_6 || !FUNC_1(VAR_4, VAR_5)) {
  FUNC_0("cleaning head at %d:%d", VAR_2, VAR_3);
  if (VAR_3 == 0)
   return FUNC_4(VAR_1, VAR_2);
  VAR_6 = FUNC_3(VAR_1->ubi, VAR_2, VAR_4, 0, VAR_3);
  if (VAR_6)
   return VAR_6;
  return FUNC_2(VAR_1->ubi, VAR_2, VAR_4, VAR_3, VAR_0);
 }

 return 0;
}
