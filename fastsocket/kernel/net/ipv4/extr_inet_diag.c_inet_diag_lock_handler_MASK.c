
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_diag_handler {int dummy; } ;


 int VAR_0 ;
 struct inet_diag_handler const* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct inet_diag_handler const** VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ,int) ;

__attribute__((used)) static const struct inet_diag_handler *FUNC_3(int VAR_5)
{
 if (!VAR_3[VAR_5])
  FUNC_2("net-pf-%d-proto-%d-type-%d", VAR_2,
          VAR_1, VAR_5);

 FUNC_1(&VAR_4);
 if (!VAR_3[VAR_5])
  return FUNC_0(-VAR_0);

 return VAR_3[VAR_5];
}
