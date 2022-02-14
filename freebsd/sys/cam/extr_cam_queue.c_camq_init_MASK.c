
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camq {int array_size; int ** queue_array; } ;
typedef int cam_pinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct camq*,int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct camq *VAR_2, int VAR_3)
{
 FUNC_0(VAR_2, sizeof(*VAR_2));
 VAR_2->array_size = VAR_3;
 if (VAR_2->array_size != 0) {
  VAR_2->queue_array = (cam_pinfo**)FUNC_1(VAR_3*sizeof(cam_pinfo*),
       VAR_0, VAR_1);
  if (VAR_2->queue_array == ((void*)0)) {
   FUNC_2("camq_init: - cannot malloc array!\n");
   return (1);
  }




  VAR_2->queue_array--;
 }
 return (0);
}
