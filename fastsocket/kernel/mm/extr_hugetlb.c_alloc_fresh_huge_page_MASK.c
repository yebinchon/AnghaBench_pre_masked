
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {int dummy; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (struct hstate*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hstate*,int *) ;

__attribute__((used)) static int FUNC_3(struct hstate *VAR_2, nodemask_t *VAR_3)
{
 struct page *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 VAR_6 = VAR_5;

 do {
  VAR_4 = FUNC_0(VAR_2, VAR_6);
  if (VAR_4) {
   VAR_7 = 1;
   break;
  }
  VAR_6 = FUNC_2(VAR_2, VAR_3);
 } while (VAR_6 != VAR_5);

 if (VAR_7)
  FUNC_1(VAR_0);
 else
  FUNC_1(VAR_1);

 return VAR_7;
}
