
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zonelist {int dummy; } ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct mempolicy {scalar_t__ mode; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct page* FUNC_0 (int ,int,struct zonelist*,int ) ;
 int FUNC_1 (struct mempolicy*) ;
 struct page* FUNC_2 (int ,int,unsigned int) ;
 int VAR_2 ;
 int FUNC_3 () ;
 struct mempolicy* FUNC_4 (int ,struct vm_area_struct*,unsigned long) ;
 unsigned int FUNC_5 (struct mempolicy*,struct vm_area_struct*,unsigned long,scalar_t__) ;
 int FUNC_6 (struct mempolicy*) ;
 int FUNC_7 (struct mempolicy*) ;
 int FUNC_8 (int ,struct mempolicy*) ;
 struct zonelist* FUNC_9 (int ,struct mempolicy*,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;

struct page *
FUNC_12(gfp_t VAR_3, int VAR_4, struct vm_area_struct *VAR_5,
  unsigned long VAR_6, int VAR_7)
{
 struct mempolicy *VAR_8 = FUNC_4(VAR_2, VAR_5, VAR_6);
 struct zonelist *VAR_9;
 struct page *VAR_10;

 FUNC_3();
 if (FUNC_11(VAR_8->mode == VAR_0)) {
  unsigned VAR_11;

  VAR_11 = FUNC_5(VAR_8, VAR_5, VAR_6, VAR_1 + VAR_4);
  FUNC_6(VAR_8);
  VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_11);
  FUNC_10();
  return VAR_10;
 }
 VAR_9 = FUNC_9(VAR_3, VAR_8, VAR_7);
 if (FUNC_11(FUNC_7(VAR_8))) {



  struct page *VAR_12 = FUNC_0(VAR_3, VAR_4,
      VAR_9, FUNC_8(VAR_3, VAR_8));
  FUNC_1(VAR_8);
  FUNC_10();
  return VAR_12;
 }



 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_9,
          FUNC_8(VAR_3, VAR_8));
 FUNC_10();
 return VAR_10;
}
