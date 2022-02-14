
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct urb **VAR_0, int VAR_1)
{
 if (*VAR_0) {
  FUNC_2(*VAR_0);
  if (VAR_1)
   FUNC_0((*VAR_0)->transfer_buffer);
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}
