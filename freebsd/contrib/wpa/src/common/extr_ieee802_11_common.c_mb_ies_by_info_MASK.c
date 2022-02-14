
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wpabuf {int dummy; } ;
struct mb_ies_info {size_t nof_ies; TYPE_1__* ies; } ;
struct TYPE_2__ {scalar_t__ ie_len; int ie; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct wpabuf* FUNC_1 (size_t) ;
 int FUNC_2 (struct wpabuf*,int ,scalar_t__) ;
 int FUNC_3 (struct wpabuf*,scalar_t__) ;

struct wpabuf * FUNC_4(struct mb_ies_info *VAR_1)
{
 struct wpabuf *VAR_2 = ((void*)0);

 FUNC_0(VAR_1 != ((void*)0));

 if (VAR_1->nof_ies) {
  u8 VAR_3;
  size_t VAR_4 = 0;

  for (VAR_3 = 0; VAR_3 < VAR_1->nof_ies; VAR_3++)
   VAR_4 += 2 + VAR_1->ies[VAR_3].ie_len;

  VAR_2 = FUNC_1(VAR_4);
  if (VAR_2) {
   for (VAR_3 = 0; VAR_3 < VAR_1->nof_ies; VAR_3++) {
    FUNC_3(VAR_2, VAR_0);
    FUNC_3(VAR_2, VAR_1->ies[VAR_3].ie_len);
    FUNC_2(VAR_2,
      VAR_1->ies[VAR_3].ie,
      VAR_1->ies[VAR_3].ie_len);
   }
  }
 }

 return VAR_2;
}
