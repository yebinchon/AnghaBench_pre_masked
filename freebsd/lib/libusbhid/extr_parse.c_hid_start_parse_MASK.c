
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hid_data {int kindset; int reportid; scalar_t__ end; scalar_t__ p; scalar_t__ start; } ;
typedef TYPE_1__* report_desc_t ;
typedef struct hid_data* hid_data_t ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ data; } ;


 struct hid_data* FUNC_0 (int) ;
 int FUNC_1 (struct hid_data*,int ,int) ;

hid_data_t
FUNC_2(report_desc_t VAR_0, int VAR_1, int VAR_2)
{
 struct hid_data *VAR_3;

 VAR_3 = FUNC_0(sizeof *VAR_3);
 FUNC_1(VAR_3, 0, sizeof *VAR_3);
 VAR_3->start = VAR_3->p = VAR_0->data;
 VAR_3->end = VAR_0->data + VAR_0->size;
 VAR_3->kindset = VAR_1;
 VAR_3->reportid = VAR_2;
 return (VAR_3);
}
