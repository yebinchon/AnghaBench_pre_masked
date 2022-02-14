
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ voidp ;
struct nis_callback_data {int ncd_m; int (* ncd_fn ) (int ,char*,char*) ;} ;
typedef int nis_object ;
typedef int nis_name ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_5(const nis_name VAR_1, const nis_object *VAR_2, voidp VAR_3)
{
  char *VAR_4 = FUNC_3(FUNC_1(VAR_2, 0), FUNC_0(VAR_2, 0));
  char *VAR_5 = FUNC_3(FUNC_1(VAR_2, 1), FUNC_0(VAR_2, 1));
  struct nis_callback_data *VAR_6 = (struct nis_callback_data *) VAR_3;

  FUNC_2("NISplus callback for <%s,%s>", VAR_4, VAR_5);

  (*VAR_6->ncd_fn) (VAR_6->ncd_m, VAR_4, VAR_5);




  return VAR_0;
}
