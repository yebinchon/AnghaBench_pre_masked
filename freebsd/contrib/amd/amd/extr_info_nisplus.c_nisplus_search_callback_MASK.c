
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ voidp ;
struct nisplus_search_callback_data {int value; } ;
typedef int nis_object ;
typedef int nis_name ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(const nis_name VAR_1, const nis_object *VAR_2, voidp VAR_3)
{
  struct nisplus_search_callback_data *VAR_4 = (struct nisplus_search_callback_data *) VAR_3;

  FUNC_2("NISplus search callback for <%s>", FUNC_1(VAR_2, 0));
  FUNC_2("NISplus search callback value <%s>", FUNC_1(VAR_2, 1));

  VAR_4->value = FUNC_3(FUNC_1(VAR_2, 1), FUNC_0(VAR_2, 1));
  return VAR_0;
}
