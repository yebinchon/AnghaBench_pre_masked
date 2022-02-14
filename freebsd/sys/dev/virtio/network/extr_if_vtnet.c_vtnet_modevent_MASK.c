
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_tx_header {int dummy; } ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;




 int * FUNC_0 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_3(module_t VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 static int VAR_7 = 0;

 switch (VAR_4) {
 case 131:
  if (VAR_7++ == 0)
   VAR_2 = FUNC_0("vtnet_tx_hdr",
    sizeof(struct vtnet_tx_header),
    ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0);
  break;
 case 130:
  if (FUNC_2(VAR_2) > 0)
   VAR_6 = VAR_0;
  break;
 case 128:
  if (--VAR_7 == 0) {
   FUNC_1(VAR_2);
   VAR_2 = ((void*)0);
  }
  break;
 case 129:
  break;
 default:
  VAR_6 = VAR_1;
  break;
 }

 return (VAR_6);
}
