
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int flags; int free; int dirty; int lnum; } ;
struct ubifs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_lprops const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ubifs_lprops const*) ;
 int FUNC_2 (char*,int ,int ,int ,int) ;
 struct ubifs_lprops* FUNC_3 (struct ubifs_info*,struct ubifs_lprops const*,int ,int ,int,int) ;
 int FUNC_4 (struct ubifs_info*) ;
 struct ubifs_lprops* FUNC_5 (struct ubifs_info*,int) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_2)
{
 const struct ubifs_lprops *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_5 = VAR_4;




 VAR_3 = FUNC_5(VAR_2, VAR_5);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 VAR_3 = FUNC_3(VAR_2, VAR_3, VAR_1, VAR_1,
        VAR_3->flags | VAR_0, -1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 FUNC_2("LEB %d, dirty %d and free %d flags %#x",
   VAR_3->lnum, VAR_3->dirty, VAR_3->free, VAR_3->flags);
 return VAR_5;
}
