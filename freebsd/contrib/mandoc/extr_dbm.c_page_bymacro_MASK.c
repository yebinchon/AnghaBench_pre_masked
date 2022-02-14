
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct dbm_res {int member_0; struct page* page; int member_1; } ;
struct dbm_match {int dummy; } ;
typedef size_t int32_t ;
struct TYPE_2__ {int pages; int value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dbm_match const*,char const*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__** VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static struct dbm_res
FUNC_4(int32_t VAR_7, const struct dbm_match *VAR_8)
{
 static const struct dbm_match *VAR_9;
 static const int32_t *VAR_10;
 static const char *VAR_11;
 static int32_t VAR_12, VAR_13;
 struct dbm_res VAR_14 = {-1, 0};

 FUNC_0(VAR_12 >= 0);
 FUNC_0(VAR_12 < VAR_2);



 if (VAR_8 != ((void*)0)) {
  VAR_3 = VAR_0;
  VAR_9 = VAR_8;
  VAR_12 = VAR_7;
  VAR_11 = VAR_5[VAR_12] ? FUNC_1(VAR_4[VAR_12]->value) : ((void*)0);
  VAR_10 = ((void*)0);
  VAR_13 = -1;
  return VAR_14;
 }
 if (VAR_3 != VAR_0)
  return VAR_14;



 while (VAR_10 == ((void*)0) || *VAR_10 == 0) {
  if (++VAR_13 == VAR_5[VAR_12]) {
   VAR_3 = VAR_1;
   return VAR_14;
  }
  if (VAR_13)
   VAR_11 = FUNC_3(VAR_11, '\0') + 1;
  if (FUNC_2(VAR_9, VAR_11))
   VAR_10 = FUNC_1(VAR_4[VAR_12][VAR_13].pages);
 }



 VAR_14.page = (struct page *)FUNC_1(*VAR_10++) - VAR_6;
 return VAR_14;
}
