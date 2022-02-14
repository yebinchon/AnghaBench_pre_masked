
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {int dummy; } ;
struct mss_chinfo {int buffer; struct mss_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mss_info*) ;
 int FUNC_2 (struct mss_chinfo*,int) ;
 int FUNC_3 (struct mss_info*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct mss_chinfo *VAR_3 = VAR_1;
 struct mss_info *VAR_4 = VAR_3->parent;

 if (!FUNC_0(VAR_2))
  return 0;

 FUNC_4(VAR_3->buffer, VAR_2);
 FUNC_1(VAR_4);
 FUNC_2(VAR_3, VAR_2);
 FUNC_3(VAR_4);
 return 0;
}
