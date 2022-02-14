
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int min_io_size; } ;
struct ubifs_ch {int len; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (void*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ubifs_info const*,void*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_5(const struct ubifs_info *VAR_2, void *VAR_3, int VAR_4,
   int VAR_5, int VAR_6)
{
 struct ubifs_ch *VAR_7 = VAR_3;
 int VAR_8, VAR_9 = FUNC_3(VAR_7->len);


 VAR_8 = FUNC_0(VAR_6 + VAR_1, VAR_2->min_io_size) - VAR_6;
 if (FUNC_2(VAR_3 + VAR_8, VAR_4 - VAR_8))
  return 1;




 if (FUNC_4(VAR_2, VAR_3, VAR_5, VAR_6, 1, 0) != -VAR_0) {
  FUNC_1("unexpected bad common header at %d:%d", VAR_5, VAR_6);
  return 0;
 }

 VAR_8 = FUNC_0(VAR_6 + VAR_9, VAR_2->min_io_size) - VAR_6;

 if (FUNC_2(VAR_3 + VAR_8, VAR_4 - VAR_8))
  return 1;
 FUNC_1("unexpected data at %d:%d", VAR_5, VAR_6 + VAR_8);
 return 0;
}
