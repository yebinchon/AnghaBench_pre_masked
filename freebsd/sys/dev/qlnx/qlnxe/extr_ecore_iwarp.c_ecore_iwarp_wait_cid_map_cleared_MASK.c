
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int dummy; } ;
struct ecore_bmap {int name; int max_count; int bitmap; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_4,
     struct ecore_bmap *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;

 VAR_8 = FUNC_1(VAR_5->bitmap, VAR_5->max_count);
 VAR_6 = VAR_8;

 while (VAR_8) {
  FUNC_2(VAR_0);

  VAR_8 = FUNC_1(VAR_5->bitmap, VAR_5->max_count);

  if (VAR_6 == VAR_8) {
   VAR_7++;
  } else {
   VAR_6 = VAR_8;
   VAR_7 = 0;
  }

  if (VAR_7 > VAR_1) {
   FUNC_0(VAR_4, 0,
      "%s bitmap wait timed out (%d cids pending)\n",
      VAR_5->name, VAR_8);
   return VAR_3;
  }
 }
 return VAR_2;
}
