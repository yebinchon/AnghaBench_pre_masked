
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int* outgoing_avail_ports; } ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,size_t,int) ;

int FUNC_3(struct config_file* VAR_0, int** VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->outgoing_avail_ports, 65536);
 int VAR_3, VAR_4 = 0;
 *VAR_1 = ((void*)0);
 if(VAR_2 == 0)
  return 0;
 *VAR_1 = (int*)FUNC_2(((void*)0), (size_t)VAR_2, sizeof(int));
 if(!*VAR_1)
  return 0;
 for(VAR_3=0; VAR_3<65536; VAR_3++) {
  if(VAR_0->outgoing_avail_ports[VAR_3])
   (*VAR_1)[VAR_4++] = VAR_0->outgoing_avail_ports[VAR_3];
 }
 FUNC_1(VAR_4 == VAR_2);
 return VAR_2;
}
