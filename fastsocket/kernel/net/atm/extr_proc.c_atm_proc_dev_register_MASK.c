
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atm_dev {int number; char* type; int proc_name; int proc_entry; TYPE_1__* ops; } ;
struct TYPE_2__ {int proc_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int *,struct atm_dev*) ;
 int FUNC_3 (int ,char*,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;

int FUNC_5(struct atm_dev *VAR_4)
{
 int VAR_5,VAR_6;
 int VAR_7;


 if (!VAR_4->ops->proc_read)
  return 0;

 VAR_7 = -VAR_0;
 VAR_5 = 0;
 for (VAR_6 = VAR_4->number; VAR_6; VAR_6 /= 10) VAR_5++;
 if (!VAR_5) VAR_5++;

 VAR_4->proc_name = FUNC_1(FUNC_4(VAR_4->type) + VAR_5 + 2, VAR_1);
 if (!VAR_4->proc_name)
  goto err_out;
 FUNC_3(VAR_4->proc_name,"%s:%d",VAR_4->type, VAR_4->number);

 VAR_4->proc_entry = FUNC_2(VAR_4->proc_name, 0, VAR_2,
        &VAR_3, VAR_4);
 if (!VAR_4->proc_entry)
  goto err_free_name;
 return 0;
err_free_name:
 FUNC_0(VAR_4->proc_name);
err_out:
 return VAR_7;
}
