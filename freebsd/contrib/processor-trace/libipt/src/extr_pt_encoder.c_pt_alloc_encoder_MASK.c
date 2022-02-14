
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_encoder {int dummy; } ;
struct pt_config {int dummy; } ;


 int FUNC_0 (struct pt_encoder*) ;
 struct pt_encoder* FUNC_1 (int) ;
 int FUNC_2 (struct pt_encoder*,struct pt_config const*) ;

struct pt_encoder *FUNC_3(const struct pt_config *VAR_0)
{
 struct pt_encoder *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(sizeof(*VAR_1));
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
