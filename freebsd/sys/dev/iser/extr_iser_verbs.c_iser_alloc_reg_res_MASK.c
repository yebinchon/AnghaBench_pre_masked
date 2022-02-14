
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_reg_resources {int mr_valid; int mr; } ;
struct ib_pd {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_pd*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct ib_device *VAR_2,
     struct ib_pd *VAR_3,
     struct iser_reg_resources *VAR_4)
{
 int VAR_5;

 VAR_4->mr = FUNC_3(VAR_3, VAR_0, VAR_1 + 1);
 if (FUNC_1(VAR_4->mr)) {
  VAR_5 = -FUNC_2(VAR_4->mr);
  FUNC_0("Failed to allocate  fast reg mr err=%d", VAR_5);
  return (VAR_5);
 }
 VAR_4->mr_valid = 1;

 return (0);
}
