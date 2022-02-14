
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* report_desc_t ;
struct TYPE_4__ {unsigned int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned char*,unsigned int) ;

report_desc_t
FUNC_2(unsigned char *VAR_2, unsigned int VAR_3)
{
 report_desc_t VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4) + VAR_3);
 if (VAR_4 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (((void*)0));
 }
 VAR_4->size = VAR_3;
 FUNC_1(VAR_4->data, VAR_2, VAR_3);
 return (VAR_4);
}
