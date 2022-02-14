
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct page {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 struct bio* FUNC_1 (int ,struct page*,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int,struct bio*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

int FUNC_7(struct page *VAR_8, struct writeback_control *VAR_9)
{
 struct bio *VAR_10;
 int VAR_11 = 0, VAR_12 = VAR_6;

 if (FUNC_5(VAR_8)) {
  FUNC_6(VAR_8);
  goto out;
 }
 VAR_10 = FUNC_1(VAR_3, VAR_8, VAR_7);
 if (VAR_10 == ((void*)0)) {
  FUNC_2(VAR_8);
  FUNC_6(VAR_8);
  VAR_11 = -VAR_2;
  goto out;
 }
 if (VAR_9->sync_mode == VAR_5)
  VAR_12 |= (1 << VAR_0) | (1 << VAR_1);
 FUNC_0(VAR_4);
 FUNC_3(VAR_8);
 FUNC_6(VAR_8);
 FUNC_4(VAR_12, VAR_10);
out:
 return VAR_11;
}
