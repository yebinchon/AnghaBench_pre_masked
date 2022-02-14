
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_pd {int dummy; } ;
struct ib_device {int dummy; } ;
struct fast_reg_descriptor {int rsc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fast_reg_descriptor*,int ) ;
 int FUNC_2 (struct ib_device*,struct ib_pd*,int *) ;
 struct fast_reg_descriptor* FUNC_3 (int,int ,int) ;

__attribute__((used)) static struct fast_reg_descriptor *
FUNC_4(struct ib_device *VAR_3, struct ib_pd *VAR_4)
{
 struct fast_reg_descriptor *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);
 if (!VAR_5) {
  FUNC_0("Failed to allocate a new fastreg descriptor");
  return (((void*)0));
 }

 VAR_6 = FUNC_2(VAR_3, VAR_4, &VAR_5->rsc);
 if (VAR_6) {
  FUNC_0("failed to allocate reg_resources");
  goto err;
 }

 return (VAR_5);
err:
 FUNC_1(VAR_5, VAR_0);
 return (((void*)0));
}
